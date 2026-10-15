#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityRaidAlleyOrderData; }
namespace RPG::Client { class ActivityRaidAlleySpecialOrderData; }

#define PPLMGPGLPMB_JOLJKLAFHEP_OFFSET UNITYSDK_OFFSET(0xC38D6A0)
#define PPLMGPGLPMB_OHFNGKOCCIO_OFFSET UNITYSDK_OFFSET(0xC38D720)

inline static constexpr unsigned int PPLMGPGLPMB_TypeDefinitionIndex = 62242;

	class PPLMGPGLPMB : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityRaidAlleyOrderData* JOLJKLAFHEP(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityRaidAlleyOrderData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PPLMGPGLPMB_JOLJKLAFHEP_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityRaidAlleySpecialOrderData* OHFNGKOCCIO(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityRaidAlleySpecialOrderData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PPLMGPGLPMB_OHFNGKOCCIO_OFFSET))(a1);
		}

	};
