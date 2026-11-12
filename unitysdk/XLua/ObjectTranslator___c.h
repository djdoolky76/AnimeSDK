#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace XLua { class DelegateBridgeBase; }

#define XLUA_OBJECTTRANSLATOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16116470)
#define XLUA_OBJECTTRANSLATOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0x161164A0)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__7285_0_OFFSET UNITYSDK_OFFSET(0x16116750)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__7285_1_OFFSET UNITYSDK_OFFSET(0x161164B0)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__7285_2_OFFSET UNITYSDK_OFFSET(0x16116570)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__7285_3_OFFSET UNITYSDK_OFFSET(0x16116600)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__7285_4_OFFSET UNITYSDK_OFFSET(0x161166C0)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__7285_5_OFFSET UNITYSDK_OFFSET(0x16116760)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__7285_6_OFFSET UNITYSDK_OFFSET(0x16116770)
#define XLUA_OBJECTTRANSLATOR___C__GETDELEGATE_B__7286_0_OFFSET UNITYSDK_OFFSET(0x16116800)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator___c_TypeDefinitionIndex = 51129;

	class ObjectTranslator___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>** StaticGet___9__7285_5()
		{
			return (::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6DEE0);
		}

		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___9__7285_6()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6DEE8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6DEF0);
		}

		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___9__7285_2()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6DEF8);
		}

		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___9__7285_4()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6DF00);
		}

		static ::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>** StaticGet___9__7285_0()
		{
			return (::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6DF08);
		}

		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__7285_3()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6DF10);
		}

		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__7285_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6DF18);
		}

		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__7286_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6DF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _getCreatorUsingGeneric_b__7285_1(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__7285_1_OFFSET))(this, a1);
		}

		::System::Int32 _getCreatorUsingGeneric_b__7285_2(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__7285_2_OFFSET))(this, a1);
		}

		::System::Boolean _getCreatorUsingGeneric_b__7285_3(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__7285_3_OFFSET))(this, a1);
		}

		::System::Int32 _getCreatorUsingGeneric_b__7285_4(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__7285_4_OFFSET))(this, a1);
		}

		::System::Delegate* _getCreatorUsingGeneric_b__7285_0(::XLua::DelegateBridgeBase* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__7285_0_OFFSET))(this, a1);
		}

		::System::Delegate* _getCreatorUsingGeneric_b__7285_5(::XLua::DelegateBridgeBase* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__7285_5_OFFSET))(this, a1);
		}

		::System::Type* _getCreatorUsingGeneric_b__7285_6(::System::Reflection::ParameterInfo* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__7285_6_OFFSET))(this, a1);
		}

		::System::Boolean _getDelegate_b__7286_0(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETDELEGATE_B__7286_0_OFFSET))(this, a1);
		}

	};
}
