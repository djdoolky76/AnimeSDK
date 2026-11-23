#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define EC35CC22E3E43569_AF8A003D4F026F6F_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define EC35CC22E3E43569_AF8A003D4F026F6F__CTOR_OFFSET UNITYSDK_OFFSET(0x3E51FF0)

inline static constexpr unsigned int EC35CC22E3E43569_AF8A003D4F026F6F_TypeDefinitionIndex = 14834;

class EC35CC22E3E43569_AF8A003D4F026F6F : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EC35CC22E3E43569_AF8A003D4F026F6F__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke(::System::IntPtr ABFACF4B79951FBB, ::System::Int32 A70E5C58B2C7A692, ::System::IntPtr B55B55FC70BBC95D, ::System::IntPtr F220A2D27F7C6B6C)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + EC35CC22E3E43569_AF8A003D4F026F6F_INVOKE_OFFSET))(this, ABFACF4B79951FBB, A70E5C58B2C7A692, B55B55FC70BBC95D, F220A2D27F7C6B6C);
	}
};
