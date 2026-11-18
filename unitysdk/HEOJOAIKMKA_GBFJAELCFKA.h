#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HEOJOAIKMKA;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HEOJOAIKMKA_GBFJAELCFKA_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x15B43F40)
#define HEOJOAIKMKA_GBFJAELCFKA__CTOR_OFFSET UNITYSDK_OFFSET(0x15B43F30)

inline static constexpr unsigned int HEOJOAIKMKA_GBFJAELCFKA_TypeDefinitionIndex = 52042;

class HEOJOAIKMKA_GBFJAELCFKA : public ::System::Object
{
public:
	::HEOJOAIKMKA* KLHPEBKNIFB; // 0x10
	::System::Boolean PHEEOFBPPLG; // 0x18
	::System::Boolean MEHMAIDOBKA; // 0x19
	::System::Boolean HIHPCLJCHKK; // 0x1A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOJOAIKMKA_GBFJAELCFKA__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* LIDNPLMPHAL(::LGCNEDCMPKM HBMGHPEPBNC)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + HEOJOAIKMKA_GBFJAELCFKA_LIDNPLMPHAL_OFFSET))(this, HBMGHPEPBNC);
	}
};
