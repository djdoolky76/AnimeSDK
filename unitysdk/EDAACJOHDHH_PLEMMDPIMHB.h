#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinKeywordEventType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KBHPNKKKAAL.h"

#define EDAACJOHDHH_PLEMMDPIMHB_AEJIFOGHDCK_OFFSET UNITYSDK_OFFSET(0x1330F2E0)
#define EDAACJOHDHH_PLEMMDPIMHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1330F3E0)
#define EDAACJOHDHH_PLEMMDPIMHB_FAIGMHLIEJC_OFFSET UNITYSDK_OFFSET(0x1330F2B0)
#define EDAACJOHDHH_PLEMMDPIMHB_GET_EVENTMASK_OFFSET UNITYSDK_OFFSET(0x1330F2C0)
#define EDAACJOHDHH_PLEMMDPIMHB_SET_EVENTMASK_OFFSET UNITYSDK_OFFSET(0x1330F2D0)

	class EDAACJOHDHH_PLEMMDPIMHB : public ::System::Object
	{
	public:
		::RPG::GameCore::FateRinKeywordEventType _EventMask_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAACJOHDHH_PLEMMDPIMHB_CTOR_OFFSET))(this);
		}

		::System::UInt32 FAIGMHLIEJC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAACJOHDHH_PLEMMDPIMHB_FAIGMHLIEJC_OFFSET))(this);
		}

		::RPG::GameCore::FateRinKeywordEventType get_EventMask()
		{
			return ((::RPG::GameCore::FateRinKeywordEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAACJOHDHH_PLEMMDPIMHB_GET_EVENTMASK_OFFSET))(this);
		}

		::System::Void set_EventMask(::RPG::GameCore::FateRinKeywordEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinKeywordEventType))((::PBYTE)hIl2Cpp + EDAACJOHDHH_PLEMMDPIMHB_SET_EVENTMASK_OFFSET))(this, a1);
		}

		::System::Void AEJIFOGHDCK(::KBHPNKKKAAL a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBHPNKKKAAL))((::PBYTE)hIl2Cpp + EDAACJOHDHH_PLEMMDPIMHB_AEJIFOGHDCK_OFFSET))(this, a1);
		}

	};
