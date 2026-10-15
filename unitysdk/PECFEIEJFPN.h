#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/PropInteractMode.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class StartPropInteractMode; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define PECFEIEJFPN_AIDDHBJJJGA_OFFSET UNITYSDK_OFFSET(0xC034030)
#define PECFEIEJFPN_CEGIAIHOADO_OFFSET UNITYSDK_OFFSET(0xC033540)
#define PECFEIEJFPN_CHCJOCNOOCI_OFFSET UNITYSDK_OFFSET(0xC033DE0)
#define PECFEIEJFPN_CTOR_OFFSET UNITYSDK_OFFSET(0xC033530)
#define PECFEIEJFPN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC033890)
#define PECFEIEJFPN_FPNOJJIGEMK_OFFSET UNITYSDK_OFFSET(0xC034100)
#define PECFEIEJFPN_LEECAEBODMN_OFFSET UNITYSDK_OFFSET(0xC033FF0)
#define PECFEIEJFPN_MCOAJGCDFGD_OFFSET UNITYSDK_OFFSET(0xC033960)
#define PECFEIEJFPN_MNENBLBECOA_OFFSET UNITYSDK_OFFSET(0xC033670)
#define PECFEIEJFPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC033AF0)
#define PECFEIEJFPN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC033FA0)
#define PECFEIEJFPN_TICK_OFFSET UNITYSDK_OFFSET(0xC033A30)

	class PECFEIEJFPN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::LevelGraph* DCOPELFHOLO; // 0x20
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x28
		::RPG::GameCore::StartPropInteractMode* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartPropInteractMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartPropInteractMode*))((::PBYTE)hIl2Cpp + PECFEIEJFPN_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void CEGIAIHOADO(::RPG::GameCore::LevelGraphConfig* a1, ::RPG::GameCore::PropInteractMode a2, ::RPG::GameCore::TaskConfig* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::LevelGraphConfig*, ::RPG::GameCore::PropInteractMode, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + PECFEIEJFPN_CEGIAIHOADO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MNENBLBECOA(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::RPG::GameCore::PropInteractMode a2, ::RPG::GameCore::TaskConfig* a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::RPG::GameCore::PropInteractMode, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + PECFEIEJFPN_MNENBLBECOA_OFFSET))(a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECFEIEJFPN_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PECFEIEJFPN_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECFEIEJFPN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECFEIEJFPN_ONTASKRESET_OFFSET))(this);
		}

		::RPG::GameCore::TaskConfig* LEECAEBODMN()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECFEIEJFPN_LEECAEBODMN_OFFSET))(this);
		}

		::System::Void CHCJOCNOOCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECFEIEJFPN_CHCJOCNOOCI_OFFSET))(this);
		}

		::System::Void AIDDHBJJJGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECFEIEJFPN_AIDDHBJJJGA_OFFSET))(this);
		}

		::System::Void MCOAJGCDFGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECFEIEJFPN_MCOAJGCDFGD_OFFSET))(this);
		}

		::System::Void FPNOJJIGEMK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + PECFEIEJFPN_FPNOJJIGEMK_OFFSET))(this, a1);
		}

	};
