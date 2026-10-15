#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PreloadItemFlag.h"
#include "unitysdk/System/Object.h"

#define JMIODLDOHPN_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB2628F0)
#define JMIODLDOHPN_MGIAPKNODHI_OFFSET UNITYSDK_OFFSET(0xB262940)

inline static constexpr unsigned int JMIODLDOHPN_TypeDefinitionIndex = 59699;

	class JMIODLDOHPN : public ::System::Object
	{
	public:
		static ::System::Boolean JJNFOPNOPBF(::RPG::Client::PreloadItemFlag a1, ::RPG::Client::PreloadItemFlag a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::PreloadItemFlag, ::RPG::Client::PreloadItemFlag))((::PBYTE)hIl2Cpp + JMIODLDOHPN_JJNFOPNOPBF_OFFSET))(a1, a2);
		}

		static ::System::Boolean MGIAPKNODHI(::RPG::Client::PreloadItemFlag a1, ::RPG::Client::PreloadItemFlag a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::PreloadItemFlag, ::RPG::Client::PreloadItemFlag))((::PBYTE)hIl2Cpp + JMIODLDOHPN_MGIAPKNODHI_OFFSET))(a1, a2);
		}

	};
