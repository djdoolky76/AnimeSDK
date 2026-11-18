#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KIAEEMJLCJA;
namespace System { template <typename T> class Predicate_1; }

#define AJJKJNPEHCH_FFLJANHLNKG_KOIJNMDMAJO_OFFSET UNITYSDK_OFFSET(0x12D003F0)
#define AJJKJNPEHCH_FFLJANHLNKG__CTOR_OFFSET UNITYSDK_OFFSET(0x12D003E0)

inline static constexpr unsigned int AJJKJNPEHCH_FFLJANHLNKG_TypeDefinitionIndex = 83671;

class AJJKJNPEHCH_FFLJANHLNKG : public ::System::Object
{
public:
	::System::Predicate_1<::KIAEEMJLCJA*>* DLMJCFBENGB; // 0x10
	::System::Int32 NJEMNLDCHNN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_FFLJANHLNKG__CTOR_OFFSET))(this);
	}

	::System::Boolean KOIJNMDMAJO(::KIAEEMJLCJA* KBNHAJHPKPO)
	{
		return ((::System::Boolean(*)(::PVOID, ::KIAEEMJLCJA*))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_FFLJANHLNKG_KOIJNMDMAJO_OFFSET))(this, KBNHAJHPKPO);
	}
};
