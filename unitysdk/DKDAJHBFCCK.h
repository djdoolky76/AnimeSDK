#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class BEFIOALJIMP;
class IMGJJEBKIFP;
namespace System { class Type; }

#define DKDAJHBFCCK_CTOR_OFFSET UNITYSDK_OFFSET(0xF256A30)
#define DKDAJHBFCCK_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0xF256980)
#define DKDAJHBFCCK_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0xF2569E0)
#define DKDAJHBFCCK_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0xF256AE0)

	class DKDAJHBFCCK : public ::System::Object
	{
	public:
		::IMGJJEBKIFP* GECNEGOLICN; // 0x10
		::BEFIOALJIMP* GFJOBPEKAPA; // 0x18
		::System::Void _ctor(::BEFIOALJIMP* a1, ::IMGJJEBKIFP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BEFIOALJIMP*, ::IMGJJEBKIFP*))((::PBYTE)hIl2Cpp + DKDAJHBFCCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDAJHBFCCK_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDAJHBFCCK_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + DKDAJHBFCCK_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
