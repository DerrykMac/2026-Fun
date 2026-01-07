# 365 days of Repos

## Day 0 - Repository Initialization
If you are new here:
### This is a Repository where I will be trying to commit something every day for all of [This year] aka 2026.
Sometimes its code, sometimes its updating a file in the folders, sometimes its what happended in my life and sometimes its just a full blown rant. (I try keep thoes in [Rants.md](./Rants.md))
I also write topics in [FutureTopics.md](./FutureTopics.md) that I want to cover in the future. Do i get to them all? well by the fact that im taking my 2025 list over to 2026, No lol. But i'll do my best :D

Update on the repository: [Saving](/Saving/) folder will how have have the old stuff from preious years organized in subfolders. Because those are for helping others i want it to be easy to find.

Thats all for now, This was written 2025 so I'll write Day 1 when 2026 starts (Hopefully). <br>
Also dont expect much Day 1, I have no time New Years day lol.

## Day 1 - Happy New Year 2026!
I don't have much to say but happy new year. 

## Day 6 - I Live
I GOT SO SICK, WOW. I literally didnt have the strength to type on my computer, but we're back now. <br>
I want to kick things off from now before I derail so here's some IP facts for local networking:

An IP address is a string of numbers used to identify a device that is connected to a network. the address is used to bla bla bla, Computer uses numbers to find other computers basically. <br>
Imma only talk about IPv4 rn, because of simplicity and totally not because i have no clue how a IPv6 works :)

Heres an IP address `192.168.10.2` <br> 
Now why do i care about these numbers, its just binary slop right? Na mate you can read it too <br>

First part `192.168` that can tell you if the IP is private or public, most IPs are public (i mean if they wernt there wouldnt really be an internet now) but a select few are private
Private IP ranges are: `192.168.x.x`, `10.x.x.x`, `172.16.x.x` to `172.31.x.x` <br>
what does private mean? well it means **THERE IN YOUR WALLS!!!**, na im serious, those private IPs are devices connected to the same network you are, its used by your router and your device to talk to each other. <br>
if the IP is public then it has to go through the router (But we'll talk about that another day) <br>
also, if its `127.x.x.x` then, IT WAS YOU BARRY, YOU ARE THE IP. Basically its your own computer, but nothing else can talk to it. <br>

Next part `.10.2` that tells you what device you are on ur network, typically a normal home network can only take 254 devices so the ips go from `192.168.0.1` to `192.168.0.255` and why would you ever need any more than 255 people on a wifi? well buisnesses do, my old work place had like 500 staff so they can get bigger plans from there ISP and get IPs like `192.168.1.1` to `192.168.5.255` which is like... 255 * 5 the amout of devices :D <br>

There's alot more IP stuff i could talk about, did you know that the Internet is complicated? ikr? crazy! <br>
But anywho i have 365 days to write so i'll save stuff for later.

Thanks for reading, and I hope your 2026 is going better than the americans.

## Day 7 - More IP Stuff
Before I start Today's entry, let me just get it out there, most days wont be as long as yesterday's

With that out the way, lets talk about Transportation of information. How does your computer get information from another computer? <br>
lets take it step by step <br>
1. Your Device sends a request to a specific IP address
2. The request is sent to whatever device you are using to connect to the internet, maybe its the router via wifi, or a switch via ethernet cable whatever it may be eventually
3. The request is sent upstream until it hits a device that can route IPs, for simplicity we'll say it hits your router
4. The router checks if the IP is inside your house (Private IP) or outside (Public IP)
5. If its private the router sends the request to the device otherwise
6. The router sends the request upstream to your ISP, note: it doesnt immediately go to the ISP, and has to go through multiple devices set up by ur ISP first.
7. The ISP will check alot, but for traviling sake they will check:
    1. Is the Destination IP on the same ISP?
    2. Is the Destination IP in the country?
8. After that it will either send the data to the destination on there own lines or send it to another ISP to diliver it
9. The data is now traveling the world, going above poles and large savanas, under deep seas no man has faced, over mountains, between the stars, until it reaches your destination
10. The Destination IP will get that request, process it and send back the data following steps 5-9 in reverse
11. The data gets to your router, and the router send it to the correct device, Your device
12. You enjoy your 8k tenticle anime

And also all of this happens in milliseconds, crazy

Also, if you wonder how a router knows if an IP is private or public, its actually because of 2 more numbers that you may have seen if you ever tired making your ip static, the *subnet mask* and the *gateway* <br>
The gateway is the simplest to understand, its litterally the IP of the router and also the first IP on your network, theres a good chance your gateway is `192.168.0.1` <br>
The subnet mask is a bit more complicated, its like a reverse binary something, complicated math nerd stuff, it basically tells the router how many devices CAN be on the network, remember how i said most ISPs only give 254? well then the subnet mask has to be `255.255.255.0`, 
A mask like `255.255.252.0` would allow for 1022 devices on the network<br>

How does that work? i cant be bothered to explain, i typed enough lol. See you tomorrow