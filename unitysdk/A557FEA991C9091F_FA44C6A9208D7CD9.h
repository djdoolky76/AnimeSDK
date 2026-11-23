#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define A557FEA991C9091F_FA44C6A9208D7CD9_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define A557FEA991C9091F_FA44C6A9208D7CD9__CTOR_OFFSET UNITYSDK_OFFSET(0x22B95F0)

inline static constexpr unsigned int A557FEA991C9091F_FA44C6A9208D7CD9_TypeDefinitionIndex = 7185;

class A557FEA991C9091F_FA44C6A9208D7CD9 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A557FEA991C9091F_FA44C6A9208D7CD9__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 A84D57260767D5BD, ::System::Int32 F5AEFA05C9F71B82, ::System::String* E8B528F54A6CCC5C, ::System::String* B960AC235824C6C8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A557FEA991C9091F_FA44C6A9208D7CD9_INVOKE_OFFSET))(this, A84D57260767D5BD, F5AEFA05C9F71B82, E8B528F54A6CCC5C, B960AC235824C6C8);
	}
};
