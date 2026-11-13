#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BMEILFMHJIF_CTOR_OFFSET UNITYSDK_OFFSET(0x18B7ADE0)
#define BMEILFMHJIF_ECFLFDGEALH_OFFSET UNITYSDK_OFFSET(0x18B7ADA0)
#define BMEILFMHJIF_FLJNFJFIHOI_OFFSET UNITYSDK_OFFSET(0x18B7AC60)
#define BMEILFMHJIF_HOBKJMHIJHC_OFFSET UNITYSDK_OFFSET(0x18B7AD50)
#define BMEILFMHJIF_LFPNIPDMOOM_OFFSET UNITYSDK_OFFSET(0x18B7AD00)
#define BMEILFMHJIF_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x18B7ACB0)

inline static constexpr unsigned int BMEILFMHJIF_TypeDefinitionIndex = 74263;

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
