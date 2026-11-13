#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class DialogueEntityInteractOverride; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class StartDialogueEntityInteract; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define FGLNCLAJNBI_AIDDHBJJJGA_OFFSET UNITYSDK_OFFSET(0x18A93B80)
#define FGLNCLAJNBI_CEGIAIHOADO_OFFSET UNITYSDK_OFFSET(0x18A93050)
#define FGLNCLAJNBI_CTOR_OFFSET UNITYSDK_OFFSET(0x18A93040)
#define FGLNCLAJNBI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A933E0)
#define FGLNCLAJNBI_DMJKBKMKKCG_OFFSET UNITYSDK_OFFSET(0x18A93630)
#define FGLNCLAJNBI_FPNOJJIGEMK_OFFSET UNITYSDK_OFFSET(0x18A93C80)
#define FGLNCLAJNBI_JBCANKEGEBN_OFFSET UNITYSDK_OFFSET(0x18A93340)
#define FGLNCLAJNBI_MCOAJGCDFGD_OFFSET UNITYSDK_OFFSET(0x18A934B0)
#define FGLNCLAJNBI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18A93700)
#define FGLNCLAJNBI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18A93C30)
#define FGLNCLAJNBI_TICK_OFFSET UNITYSDK_OFFSET(0x18A93560)

inline static constexpr unsigned int FGLNCLAJNBI_TypeDefinitionIndex = 59990;

	class FGLNCLAJNBI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::RPG::GameCore::LevelGraph* DCOPELFHOLO; // 0x28
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x30
		::RPG::GameCore::StartDialogueEntityInteract* IGHAHBNLIJA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartDialogueEntityInteract* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartDialogueEntityInteract*))((::PBYTE)hIl2Cpp + FGLNCLAJNBI_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void CEGIAIHOADO(::RPG::GameCore::LevelGraphConfig* a1, ::RPG::GameCore::DialogueEntityInteractOverride* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::LevelGraphConfig*, ::RPG::GameCore::DialogueEntityInteractOverride*))((::PBYTE)hIl2Cpp + FGLNCLAJNBI_CEGIAIHOADO_OFFSET))(a1, a2);
		}

		static ::System::Void JBCANKEGEBN(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::DialogueEntityInteractOverride* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskConfig*, ::RPG::GameCore::DialogueEntityInteractOverride*))((::PBYTE)hIl2Cpp + FGLNCLAJNBI_JBCANKEGEBN_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLNCLAJNBI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGLNCLAJNBI_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLNCLAJNBI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void DMJKBKMKKCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLNCLAJNBI_DMJKBKMKKCG_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLNCLAJNBI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void AIDDHBJJJGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLNCLAJNBI_AIDDHBJJJGA_OFFSET))(this);
		}

		::System::Void MCOAJGCDFGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLNCLAJNBI_MCOAJGCDFGD_OFFSET))(this);
		}

		::System::Void FPNOJJIGEMK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FGLNCLAJNBI_FPNOJJIGEMK_OFFSET))(this, a1);
		}

	};
