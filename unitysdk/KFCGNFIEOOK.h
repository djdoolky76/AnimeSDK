#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class GPOJLCIIJFD;
namespace System { class Type; }

#define KFCGNFIEOOK_CTOR_OFFSET UNITYSDK_OFFSET(0xB38F470)
#define KFCGNFIEOOK_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0xB38F330)
#define KFCGNFIEOOK_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0xB38F390)
#define KFCGNFIEOOK_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0xB38F4C0)

	class KFCGNFIEOOK : public ::System::Object
	{
	public:
		::GPOJLCIIJFD* EGDFBOBKBLD; // 0x10
		::System::Void _ctor(::GPOJLCIIJFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPOJLCIIJFD*))((::PBYTE)hIl2Cpp + KFCGNFIEOOK_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCGNFIEOOK_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCGNFIEOOK_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + KFCGNFIEOOK_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
