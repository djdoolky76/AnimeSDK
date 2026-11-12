#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class IAAANEIPGFC;
class OGKCMBGCAHE;
namespace System { class Type; }

#define FLEEMEEIKOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1679D4D0)
#define FLEEMEEIKOI_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0x1679D420)
#define FLEEMEEIKOI_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0x1679D480)
#define FLEEMEEIKOI_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0x1679D560)

inline static constexpr unsigned int FLEEMEEIKOI_TypeDefinitionIndex = 64016;

	class FLEEMEEIKOI : public ::System::Object
	{
	public:
		::IAAANEIPGFC* KNEFKOMDCBD; // 0x10
		::OGKCMBGCAHE* CEKGENADLFO; // 0x18
		::System::Void _ctor(::IAAANEIPGFC* a1, ::OGKCMBGCAHE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IAAANEIPGFC*, ::OGKCMBGCAHE*))((::PBYTE)hIl2Cpp + FLEEMEEIKOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEEMEEIKOI_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEEMEEIKOI_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + FLEEMEEIKOI_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
