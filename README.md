# AnimeSDK

This repository contains auto-generated Unity SDKs for popular anime games.  
Each game lives in its own dedicated branch with its complete SDK files.

## Available Branches

- `honkai-star-rail` — Honkai: Star Rail
- `zenless-zone-zero` — Zenless Zone Zero

To get the SDK for a specific game, just switch to the corresponding branch:

```bash
git checkout <name>
```

Replace `<name>` with the name of the game branch you want.

## Usage Example

- **[Pipsi-HSR](https://github.com/Z4ee/Pipsi-HSR)**

## Honkai: Star Rail 4.6.0 — updating from 4.5

The 4.6 tree keeps the 4.5 conventions: namespace folders, `_N` / `_HASH` class
names, `*_OFFSET` method macros, `hIl2Cpp`, static getters and `Il2CppClass`.

Compatibility aids included in this snapshot:

- `*_TypeDefinitionIndex` constants are emitted again for every class/enum, and
  `Il2CppClass::FromTypeDefinitionIndex(index)` resolves them through the live
  class enumeration. The values are enumeration indices local to this snapshot
  (not the game's raw metadata indices) — use them as opaque handles, exactly
  like the 4.5 SDK did.
- `unitysdk/Class_2_C53551EA56D92DA8.h` aliases the 4.6 name of that anonymous
  battle-task class (`KLCEMHGDCCC`), including its method macros, so code such
  as Pipsi-HSR ports without renaming call sites.

Game updates still move members and offsets around; expect the usual per-feature
porting on top of these aliases.
