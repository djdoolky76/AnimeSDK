#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class GKFHOJFHFAB;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_ADDEXP_OFFSET UNITYSDK_OFFSET(0xF10C260)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xF104D60)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_GET_CUREXPINSTEP_OFFSET UNITYSDK_OFFSET(0xF110950)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_GET_CURMAXEXPOFSTEP_OFFSET UNITYSDK_OFFSET(0xF106DF0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_GET_CURSTEP_OFFSET UNITYSDK_OFFSET(0xF106E40)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_GET_CURTOTALEXP_OFFSET UNITYSDK_OFFSET(0xF106150)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_SETCUREXPINCURSTEP_OFFSET UNITYSDK_OFFSET(0xF107930)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_SETTOTALEXP_OFFSET UNITYSDK_OFFSET(0xF104E90)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__GETCURSTEPEXPMAX_OFFSET UNITYSDK_OFFSET(0xF110740)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__NOTIFYEXPCHANGE_OFFSET UNITYSDK_OFFSET(0xF1102F0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__ONOVERSTEP_OFFSET UNITYSDK_OFFSET(0xF1103C0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__SOLVEEXPINSTEP_OFFSET UNITYSDK_OFFSET(0xF110060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_ExpCalculator_TypeDefinitionIndex = 57273;

	class EvolveBuildGearManager_ExpCalculator : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ExpStepFormat; // 0x10
		::GKFHOJFHFAB* _NotifyParam; // 0x18
		::RPG::GameCore::TurnBasedGameMode* _GameMode; // 0x20
		::RPG::GameCore::FixPoint _CurTotalExp; // 0x28
		::RPG::GameCore::FixPoint _CurExpInStep; // 0x30
		::RPG::GameCore::FixPoint _CurStep; // 0x38
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::RPG::GameCore::EvolveBuildSeason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetTotalExp(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_SETTOTALEXP_OFFSET))(this, a1);
		}

		::System::Void _NotifyExpChange(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__NOTIFYEXPCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void AddExp(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_ADDEXP_OFFSET))(this, a1);
		}

		::System::Void SetCurExpInCurStep(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_SETCUREXPINCURSTEP_OFFSET))(this, a1);
		}

		::System::Void _SolveExpInStep(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__SOLVEEXPINSTEP_OFFSET))(this, a1);
		}

		::System::Void _OnOverStep(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__ONOVERSTEP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint _GetCurStepExpMax(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__GETCURSTEPEXPMAX_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurStep()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_GET_CURSTEP_OFFSET))(this);
		}

		::System::UInt32 get_CurTotalExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_GET_CURTOTALEXP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CurExpInStep()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_GET_CUREXPINSTEP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CurMaxExpOfStep()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_GET_CURMAXEXPOFSTEP_OFFSET))(this);
		}

	};
}
