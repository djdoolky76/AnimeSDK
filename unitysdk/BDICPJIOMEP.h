#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::BlindBox::Trade { class IBlindBoxTradeOrder; }

#define BDICPJIOMEP_MPGGAADKOOC_OFFSET UNITYSDK_OFFSET(0x162FB870)
#define BDICPJIOMEP_PDMMLIOBDOB_OFFSET UNITYSDK_OFFSET(0x162FB570)

inline static constexpr unsigned int BDICPJIOMEP_TypeDefinitionIndex = 74867;

	class BDICPJIOMEP : public ::System::Object
	{
	public:
		// static const ::System::String* CFBOAKOLGAJ; // 0x0
		static ::System::Boolean PDMMLIOBDOB(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + BDICPJIOMEP_PDMMLIOBDOB_OFFSET))(a1);
		}

		static ::System::UInt64 MPGGAADKOOC(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
		{
			return ((::System::UInt64(*)(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + BDICPJIOMEP_MPGGAADKOOC_OFFSET))(a1);
		}

	};
