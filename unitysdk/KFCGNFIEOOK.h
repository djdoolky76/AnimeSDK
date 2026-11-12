#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class GPOJLCIIJFD;
namespace System { class Type; }

#define KFCGNFIEOOK_CTOR_OFFSET UNITYSDK_OFFSET(0xBC1BEB0)
#define KFCGNFIEOOK_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0xBC1BD70)
#define KFCGNFIEOOK_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0xBC1BDD0)
#define KFCGNFIEOOK_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0xBC1BF00)

inline static constexpr unsigned int KFCGNFIEOOK_TypeDefinitionIndex = 64256;

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
