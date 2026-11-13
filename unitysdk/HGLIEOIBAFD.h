#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class IAAANEIPGFC;
namespace System { class Type; }

#define HGLIEOIBAFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C455F20)
#define HGLIEOIBAFD_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0x1C455E70)
#define HGLIEOIBAFD_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0x1C455ED0)
#define HGLIEOIBAFD_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0x1C455FA0)

inline static constexpr unsigned int HGLIEOIBAFD_TypeDefinitionIndex = 64163;

	class HGLIEOIBAFD : public ::System::Object
	{
	public:
		::IAAANEIPGFC* KNEFKOMDCBD; // 0x10
		::System::Void _ctor(::IAAANEIPGFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAAANEIPGFC*))((::PBYTE)hIl2Cpp + HGLIEOIBAFD_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLIEOIBAFD_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLIEOIBAFD_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + HGLIEOIBAFD_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
