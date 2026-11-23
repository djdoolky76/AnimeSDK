#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F7499DF1533C7100;
class F8CC45D53444C1FA;
namespace System { class Delegate; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MethodInfo; }

#define A8114B516CA2EF40_AF025B5C2D931661_OFFSET UNITYSDK_OFFSET(0x38B7BB0)
#define A8114B516CA2EF40_BD9CD726F874B523_OFFSET UNITYSDK_OFFSET(0x38B6E20)
#define A8114B516CA2EF40__CCTOR_OFFSET UNITYSDK_OFFSET(0x38B7F10)
#define A8114B516CA2EF40__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A8114B516CA2EF40_TypeDefinitionIndex = 20299;

class A8114B516CA2EF40 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Reflection::MethodInfo*>** StaticGet_E2851AF9F17402A0()
	{
		return (::Il2CppArray<::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(A8114B516CA2EF40_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::System::Reflection::MethodInfo*>** StaticGet_B99B0718823AE069()
	{
		return (::Il2CppArray<::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(A8114B516CA2EF40_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::F8CC45D53444C1FA*, ::System::Delegate*>*>** StaticGet_A7CCA33A4F272CFD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::F8CC45D53444C1FA*, ::System::Delegate*>*>**)Il2CppClass::FromTypeDefinitionIndex(A8114B516CA2EF40_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void AF025B5C2D931661(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + A8114B516CA2EF40_AF025B5C2D931661_OFFSET))(A86A90C31A146E9C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8114B516CA2EF40__CTOR_OFFSET))(this);
	}

	static ::System::Delegate* BD9CD726F874B523(::System::Type* B948AC20D66440AF, ::F7499DF1533C7100* F3E7993BB0986694, ::System::Int32 F4D0D577D355C2B7, ::System::Object* ADA2022EEB67C78A)
	{
		return ((::System::Delegate*(*)(::System::Type*, ::F7499DF1533C7100*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + A8114B516CA2EF40_BD9CD726F874B523_OFFSET))(B948AC20D66440AF, F3E7993BB0986694, F4D0D577D355C2B7, ADA2022EEB67C78A);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A8114B516CA2EF40__CCTOR_OFFSET))();
	}
};
