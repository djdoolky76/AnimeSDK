#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNKOCENDDGH;
class NIMHLHECACH;

#define HNKOCENDDGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D92670)
#define HNKOCENDDGH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D925A0)
#define HNKOCENDDGH_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x15D92520)
#define HNKOCENDDGH_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0x15D925B0)

inline static constexpr unsigned int HNKOCENDDGH_TypeDefinitionIndex = 75270;

	class HNKOCENDDGH : public ::System::Object
	{
	public:
		static ::HNKOCENDDGH** StaticGet_EMLNOINPICJ()
		{
			return (::HNKOCENDDGH**)UnitySDK::FromName("", "HNKOCENDDGH")->GetStaticField(0x2EDA0);
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
