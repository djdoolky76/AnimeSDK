#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PhotoGraphWaitIdentifyFinish; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PHOTOGRAPHWAITIDENTIFYFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D914320)
#define RPG_GAMECORE_PHOTOGRAPHWAITIDENTIFYFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D914330)
#define RPG_GAMECORE_PHOTOGRAPHWAITIDENTIFYFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9142F0)

namespace RPG::GameCore
{
	class PhotoGraphWaitIdentifyFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* WaitTargetType; // 0x18
		::RPG::GameCore::DynamicFloat* AimNpcID; // 0x20
		::System::Boolean WaitAll; // 0x28
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnIdentifyFinish; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnIdentifyFailed; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPreviewFinish; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHWAITIDENTIFYFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphWaitIdentifyFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphWaitIdentifyFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHWAITIDENTIFYFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphWaitIdentifyFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphWaitIdentifyFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHWAITIDENTIFYFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
