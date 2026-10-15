#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIMHLHECACH;
class PKMNAFKKIEJ;

#define PKMNAFKKIEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xC2DFCD0)
#define PKMNAFKKIEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC2DFC00)
#define PKMNAFKKIEJ_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xC2DFB80)
#define PKMNAFKKIEJ_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0xC2DFC10)

inline static constexpr unsigned int PKMNAFKKIEJ_TypeDefinitionIndex = 75273;

	class PKMNAFKKIEJ : public ::System::Object
	{
	public:
		static ::PKMNAFKKIEJ** StaticGet_EMLNOINPICJ()
		{
			return (::PKMNAFKKIEJ**)UnitySDK::FromName("", "PKMNAFKKIEJ")->GetStaticField(0x6FFF0);
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
