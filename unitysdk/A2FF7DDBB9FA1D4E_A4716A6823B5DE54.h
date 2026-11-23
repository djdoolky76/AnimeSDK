#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define A2FF7DDBB9FA1D4E_A4716A6823B5DE54_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define A2FF7DDBB9FA1D4E_A4716A6823B5DE54__CTOR_OFFSET UNITYSDK_OFFSET(0x2936C90)

inline static constexpr unsigned int A2FF7DDBB9FA1D4E_A4716A6823B5DE54_TypeDefinitionIndex = 12613;

class A2FF7DDBB9FA1D4E_A4716A6823B5DE54 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_A4716A6823B5DE54__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 B714679C324FF96E, ::System::String* A9DC260775AB80C3, ::System::Int32 FEB1DB7035CB3236)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_A4716A6823B5DE54_INVOKE_OFFSET))(this, B714679C324FF96E, A9DC260775AB80C3, FEB1DB7035CB3236);
	}
};
