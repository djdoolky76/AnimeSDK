#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMPGEFGAGOL;
class NIMHLHECACH;

#define JMPGEFGAGOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0BC7C0)
#define JMPGEFGAGOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BC650)
#define JMPGEFGAGOL_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x1A0BC5D0)
#define JMPGEFGAGOL_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0x1A0BC660)

inline static constexpr unsigned int JMPGEFGAGOL_TypeDefinitionIndex = 77602;

	class JMPGEFGAGOL : public ::System::Object
	{
	public:
		static ::JMPGEFGAGOL** StaticGet_EMLNOINPICJ()
		{
			return (::JMPGEFGAGOL**)UnitySDK::FromName("", "JMPGEFGAGOL")->GetStaticField(0x21250);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPGEFGAGOL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMPGEFGAGOL_CCTOR_OFFSET))();
		}

		static ::JMPGEFGAGOL* GGBLHEHJBDO()
		{
			return ((::JMPGEFGAGOL*(*)())((::PBYTE)hIl2Cpp + JMPGEFGAGOL_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void MBABPIHGAJN(::NIMHLHECACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIMHLHECACH*))((::PBYTE)hIl2Cpp + JMPGEFGAGOL_MBABPIHGAJN_OFFSET))(this, a1);
		}

	};
