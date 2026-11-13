#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityRealityShow/RealityShowMedalIconSize.h"
#include "unitysdk/RPG/Client/ActivityRealityShow/RealityShowMedalTier.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define GIMEOPDPNEM_CAGMCJHAOMJ_OFFSET UNITYSDK_OFFSET(0x1A3EB440)
#define GIMEOPDPNEM_EHDCKOLNEPI_OFFSET UNITYSDK_OFFSET(0x1A3EB3B0)
#define GIMEOPDPNEM_KDJANOAPAFO_OFFSET UNITYSDK_OFFSET(0x1A3EB1F0)

inline static constexpr unsigned int GIMEOPDPNEM_TypeDefinitionIndex = 84927;

	class GIMEOPDPNEM : public ::System::Object
	{
	public:
		// static const ::System::String* GGDNHDEGLIK; // 0x0
		static ::System::String* KDJANOAPAFO(::RPG::Client::ActivityRealityShow::RealityShowMedalTier a1, ::RPG::Client::ActivityRealityShow::RealityShowMedalIconSize a2)
		{
			return ((::System::String*(*)(::RPG::Client::ActivityRealityShow::RealityShowMedalTier, ::RPG::Client::ActivityRealityShow::RealityShowMedalIconSize))((::PBYTE)hIl2Cpp + GIMEOPDPNEM_KDJANOAPAFO_OFFSET))(a1, a2);
		}

		static ::System::String* EHDCKOLNEPI(::RPG::Client::ActivityRealityShow::RealityShowMedalTier a1)
		{
			return ((::System::String*(*)(::RPG::Client::ActivityRealityShow::RealityShowMedalTier))((::PBYTE)hIl2Cpp + GIMEOPDPNEM_EHDCKOLNEPI_OFFSET))(a1);
		}

		static ::System::String* CAGMCJHAOMJ(::RPG::Client::ActivityRealityShow::RealityShowMedalIconSize a1)
		{
			return ((::System::String*(*)(::RPG::Client::ActivityRealityShow::RealityShowMedalIconSize))((::PBYTE)hIl2Cpp + GIMEOPDPNEM_CAGMCJHAOMJ_OFFSET))(a1);
		}

	};
