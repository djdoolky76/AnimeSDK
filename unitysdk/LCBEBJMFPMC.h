#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define LCBEBJMFPMC_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA3710)
#define LCBEBJMFPMC_ECFLFDGEALH_OFFSET UNITYSDK_OFFSET(0xBEA36D0)
#define LCBEBJMFPMC_FLJNFJFIHOI_OFFSET UNITYSDK_OFFSET(0xBEA3530)
#define LCBEBJMFPMC_HOBKJMHIJHC_OFFSET UNITYSDK_OFFSET(0xBEA3660)
#define LCBEBJMFPMC_LFPNIPDMOOM_OFFSET UNITYSDK_OFFSET(0xBEA35F0)
#define LCBEBJMFPMC_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0xBEA3580)

inline static constexpr unsigned int LCBEBJMFPMC_TypeDefinitionIndex = 74260;

	class LCBEBJMFPMC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBEBJMFPMC_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ElationTimeAtmosphereType FLJNFJFIHOI()
		{
			return ((::RPG::GameCore::ElationTimeAtmosphereType(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBEBJMFPMC_FLJNFJFIHOI_OFFSET))(this);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBEBJMFPMC_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* LFPNIPDMOOM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBEBJMFPMC_LFPNIPDMOOM_OFFSET))(this);
		}

		::System::String* HOBKJMHIJHC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBEBJMFPMC_HOBKJMHIJHC_OFFSET))(this);
		}

		::System::Boolean ECFLFDGEALH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBEBJMFPMC_ECFLFDGEALH_OFFSET))(this);
		}

	};
