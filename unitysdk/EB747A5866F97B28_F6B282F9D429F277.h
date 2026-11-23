#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define EB747A5866F97B28_F6B282F9D429F277_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define EB747A5866F97B28_F6B282F9D429F277__CTOR_OFFSET UNITYSDK_OFFSET(0x3E52150)

inline static constexpr unsigned int EB747A5866F97B28_F6B282F9D429F277_TypeDefinitionIndex = 15091;

class EB747A5866F97B28_F6B282F9D429F277 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EB747A5866F97B28_F6B282F9D429F277__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke(::System::IntPtr F6C2EBBDFCAEF915, ::System::Int32 A96B867D8BBB8B00, ::System::IntPtr F220A2D27F7C6B6C)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + EB747A5866F97B28_F6B282F9D429F277_INVOKE_OFFSET))(this, F6C2EBBDFCAEF915, A96B867D8BBB8B00, F220A2D27F7C6B6C);
	}
};
