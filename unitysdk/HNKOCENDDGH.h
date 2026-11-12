#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNKOCENDDGH;
class NIMHLHECACH;

#define HNKOCENDDGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x16D3FF30)
#define HNKOCENDDGH_CTOR_OFFSET UNITYSDK_OFFSET(0x16D3FE60)
#define HNKOCENDDGH_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x16D3FDE0)
#define HNKOCENDDGH_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0x16D3FE70)

inline static constexpr unsigned int HNKOCENDDGH_TypeDefinitionIndex = 77598;

	class HNKOCENDDGH : public ::System::Object
	{
	public:
		static ::HNKOCENDDGH** StaticGet_EMLNOINPICJ()
		{
			return (::HNKOCENDDGH**)UnitySDK::FromName("", "HNKOCENDDGH")->GetStaticField(0x1D8F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKOCENDDGH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNKOCENDDGH_CCTOR_OFFSET))();
		}

		static ::HNKOCENDDGH* GGBLHEHJBDO()
		{
			return ((::HNKOCENDDGH*(*)())((::PBYTE)hIl2Cpp + HNKOCENDDGH_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void MBABPIHGAJN(::NIMHLHECACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIMHLHECACH*))((::PBYTE)hIl2Cpp + HNKOCENDDGH_MBABPIHGAJN_OFFSET))(this, a1);
		}

	};
