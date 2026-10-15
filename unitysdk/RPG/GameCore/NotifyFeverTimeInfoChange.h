#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FeverTimePeriodType.h"
#include "unitysdk/RPG/GameCore/FeverTimeToastType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class NotifyFeverTimeInfoChange; }

#define RPG_GAMECORE_NOTIFYFEVERTIMEINFOCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8AD160)
#define RPG_GAMECORE_NOTIFYFEVERTIMEINFOCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8AD170)
#define RPG_GAMECORE_NOTIFYFEVERTIMEINFOCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8AD130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NotifyFeverTimeInfoChange_TypeDefinitionIndex = 23253;

	class NotifyFeverTimeInfoChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FeverTimePeriodType PeriodType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CurProgress; // 0x20
		::RPG::GameCore::DynamicFloat* MaxProgress; // 0x28
		::RPG::GameCore::DynamicFloat* ExtraCount; // 0x30
		::System::Boolean IsLimitReached; // 0x38
		::System::Byte _padding1[0x3];
		::RPG::GameCore::FeverTimeToastType ToastType; // 0x3C
		::RPG::GameCore::DynamicFloat* ToastDelta; // 0x40
		::RPG::Client::TextID ToastTextID; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYFEVERTIMEINFOCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NotifyFeverTimeInfoChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NotifyFeverTimeInfoChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYFEVERTIMEINFOCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NotifyFeverTimeInfoChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NotifyFeverTimeInfoChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYFEVERTIMEINFOCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
