#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class IOIPCGLLCNN;
class IPFNLCFACJH;
namespace System { class Type; }

#define EIAFIIBFELM_CTOR_OFFSET UNITYSDK_OFFSET(0x154AEED0)
#define EIAFIIBFELM_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0x154AEE20)
#define EIAFIIBFELM_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0x154AEE80)
#define EIAFIIBFELM_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0x154AEF60)
#define EIAFIIBFELM_MGPPINJHOBE_OFFSET UNITYSDK_OFFSET(0x154AF080)

inline static constexpr unsigned int EIAFIIBFELM_TypeDefinitionIndex = 62597;

	class EIAFIIBFELM : public ::System::Object
	{
	public:
		::IOIPCGLLCNN* GAGELLPBGLA; // 0x10
		::IPFNLCFACJH* DCJCONLGILD; // 0x18
		::System::Void _ctor(::IPFNLCFACJH* a1, ::IOIPCGLLCNN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IPFNLCFACJH*, ::IOIPCGLLCNN*))((::PBYTE)hIl2Cpp + EIAFIIBFELM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFIIBFELM_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFIIBFELM_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + EIAFIIBFELM_IHPAKOMCHGP_OFFSET))(this, a1);
		}

		::System::Void MGPPINJHOBE(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + EIAFIIBFELM_MGPPINJHOBE_OFFSET))(this, a1);
		}

	};
