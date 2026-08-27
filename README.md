# Overbuff-Project

Name: Imran Mukthar
CSE-302: Course Project

Dataset title: Overwatch hero statistics

Source: Keggle (https://www.kaggle.com/datasets/jamesryanralph/overwatch-hero-stats?resource=download)

------------------------
The variables I chose are: Hero, Win_rate, Rank

This is the same dataset I used in part 1. I chose this specific dataset because it’s relevant to my
favorite video game, “Overwatch 2”. This is a game I’m deeply knowledgeable on, and love
growing deeper intuition on it. Win rates with specific playable characters or “heroes” are really
important to know which characters perform well at a point in time, and which don't. It basically
tells you which heroes are better to win with. Another factor is a player’s individual rank, since
some heroes could be good in one rank, but worse in the other.

**Application 1: Binary Search Tree**:

The Overbuff records could be stored in a Binary Search Tree sorted by the win rate percentage.
This would allow the program to organize hero records from lowest to highest win rate. If a user
wanted to know which heroes in ranks had a win percentage above a certain number, the tree
could be searched and printed using reverse-order traversal. For people that play Overwatch, this
information would be useful for identifying “meta heroes”, meaning heroes that have the highest
performance. It would also help users analyze which heroes perform in a certain rank compared
to others.

**Application 2: Hash Map**::

A hash table could be used to map each hero name to all the records belonging to that hero. For
example, the key could be the hero name and accessing that would show only that heroes win
rate at different ranks. This would make it fast to look up a specific hero without scanning the
entire dataset. A player could enter a hero name and quickly see how that hero performs across
rank categories.

For my project I decided to use Application 1, using a BST to store my data and sort winrates
greater than the user’s input.
