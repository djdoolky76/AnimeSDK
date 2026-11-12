#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FeverTimePeriodType.h"
#include "unitysdk/RPG/GameCore/FeverTimeToastType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define RPG_GAMECORE_FEVERTIMEINFOCHANGEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xF120960)
#define RPG_GAMECORE_FEVERTIMEINFOCHANGEPARAM_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xF120810)
#define RPG_GAMECORE_FEVERTIMEINFOCHANGEPARAM_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF1207C0)
#define RPG_GAMECORE_FEVERTIMEINFOCHANGEPARAM_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0xF120860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FeverTimeInfoChangeParam_TypeDefinitionIndex = 58069;

	class FeverTimeInfoChangeParam : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::FixPoint ExtraCount; // 0x18
		::RPG::GameCore::FeverTimeToastType ToastType; // 0x20
		::System::Boolean IsLimitReached; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FixPoint MaxProgress; // 0x28
		::RPG::GameCore::FeverTimePeriodType PeriodType; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID ToastTextID; // 0x38
		::RPG::GameCore::FixPoint CurProgress; // 0x48
		::RPG::GameCore::FixPoint ToastDelta; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FEVERTIMEINFOCHANGEPARAM_CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FEVERTIMEINFOCHANGEPARAM_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FEVERTIMEINFOCHANGEPARAM_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_FillAmount()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FEVERTIMEINFOCHANGEPARAM_GET_FILLAMOUNT_OFFSET))(this);
		}

	};
}
