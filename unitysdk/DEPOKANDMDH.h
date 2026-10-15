#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AlleyOrderData; }
namespace RPG::Client { class AlleySpecialOrderData; }

#define DEPOKANDMDH_JOLJKLAFHEP_OFFSET UNITYSDK_OFFSET(0xE51F940)
#define DEPOKANDMDH_OHFNGKOCCIO_OFFSET UNITYSDK_OFFSET(0xE51F9D0)

inline static constexpr unsigned int DEPOKANDMDH_TypeDefinitionIndex = 62263;

	class DEPOKANDMDH : public ::System::Object
	{
	public:
		static ::RPG::Client::AlleyOrderData* JOLJKLAFHEP(::System::UInt32 a1)
		{
			return ((::RPG::Client::AlleyOrderData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DEPOKANDMDH_JOLJKLAFHEP_OFFSET))(a1);
		}

		static ::RPG::Client::AlleySpecialOrderData* OHFNGKOCCIO(::System::UInt32 a1)
		{
			return ((::RPG::Client::AlleySpecialOrderData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DEPOKANDMDH_OHFNGKOCCIO_OFFSET))(a1);
		}

	};
