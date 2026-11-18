#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ParameterInfo; }

#define FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F2F60)
#define FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F2FA0)
#define FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE___C__TRYCREATEJIT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1E3F2FB0)
#define FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE___C__TRYCREATEJIT_B__2_1_OFFSET UNITYSDK_OFFSET(0x1E3F2FE0)

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedMethodNode___c_TypeDefinitionIndex = 29874;

	class ReflectedMethodNode___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectedMethodNode___c_TypeDefinitionIndex)->GetStaticField(0x265E0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ReflectedMethodNode___c_TypeDefinitionIndex)->GetStaticField(0x265E8);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectedMethodNode___c_TypeDefinitionIndex)->GetStaticField(0x265F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE___C__CTOR_OFFSET))(this);
		}

		::System::Type* _TryCreateJit_b__2_0(::System::Reflection::ParameterInfo* p)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE___C__TRYCREATEJIT_B__2_0_OFFSET))(this, p);
		}

		::System::Type* _TryCreateJit_b__2_1(::System::Reflection::ParameterInfo* p)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE___C__TRYCREATEJIT_B__2_1_OFFSET))(this, p);
		}
	};
}
