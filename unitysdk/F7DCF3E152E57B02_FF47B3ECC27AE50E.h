#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F7DCF3E152E57B02;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F7DCF3E152E57B02_FF47B3ECC27AE50E_A17725759A266FD6_OFFSET UNITYSDK_OFFSET(0x2977F10)
#define F7DCF3E152E57B02_FF47B3ECC27AE50E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F7DCF3E152E57B02_FF47B3ECC27AE50E_TypeDefinitionIndex = 15479;

class F7DCF3E152E57B02_FF47B3ECC27AE50E : public ::System::Object
{
public:
	::System::Boolean BF23B44E9ADA0200; // 0x10
	::System::Byte _padding0[0x7];
	::F7DCF3E152E57B02* A544919C800E2923; // 0x18
	::System::String* EF11C18C8216A86E; // 0x20
	::System::Int32 F0E2F0F4B5A83439; // 0x28
	::System::Byte _padding1[0x4];
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7DCF3E152E57B02_FF47B3ECC27AE50E__CTOR_OFFSET))(this);
	}

	::System::Void A17725759A266FD6(::System::String* B2EBA940E1CDF2A8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F7DCF3E152E57B02_FF47B3ECC27AE50E_A17725759A266FD6_OFFSET))(this, B2EBA940E1CDF2A8);
	}
};
