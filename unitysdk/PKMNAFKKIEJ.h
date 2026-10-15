#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIMHLHECACH;
class PKMNAFKKIEJ;

#define PKMNAFKKIEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xC2E7680)
#define PKMNAFKKIEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC2E75B0)
#define PKMNAFKKIEJ_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xC2E7530)
#define PKMNAFKKIEJ_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0xC2E75C0)

	class PKMNAFKKIEJ : public ::System::Object
	{
	public:
		static ::PKMNAFKKIEJ** StaticGet_EMLNOINPICJ()
		{
			return (::PKMNAFKKIEJ**)UnitySDK::FromName("", "PKMNAFKKIEJ")->GetStaticField(0x6FDA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMNAFKKIEJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKMNAFKKIEJ_CCTOR_OFFSET))();
		}

		static ::PKMNAFKKIEJ* GGBLHEHJBDO()
		{
			return ((::PKMNAFKKIEJ*(*)())((::PBYTE)hIl2Cpp + PKMNAFKKIEJ_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void MBABPIHGAJN(::NIMHLHECACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIMHLHECACH*))((::PBYTE)hIl2Cpp + PKMNAFKKIEJ_MBABPIHGAJN_OFFSET))(this, a1);
		}

	};
