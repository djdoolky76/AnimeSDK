#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PreloadItemFlag.h"
#include "unitysdk/System/Object.h"

#define JMIODLDOHPN_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xBA93DE0)
#define JMIODLDOHPN_MGIAPKNODHI_OFFSET UNITYSDK_OFFSET(0xBA93E30)

inline static constexpr unsigned int JMIODLDOHPN_TypeDefinitionIndex = 60975;

	class JMIODLDOHPN : public ::System::Object
	{
	public:
		static ::System::Boolean JJNFOPNOPBF(::RPG::GameCore::PreloadItemFlag a1, ::RPG::GameCore::PreloadItemFlag a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PreloadItemFlag, ::RPG::GameCore::PreloadItemFlag))((::PBYTE)hIl2Cpp + JMIODLDOHPN_JJNFOPNOPBF_OFFSET))(a1, a2);
		}

		static ::System::Boolean MGIAPKNODHI(::RPG::GameCore::PreloadItemFlag a1, ::RPG::GameCore::PreloadItemFlag a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PreloadItemFlag, ::RPG::GameCore::PreloadItemFlag))((::PBYTE)hIl2Cpp + JMIODLDOHPN_MGIAPKNODHI_OFFSET))(a1, a2);
		}

	};
