#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseGachaPoolData; }

#define DOKDJNEKBMJ_AGDONHEEJGP_OFFSET UNITYSDK_OFFSET(0x11FE7ED0)

inline static constexpr unsigned int DOKDJNEKBMJ_TypeDefinitionIndex = 64321;

	class DOKDJNEKBMJ : public ::System::Object
	{
	public:
		static ::RPG::Client::BaseGachaPoolData* AGDONHEEJGP(::System::UInt32 a1)
		{
			return ((::RPG::Client::BaseGachaPoolData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DOKDJNEKBMJ_AGDONHEEJGP_OFFSET))(a1);
		}

	};
