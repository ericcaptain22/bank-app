#ifndef HINTS_H
#define HINTS_H

// Array of hints for each bug
const char *hints[] = {
    "Hint: Validate the password properly in the login function.",
    "Hint: Update the user's balance in the deposit function.",
    "Hint: Check the user's balance before allowing a withdrawal.",
    "Hint: Update the receiver's balance in the transfer function.",
    "Hint: Prevent duplicate usernames in the account creation function.",
    "Hint: Handle empty transaction history correctly.",
    "Hint: Verify the old password before changing to a new one.",
    "Hint: Do not approve loans for negative amounts."
};

// Function to retrieve the next hint
const char *get_next_hint(int current_bug) {
    if (current_bug < 0 || current_bug >= sizeof(hints) / sizeof(hints[0])) {
        return "No more hints available.";
    }
    return hints[current_bug];
}

#endif
