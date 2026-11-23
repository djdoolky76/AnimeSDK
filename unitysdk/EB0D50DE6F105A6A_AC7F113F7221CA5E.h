#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define EB0D50DE6F105A6A_AC7F113F7221CA5E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define EB0D50DE6F105A6A_AC7F113F7221CA5E__CTOR_OFFSET UNITYSDK_OFFSET(0x2284E60)

inline static constexpr unsigned int EB0D50DE6F105A6A_AC7F113F7221CA5E_TypeDefinitionIndex = 15642;

class EB0D50DE6F105A6A_AC7F113F7221CA5E : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EB0D50DE6F105A6A_AC7F113F7221CA5E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 F29E9785517D391E, ::System::String* E41EB813C7FB644A)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + EB0D50DE6F105A6A_AC7F113F7221CA5E_INVOKE_OFFSET))(this, F29E9785517D391E, E41EB813C7FB644A);
	}
};
