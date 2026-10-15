#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinKeywordEventType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KBHPNKKKAAL.h"

#define EDAACJOHDHH_FCACMINFFMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1330A110)
#define EDAACJOHDHH_FCACMINFFMG_FAIGMHLIEJC_OFFSET UNITYSDK_OFFSET(0x1330A090)
#define EDAACJOHDHH_FCACMINFFMG_GET_EVENTMASK_OFFSET UNITYSDK_OFFSET(0x1330A0A0)
#define EDAACJOHDHH_FCACMINFFMG_PDIDDJDLILB_OFFSET UNITYSDK_OFFSET(0x1330A0C0)
#define EDAACJOHDHH_FCACMINFFMG_SET_EVENTMASK_OFFSET UNITYSDK_OFFSET(0x1330A0B0)

inline static constexpr unsigned int EDAACJOHDHH_FCACMINFFMG_TypeDefinitionIndex = 55984;

	class EDAACJOHDHH_FCACMINFFMG : public ::System::Object
	{
	public:
		::RPG::GameCore::FateRinKeywordEventType _EventMask_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAACJOHDHH_FCACMINFFMG_CTOR_OFFSET))(this);
		}

		::System::UInt32 FAIGMHLIEJC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAACJOHDHH_FCACMINFFMG_FAIGMHLIEJC_OFFSET))(this);
		}

		::RPG::GameCore::FateRinKeywordEventType get_EventMask()
		{
			return ((::RPG::GameCore::FateRinKeywordEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAACJOHDHH_FCACMINFFMG_GET_EVENTMASK_OFFSET))(this);
		}

		::System::Void set_EventMask(::RPG::GameCore::FateRinKeywordEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinKeywordEventType))((::PBYTE)hIl2Cpp + EDAACJOHDHH_FCACMINFFMG_SET_EVENTMASK_OFFSET))(this, a1);
		}

		::System::Void PDIDDJDLILB(::KBHPNKKKAAL a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBHPNKKKAAL))((::PBYTE)hIl2Cpp + EDAACJOHDHH_FCACMINFFMG_PDIDDJDLILB_OFFSET))(this, a1);
		}

	};
