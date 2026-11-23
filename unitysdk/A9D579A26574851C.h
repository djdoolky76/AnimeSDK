#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A9D579A26574851C_E9CA8D54B04ADC75.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
template <typename T> class F875E7A8F1781006;

#define A9D579A26574851C_A457BC12B6CF55CC_OFFSET UNITYSDK_OFFSET(0x3FF5A60)
#define A9D579A26574851C_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x3FF5A70)
#define A9D579A26574851C_F698D4BCC10E0D2E_OFFSET UNITYSDK_OFFSET(0x3FF5990)
#define A9D579A26574851C_F8C7B8F8FBCEF9A5_OFFSET UNITYSDK_OFFSET(0x1EAE1A0)

inline static constexpr unsigned int A9D579A26574851C_TypeDefinitionIndex = 14532;

struct alignas(4) A9D579A26574851C
{
	::System::Int32 F54AF627638DE3C9; // 0x10
	::A9D579A26574851C_E9CA8D54B04ADC75 F6C2EBBDFCAEF915; // 0x14

	::System::Collections::IEnumerator* A457BC12B6CF55CC()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + A9D579A26574851C_A457BC12B6CF55CC_OFFSET))(this);
	}

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + A9D579A26574851C_EA28CF291EBB2931_OFFSET))(this);
	}

	::F875E7A8F1781006<::System::Char>* F698D4BCC10E0D2E()
	{
		return ((::F875E7A8F1781006<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A9D579A26574851C_F698D4BCC10E0D2E_OFFSET))(this);
	}

	::System::Int32 F8C7B8F8FBCEF9A5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + A9D579A26574851C_F8C7B8F8FBCEF9A5_OFFSET))(this);
	}
};
