#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DOCBBPLPDDI_CTOR_OFFSET UNITYSDK_OFFSET(0x11FDF280)
#define DOCBBPLPDDI_ECFLFDGEALH_OFFSET UNITYSDK_OFFSET(0x11FDF240)
#define DOCBBPLPDDI_FLJNFJFIHOI_OFFSET UNITYSDK_OFFSET(0x11FDF0A0)
#define DOCBBPLPDDI_HOBKJMHIJHC_OFFSET UNITYSDK_OFFSET(0x11FDF1D0)
#define DOCBBPLPDDI_LFPNIPDMOOM_OFFSET UNITYSDK_OFFSET(0x11FDF160)
#define DOCBBPLPDDI_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x11FDF0F0)

	class DOCBBPLPDDI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCBBPLPDDI_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ElationTimeAtmosphereType FLJNFJFIHOI()
		{
			return ((::RPG::GameCore::ElationTimeAtmosphereType(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCBBPLPDDI_FLJNFJFIHOI_OFFSET))(this);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCBBPLPDDI_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* LFPNIPDMOOM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCBBPLPDDI_LFPNIPDMOOM_OFFSET))(this);
		}

		::System::String* HOBKJMHIJHC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCBBPLPDDI_HOBKJMHIJHC_OFFSET))(this);
		}

		::System::Boolean ECFLFDGEALH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCBBPLPDDI_ECFLFDGEALH_OFFSET))(this);
		}

	};
