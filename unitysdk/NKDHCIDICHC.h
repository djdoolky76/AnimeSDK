#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NKDHCIDICHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7AEF00)
#define NKDHCIDICHC_ECFLFDGEALH_OFFSET UNITYSDK_OFFSET(0x1A7AEEC0)
#define NKDHCIDICHC_FLJNFJFIHOI_OFFSET UNITYSDK_OFFSET(0x1A7AED60)
#define NKDHCIDICHC_HOBKJMHIJHC_OFFSET UNITYSDK_OFFSET(0x1A7AEE70)
#define NKDHCIDICHC_LFPNIPDMOOM_OFFSET UNITYSDK_OFFSET(0x1A7AEE20)
#define NKDHCIDICHC_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x1A7AEDB0)

inline static constexpr unsigned int NKDHCIDICHC_TypeDefinitionIndex = 74264;

	class NKDHCIDICHC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDHCIDICHC_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ElationTimeAtmosphereType FLJNFJFIHOI()
		{
			return ((::RPG::GameCore::ElationTimeAtmosphereType(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDHCIDICHC_FLJNFJFIHOI_OFFSET))(this);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDHCIDICHC_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* LFPNIPDMOOM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDHCIDICHC_LFPNIPDMOOM_OFFSET))(this);
		}

		::System::String* HOBKJMHIJHC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDHCIDICHC_HOBKJMHIJHC_OFFSET))(this);
		}

		::System::Boolean ECFLFDGEALH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDHCIDICHC_ECFLFDGEALH_OFFSET))(this);
		}

	};
