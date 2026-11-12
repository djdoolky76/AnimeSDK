#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NGONMJHKCMB_CTOR_OFFSET UNITYSDK_OFFSET(0xC48F460)
#define NGONMJHKCMB_ECFLFDGEALH_OFFSET UNITYSDK_OFFSET(0xC48F420)
#define NGONMJHKCMB_FLJNFJFIHOI_OFFSET UNITYSDK_OFFSET(0xC48F280)
#define NGONMJHKCMB_HOBKJMHIJHC_OFFSET UNITYSDK_OFFSET(0xC48F3B0)
#define NGONMJHKCMB_LFPNIPDMOOM_OFFSET UNITYSDK_OFFSET(0xC48F340)
#define NGONMJHKCMB_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0xC48F2D0)

inline static constexpr unsigned int NGONMJHKCMB_TypeDefinitionIndex = 74263;

	class NGONMJHKCMB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGONMJHKCMB_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ElationTimeAtmosphereType FLJNFJFIHOI()
		{
			return ((::RPG::GameCore::ElationTimeAtmosphereType(*)(::PVOID))((::PBYTE)hIl2Cpp + NGONMJHKCMB_FLJNFJFIHOI_OFFSET))(this);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGONMJHKCMB_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* LFPNIPDMOOM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGONMJHKCMB_LFPNIPDMOOM_OFFSET))(this);
		}

		::System::String* HOBKJMHIJHC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGONMJHKCMB_HOBKJMHIJHC_OFFSET))(this);
		}

		::System::Boolean ECFLFDGEALH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGONMJHKCMB_ECFLFDGEALH_OFFSET))(this);
		}

	};
