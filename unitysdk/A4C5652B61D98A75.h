#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E8C1635F85E9BC30.h"

namespace System { class AggregateException; }

#define A4C5652B61D98A75__CTOR_OFFSET UNITYSDK_OFFSET(0x3D14850)

inline static constexpr unsigned int A4C5652B61D98A75_TypeDefinitionIndex = 10799;

class A4C5652B61D98A75 : public ::E8C1635F85E9BC30
{
public:
	::System::AggregateException* A2552AAB700DF6CB; // 0x10
	::System::Boolean A87CB0101867ED5E; // 0x18

	::System::Void _ctor(::System::AggregateException* E2B6D81F69EA0D9B)
	{
		return ((::System::Void(*)(::PVOID, ::System::AggregateException*))((::PBYTE)hIl2Cpp + A4C5652B61D98A75__CTOR_OFFSET))(this, E2B6D81F69EA0D9B);
	}
};
