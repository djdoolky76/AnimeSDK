#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class EndPropInteract; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define EIKFBBDOABG_AIDDHBJJJGA_OFFSET UNITYSDK_OFFSET(0x154CEE60)
#define EIKFBBDOABG_APOKOBGBNAH_OFFSET UNITYSDK_OFFSET(0x154CE880)
#define EIKFBBDOABG_CTOR_OFFSET UNITYSDK_OFFSET(0x154CE5F0)
#define EIKFBBDOABG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154CE6B0)
#define EIKFBBDOABG_FPNOJJIGEMK_OFFSET UNITYSDK_OFFSET(0x154CF060)
#define EIKFBBDOABG_HGACIMNEPFO_OFFSET UNITYSDK_OFFSET(0x154CE9F0)
#define EIKFBBDOABG_LEECAEBODMN_OFFSET UNITYSDK_OFFSET(0x154CEB70)
#define EIKFBBDOABG_MCOAJGCDFGD_OFFSET UNITYSDK_OFFSET(0x154CEF60)
#define EIKFBBDOABG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154CEBB0)
#define EIKFBBDOABG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x154CEE10)
#define EIKFBBDOABG_TICK_OFFSET UNITYSDK_OFFSET(0x154CE780)

	class EIKFBBDOABG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x18
		::RPG::GameCore::LevelGraph* DCOPELFHOLO; // 0x20
		::RPG::GameCore::PropComponent* IGLCEJGPMJN; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::RPG::GameCore::EndPropInteract* IGHAHBNLIJA; // 0x38
		::System::Boolean KAICIINDFBF; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EndPropInteract* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EndPropInteract*))((::PBYTE)hIl2Cpp + EIKFBBDOABG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKFBBDOABG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EIKFBBDOABG_TICK_OFFSET))(this, a1);
		}

		::System::Void HGACIMNEPFO(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + EIKFBBDOABG_HGACIMNEPFO_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::TaskConfig* LEECAEBODMN()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKFBBDOABG_LEECAEBODMN_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKFBBDOABG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void APOKOBGBNAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKFBBDOABG_APOKOBGBNAH_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKFBBDOABG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void AIDDHBJJJGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKFBBDOABG_AIDDHBJJJGA_OFFSET))(this);
		}

		::System::Void MCOAJGCDFGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKFBBDOABG_MCOAJGCDFGD_OFFSET))(this);
		}

		::System::Void FPNOJJIGEMK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EIKFBBDOABG_FPNOJJIGEMK_OFFSET))(this, a1);
		}

	};
