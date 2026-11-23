#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class F2375D706F5829C9; }
namespace System::Collections { class IEnumerator; }

#define F66367DB6EE0A887_E11F90772709F3B7_OFFSET UNITYSDK_OFFSET(0x3C2B830)
#define F66367DB6EE0A887_E4D8D11BD4E9688F_OFFSET UNITYSDK_OFFSET(0x1F2A920)
#define F66367DB6EE0A887_F698D4BCC10E0D2E_OFFSET UNITYSDK_OFFSET(0x3C2B900)
#define F66367DB6EE0A887_F8C7B8F8FBCEF9A5_OFFSET UNITYSDK_OFFSET(0x3C2B9D0)
#define F66367DB6EE0A887__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F66367DB6EE0A887_TypeDefinitionIndex = 11507;

class F66367DB6EE0A887 : public ::System::Object
{
public:
	::System::Boolean ACA9088D5445384D; // 0x10
	::System::Byte _padding0[0x7];
	::System::Collections::F2375D706F5829C9* F6C4C2D42B83C59E; // 0x18
	::System::Collections::F2375D706F5829C9* AE6BB64D9EC27A39; // 0x20

	::System::Collections::IEnumerator* F698D4BCC10E0D2E()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + F66367DB6EE0A887_F698D4BCC10E0D2E_OFFSET))(this);
	}

	::System::Int32 F8C7B8F8FBCEF9A5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + F66367DB6EE0A887_F8C7B8F8FBCEF9A5_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F66367DB6EE0A887__CTOR_OFFSET))(this);
	}

	::System::Void E11F90772709F3B7(::System::Array* EDF8D5B13A3EE433, ::System::Int32 B48C66E5FB2449C6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + F66367DB6EE0A887_E11F90772709F3B7_OFFSET))(this, EDF8D5B13A3EE433, B48C66E5FB2449C6);
	}

	::System::Object* E4D8D11BD4E9688F()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + F66367DB6EE0A887_E4D8D11BD4E9688F_OFFSET))(this);
	}
};
