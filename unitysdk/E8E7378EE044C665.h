#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class F2375D706F5829C9; }
namespace System::Collections { class IEnumerator; }

#define E8E7378EE044C665_BA82012E79ABB45A_OFFSET UNITYSDK_OFFSET(0x3C6A030)
#define E8E7378EE044C665_F15F8410875C9A50_OFFSET UNITYSDK_OFFSET(0x3C69F80)
#define E8E7378EE044C665_F64DC6A6139B05FB_OFFSET UNITYSDK_OFFSET(0x3C6A150)
#define E8E7378EE044C665_F698D4BCC10E0D2E_OFFSET UNITYSDK_OFFSET(0x3C69EF0)
#define E8E7378EE044C665_F8C7B8F8FBCEF9A5_OFFSET UNITYSDK_OFFSET(0x3C6A0C0)
#define E8E7378EE044C665__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E8E7378EE044C665_TypeDefinitionIndex = 11648;

class E8E7378EE044C665 : public ::System::Object
{
public:
	::System::Collections::F2375D706F5829C9* A3B1F2122400E153; // 0x10

	::System::Collections::IEnumerator* F698D4BCC10E0D2E()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + E8E7378EE044C665_F698D4BCC10E0D2E_OFFSET))(this);
	}

	::System::Int32 F8C7B8F8FBCEF9A5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E8E7378EE044C665_F8C7B8F8FBCEF9A5_OFFSET))(this);
	}

	::System::Object* BA82012E79ABB45A()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + E8E7378EE044C665_BA82012E79ABB45A_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8E7378EE044C665__CTOR_OFFSET))(this);
	}

	::System::Collections::F2375D706F5829C9* F64DC6A6139B05FB()
	{
		return ((::System::Collections::F2375D706F5829C9*(*)(::PVOID))((::PBYTE)hIl2Cpp + E8E7378EE044C665_F64DC6A6139B05FB_OFFSET))(this);
	}

	::System::Void F15F8410875C9A50(::System::Array* EDF8D5B13A3EE433, ::System::Int32 B48C66E5FB2449C6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + E8E7378EE044C665_F15F8410875C9A50_OFFSET))(this, EDF8D5B13A3EE433, B48C66E5FB2449C6);
	}
};
