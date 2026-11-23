#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define A2FF7DDBB9FA1D4E_AD8AF02D53557229_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A2FF7DDBB9FA1D4E_AD8AF02D53557229__CTOR_OFFSET UNITYSDK_OFFSET(0x38E2F50)

inline static constexpr unsigned int A2FF7DDBB9FA1D4E_AD8AF02D53557229_TypeDefinitionIndex = 12646;

class A2FF7DDBB9FA1D4E_AD8AF02D53557229 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_AD8AF02D53557229__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke(::System::String* F1BF0FE85E9DD584)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_AD8AF02D53557229_INVOKE_OFFSET))(this, F1BF0FE85E9DD584);
	}
};
