#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MissionCustomValueCalculation.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CalculateMissionCustomValue; }
namespace RPG::GameCore { class MissionCustomValue; }
namespace RPG::GameCore { class MissionCustomValuePair; }

#define RPG_GAMECORE_CALCULATEMISSIONCUSTOMVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5274F0)
#define RPG_GAMECORE_CALCULATEMISSIONCUSTOMVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D527500)
#define RPG_GAMECORE_CALCULATEMISSIONCUSTOMVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5274C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CalculateMissionCustomValue_TypeDefinitionIndex = 20443;

	class CalculateMissionCustomValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TargetSubmissionID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::MissionCustomValue* TargetMissionCustomValue; // 0x20
		::RPG::GameCore::MissionCustomValuePair* ValueA; // 0x28
		::RPG::GameCore::MissionCustomValuePair* ValueB; // 0x30
		::RPG::GameCore::MissionCustomValueCalculation Calculation; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCULATEMISSIONCUSTOMVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CalculateMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CalculateMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCULATEMISSIONCUSTOMVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CalculateMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CalculateMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCULATEMISSIONCUSTOMVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
