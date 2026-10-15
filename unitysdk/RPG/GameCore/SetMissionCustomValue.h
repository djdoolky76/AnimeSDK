#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionCustomValue; }
namespace RPG::GameCore { class SetMissionCustomValue; }

#define RPG_GAMECORE_SETMISSIONCUSTOMVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB9C00)
#define RPG_GAMECORE_SETMISSIONCUSTOMVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB9C10)
#define RPG_GAMECORE_SETMISSIONCUSTOMVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB9BD0)

namespace RPG::GameCore
{
	class SetMissionCustomValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::MissionCustomValue* MissionCustomValue; // 0x20
		::System::UInt32 CustomValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONCUSTOMVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONCUSTOMVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONCUSTOMVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
