#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BMEILFMHJIF_CTOR_OFFSET UNITYSDK_OFFSET(0xC431B50)
#define BMEILFMHJIF_ECFLFDGEALH_OFFSET UNITYSDK_OFFSET(0xC431B10)
#define BMEILFMHJIF_FLJNFJFIHOI_OFFSET UNITYSDK_OFFSET(0xC4319D0)
#define BMEILFMHJIF_HOBKJMHIJHC_OFFSET UNITYSDK_OFFSET(0xC431AC0)
#define BMEILFMHJIF_LFPNIPDMOOM_OFFSET UNITYSDK_OFFSET(0xC431A70)
#define BMEILFMHJIF_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0xC431A20)

inline static constexpr unsigned int BMEILFMHJIF_TypeDefinitionIndex = 74264;

	class BMEILFMHJIF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEILFMHJIF_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ElationTimeAtmosphereType FLJNFJFIHOI()
		{
			return ((::RPG::GameCore::ElationTimeAtmosphereType(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEILFMHJIF_FLJNFJFIHOI_OFFSET))(this);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEILFMHJIF_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* LFPNIPDMOOM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEILFMHJIF_LFPNIPDMOOM_OFFSET))(this);
		}

		::System::String* HOBKJMHIJHC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEILFMHJIF_HOBKJMHIJHC_OFFSET))(this);
		}

		::System::Boolean ECFLFDGEALH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEILFMHJIF_ECFLFDGEALH_OFFSET))(this);
		}

	};
