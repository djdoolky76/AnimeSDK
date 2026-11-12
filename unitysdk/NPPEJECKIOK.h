#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIMHLHECACH;
class NPPEJECKIOK;

#define NPPEJECKIOK_CCTOR_OFFSET UNITYSDK_OFFSET(0xC6036C0)
#define NPPEJECKIOK_CTOR_OFFSET UNITYSDK_OFFSET(0xC603430)
#define NPPEJECKIOK_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xC6033B0)
#define NPPEJECKIOK_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0xC603440)

inline static constexpr unsigned int NPPEJECKIOK_TypeDefinitionIndex = 77602;

	class NPPEJECKIOK : public ::System::Object
	{
	public:
		static ::NPPEJECKIOK** StaticGet_EMLNOINPICJ()
		{
			return (::NPPEJECKIOK**)UnitySDK::FromName("", "NPPEJECKIOK")->GetStaticField(0x5B7A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPEJECKIOK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPEJECKIOK_CCTOR_OFFSET))();
		}

		static ::NPPEJECKIOK* GGBLHEHJBDO()
		{
			return ((::NPPEJECKIOK*(*)())((::PBYTE)hIl2Cpp + NPPEJECKIOK_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void MBABPIHGAJN(::NIMHLHECACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIMHLHECACH*))((::PBYTE)hIl2Cpp + NPPEJECKIOK_MBABPIHGAJN_OFFSET))(this, a1);
		}

	};
