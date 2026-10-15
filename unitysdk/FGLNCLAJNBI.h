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

#define FGLNCLAJNBI_AIDDHBJJJGA_OFFSET UNITYSDK_OFFSET(0x1575E7D0)
#define FGLNCLAJNBI_CEGIAIHOADO_OFFSET UNITYSDK_OFFSET(0x1575DCA0)
#define FGLNCLAJNBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1575DC90)
#define FGLNCLAJNBI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1575E030)
#define FGLNCLAJNBI_DMJKBKMKKCG_OFFSET UNITYSDK_OFFSET(0x1575E280)
#define FGLNCLAJNBI_FPNOJJIGEMK_OFFSET UNITYSDK_OFFSET(0x1575E8D0)
#define FGLNCLAJNBI_JBCANKEGEBN_OFFSET UNITYSDK_OFFSET(0x1575DF90)
#define FGLNCLAJNBI_MCOAJGCDFGD_OFFSET UNITYSDK_OFFSET(0x1575E100)
#define FGLNCLAJNBI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1575E350)
#define FGLNCLAJNBI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1575E880)
#define FGLNCLAJNBI_TICK_OFFSET UNITYSDK_OFFSET(0x1575E1B0)

inline static constexpr unsigned int FGLNCLAJNBI_TypeDefinitionIndex = 58722;

	class FGLNCLAJNBI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x18
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x20
		::RPG::GameCore::StartDialogueEntityInteract* IGHAHBNLIJA; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::RPG::GameCore::LevelGraph* DCOPELFHOLO; // 0x38
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
