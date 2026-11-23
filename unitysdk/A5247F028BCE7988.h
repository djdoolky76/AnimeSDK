#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F00D975466190277;
namespace System { class String; }

#define A5247F028BCE7988_A8A20BBC731715B2_OFFSET UNITYSDK_OFFSET(0x29998A0)
#define A5247F028BCE7988_AD9384F4716160D9_OFFSET UNITYSDK_OFFSET(0x29997E0)
#define A5247F028BCE7988__CTOR_OFFSET UNITYSDK_OFFSET(0x2999D60)

inline static constexpr unsigned int A5247F028BCE7988_TypeDefinitionIndex = 15586;

class A5247F028BCE7988 : public ::System::Object
{
public:
	::F00D975466190277* AAC60564A17482E3; // 0x10

	::System::Void _ctor(::System::String* EFF983A80A48BB2A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A5247F028BCE7988__CTOR_OFFSET))(this, EFF983A80A48BB2A);
	}

	::System::Void A8A20BBC731715B2(::System::String* EFF983A80A48BB2A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A5247F028BCE7988_A8A20BBC731715B2_OFFSET))(this, EFF983A80A48BB2A);
	}

	::System::String* AD9384F4716160D9(::System::String* A5C299C395D3E1B2, ::System::String* FBABE030F0470058)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A5247F028BCE7988_AD9384F4716160D9_OFFSET))(this, A5C299C395D3E1B2, FBABE030F0470058);
	}
};
