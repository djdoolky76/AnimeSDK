#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define IBIBHALFHCD___C_JMMFIHKBJGL_OFFSET UNITYSDK_OFFSET(0x16097880)
#define IBIBHALFHCD___C_PIMHPBGCHPE_OFFSET UNITYSDK_OFFSET(0x16097870)
#define IBIBHALFHCD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16097820)
#define IBIBHALFHCD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16097860)

inline static constexpr unsigned int IBIBHALFHCD___c_TypeDefinitionIndex = 43235;

class IBIBHALFHCD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IBIBHALFHCD___c_TypeDefinitionIndex)->GetStaticField(0x49DD0);
	}
	static ::UnityEngine::Events::UnityAction_1<::System::Int32>** StaticGet___9__26_0()
	{
		return (::UnityEngine::Events::UnityAction_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IBIBHALFHCD___c_TypeDefinitionIndex)->GetStaticField(0x49DD8);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__18_17()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(IBIBHALFHCD___c_TypeDefinitionIndex)->GetStaticField(0x49DE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBIBHALFHCD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIBHALFHCD___C__CTOR_OFFSET))(this);
	}

	::System::Void PIMHPBGCHPE(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IBIBHALFHCD___C_PIMHPBGCHPE_OFFSET))(this, ABHBKFJKINO);
	}

	::System::String* JMMFIHKBJGL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIBHALFHCD___C_JMMFIHKBJGL_OFFSET))(this);
	}
};
