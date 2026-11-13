#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDBHFJLJHMK;
class NIMHLHECACH;

#define KDBHFJLJHMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4932C0)
#define KDBHFJLJHMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4931F0)
#define KDBHFJLJHMK_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x1A493170)
#define KDBHFJLJHMK_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0x1A493200)

inline static constexpr unsigned int KDBHFJLJHMK_TypeDefinitionIndex = 77599;

	class KDBHFJLJHMK : public ::System::Object
	{
	public:
		static ::KDBHFJLJHMK** StaticGet_EMLNOINPICJ()
		{
			return (::KDBHFJLJHMK**)UnitySDK::FromName("", "KDBHFJLJHMK")->GetStaticField(0x39330);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBHFJLJHMK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDBHFJLJHMK_CCTOR_OFFSET))();
		}

		static ::KDBHFJLJHMK* GGBLHEHJBDO()
		{
			return ((::KDBHFJLJHMK*(*)())((::PBYTE)hIl2Cpp + KDBHFJLJHMK_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void MBABPIHGAJN(::NIMHLHECACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIMHLHECACH*))((::PBYTE)hIl2Cpp + KDBHFJLJHMK_MBABPIHGAJN_OFFSET))(this, a1);
		}

	};
