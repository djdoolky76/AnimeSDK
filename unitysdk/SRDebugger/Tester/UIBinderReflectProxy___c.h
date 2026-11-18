#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }

#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11089970)
#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x110899B0)
#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY___C__FINDOPENDIALOGMETHOD_B__1_0_OFFSET UNITYSDK_OFFSET(0x11089C00)
#define SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY___C__FINDOPENPAGEMETHOD_B__0_0_OFFSET UNITYSDK_OFFSET(0x110899C0)

namespace SRDebugger::Tester
{
	inline static constexpr unsigned int UIBinderReflectProxy___c_TypeDefinitionIndex = 96758;

	class UIBinderReflectProxy___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIBinderReflectProxy___c_TypeDefinitionIndex)->GetStaticField(0x53070);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIBinderReflectProxy___c_TypeDefinitionIndex)->GetStaticField(0x53078);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBinderReflectProxy___c_TypeDefinitionIndex)->GetStaticField(0x53080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindOpenPageMethod_b__0_0(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY___C__FINDOPENPAGEMETHOD_B__0_0_OFFSET))(this, m);
		}

		::System::Boolean _FindOpenDialogMethod_b__1_0(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SRDEBUGGER_TESTER_UIBINDERREFLECTPROXY___C__FINDOPENDIALOGMETHOD_B__1_0_OFFSET))(this, m);
		}
	};
}
