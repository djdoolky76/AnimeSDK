#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinKeywordEventType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KBHPNKKKAAL.h"

#define ABEBFNICDHE_POAANMNNEGN_AEJIFOGHDCK_OFFSET UNITYSDK_OFFSET(0x18CA0D10)
#define ABEBFNICDHE_POAANMNNEGN_CTOR_OFFSET UNITYSDK_OFFSET(0x18CA0E10)
#define ABEBFNICDHE_POAANMNNEGN_FAIGMHLIEJC_OFFSET UNITYSDK_OFFSET(0x18CA0C00)
#define ABEBFNICDHE_POAANMNNEGN_GET_EVENTMASK_OFFSET UNITYSDK_OFFSET(0x18CA0C10)
#define ABEBFNICDHE_POAANMNNEGN_PDIDDJDLILB_OFFSET UNITYSDK_OFFSET(0x18CA0C70)
#define ABEBFNICDHE_POAANMNNEGN_SET_EVENTMASK_OFFSET UNITYSDK_OFFSET(0x18CA0C20)

inline static constexpr unsigned int ABEBFNICDHE_POAANMNNEGN_TypeDefinitionIndex = 57184;

	class ABEBFNICDHE_POAANMNNEGN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEBFNICDHE_POAANMNNEGN_CTOR_OFFSET))(this);
		}

		::System::UInt32 FAIGMHLIEJC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEBFNICDHE_POAANMNNEGN_FAIGMHLIEJC_OFFSET))(this);
		}

		::RPG::GameCore::FateRinKeywordEventType get_EventMask()
		{
			return ((::RPG::GameCore::FateRinKeywordEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEBFNICDHE_POAANMNNEGN_GET_EVENTMASK_OFFSET))(this);
		}

		::System::Void set_EventMask(::RPG::GameCore::FateRinKeywordEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinKeywordEventType))((::PBYTE)hIl2Cpp + ABEBFNICDHE_POAANMNNEGN_SET_EVENTMASK_OFFSET))(this, a1);
		}

		::System::Void PDIDDJDLILB(::KBHPNKKKAAL a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBHPNKKKAAL))((::PBYTE)hIl2Cpp + ABEBFNICDHE_POAANMNNEGN_PDIDDJDLILB_OFFSET))(this, a1);
		}

		::System::Void AEJIFOGHDCK(::KBHPNKKKAAL a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBHPNKKKAAL))((::PBYTE)hIl2Cpp + ABEBFNICDHE_POAANMNNEGN_AEJIFOGHDCK_OFFSET))(this, a1);
		}

	};
