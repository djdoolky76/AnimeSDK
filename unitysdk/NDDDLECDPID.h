#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class EndDialogueEntityInteract; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class TaskContext; }

#define NDDDLECDPID_AIDDHBJJJGA_OFFSET UNITYSDK_OFFSET(0xBB208F0)
#define NDDDLECDPID_AIOABAGGGAE_OFFSET UNITYSDK_OFFSET(0xBB209B0)
#define NDDDLECDPID_CTOR_OFFSET UNITYSDK_OFFSET(0xBB20360)
#define NDDDLECDPID_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB20370)
#define NDDDLECDPID_DMJKBKMKKCG_OFFSET UNITYSDK_OFFSET(0xBB205D0)
#define NDDDLECDPID_FPNOJJIGEMK_OFFSET UNITYSDK_OFFSET(0xBB20BE0)
#define NDDDLECDPID_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBB20AB0)
#define NDDDLECDPID_MCOAJGCDFGD_OFFSET UNITYSDK_OFFSET(0xBB20440)
#define NDDDLECDPID_NAFFHAJJFFC_OFFSET UNITYSDK_OFFSET(0xBB20800)
#define NDDDLECDPID_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBB20AC0)
#define NDDDLECDPID_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB206F0)
#define NDDDLECDPID_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB20B90)
#define NDDDLECDPID_TICK_OFFSET UNITYSDK_OFFSET(0xBB20500)

inline static constexpr unsigned int NDDDLECDPID_TypeDefinitionIndex = 58114;

	class NDDDLECDPID : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::LevelGraph* DCOPELFHOLO; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x28
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x30
		::RPG::GameCore::EndDialogueEntityInteract* IGHAHBNLIJA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EndDialogueEntityInteract* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EndDialogueEntityInteract*))((::PBYTE)hIl2Cpp + NDDDLECDPID_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDDLECDPID_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDDDLECDPID_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDDLECDPID_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDDLECDPID_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDDLECDPID_ONSKIP_OFFSET))(this);
		}

		::System::Boolean NAFFHAJJFFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDDLECDPID_NAFFHAJJFFC_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraph* AIOABAGGGAE()
		{
			return ((::RPG::GameCore::LevelGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDDLECDPID_AIOABAGGGAE_OFFSET))(this);
		}

		::System::Void DMJKBKMKKCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDDLECDPID_DMJKBKMKKCG_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDDLECDPID_ONTASKRESET_OFFSET))(this);
		}

		::System::Void AIDDHBJJJGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDDLECDPID_AIDDHBJJJGA_OFFSET))(this);
		}

		::System::Void MCOAJGCDFGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDDLECDPID_MCOAJGCDFGD_OFFSET))(this);
		}

		::System::Void FPNOJJIGEMK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NDDDLECDPID_FPNOJJIGEMK_OFFSET))(this, a1);
		}

	};
