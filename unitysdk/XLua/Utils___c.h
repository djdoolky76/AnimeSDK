#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Reflection { class PropertyInfo; }

#define XLUA_UTILS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F05B950)
#define XLUA_UTILS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F05B980)
#define XLUA_UTILS___C__GENITEMGETTER_B__5_0_OFFSET UNITYSDK_OFFSET(0x1F05B990)
#define XLUA_UTILS___C__GENITEMSETTER_B__6_0_OFFSET UNITYSDK_OFFSET(0x1F05BB70)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F05C250)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_10_OFFSET UNITYSDK_OFFSET(0x1F05BD50)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_11_OFFSET UNITYSDK_OFFSET(0x1F05BE10)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_1_OFFSET UNITYSDK_OFFSET(0x1F05C2F0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_2_OFFSET UNITYSDK_OFFSET(0x1F05C300)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_3_OFFSET UNITYSDK_OFFSET(0x1F05BED0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_4_OFFSET UNITYSDK_OFFSET(0x1F05BF60)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_5_OFFSET UNITYSDK_OFFSET(0x1F05BFC0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_6_OFFSET UNITYSDK_OFFSET(0x1F05C0C0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_7_OFFSET UNITYSDK_OFFSET(0x1F05C100)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_8_OFFSET UNITYSDK_OFFSET(0x1F05C120)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_9_OFFSET UNITYSDK_OFFSET(0x1F05C240)
#define XLUA_UTILS___C__ISINBLACKLIST_B__51_0_OFFSET UNITYSDK_OFFSET(0x1F05C440)
#define XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F05C310)
#define XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__12_1_OFFSET UNITYSDK_OFFSET(0x1F05C3A0)
#define XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__12_2_OFFSET UNITYSDK_OFFSET(0x1F05C430)

namespace XLua
{
	inline static constexpr unsigned int Utils___c_TypeDefinitionIndex = 51318;

	class Utils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet___9__8_9()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A220);
		}

		static ::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet___9__8_3()
		{
			return (::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A228);
		}

		static ::System::Func_2<::System::Reflection::PropertyInfo*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Reflection::PropertyInfo*, ::System::Boolean>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A230);
		}

		static ::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A238);
		}

		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::String*>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::String*>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A240);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A248);
		}

		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__8_10()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A250);
		}

		static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet___9__8_2()
		{
			return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A258);
		}

		static ::System::Func_3<::System::Type*, ::System::Reflection::MethodInfo*, ::System::Object*>** StaticGet___9__8_4()
		{
			return (::System::Func_3<::System::Type*, ::System::Reflection::MethodInfo*, ::System::Object*>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A260);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__8_5()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A268);
		}

		static ::System::Func_2<::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Type*>** StaticGet___9__8_8()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Type*>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A270);
		}

		static ::System::Func_2<::System::Object*, ::System::Reflection::MethodInfo*>** StaticGet___9__8_7()
		{
			return (::System::Func_2<::System::Object*, ::System::Reflection::MethodInfo*>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A278);
		}

		static ::System::Func_2<::System::Reflection::PropertyInfo*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Reflection::PropertyInfo*, ::System::Boolean>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A280);
		}

		static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*, ::System::Boolean>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*, ::System::Boolean>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A288);
		}

		static ::System::Func_2<::System::Object*, ::System::Type*>** StaticGet___9__8_6()
		{
			return (::System::Func_2<::System::Object*, ::System::Type*>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A290);
		}

		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::String*>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::String*>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A298);
		}

		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Boolean>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Boolean>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A2A0);
		}

		static ::System::Func_3<::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*>** StaticGet___9__12_2()
		{
			return (::System::Func_3<::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A2A8);
		}

		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__8_11()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6A2B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_UTILS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UTILS___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _genItemGetter_b__5_0(::System::Reflection::PropertyInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GENITEMGETTER_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _genItemSetter_b__6_0(::System::Reflection::PropertyInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GENITEMSETTER_B__6_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetExtensionMethodsOf_b__8_10(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_10_OFFSET))(this, a1);
		}

		::System::Boolean _GetExtensionMethodsOf_b__8_11(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_11_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* _GetExtensionMethodsOf_b__8_3(::System::Type* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_3_OFFSET))(this, a1);
		}

		::System::Object* _GetExtensionMethodsOf_b__8_4(::System::Type* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_4_OFFSET))(this, a1, a2);
		}

		::System::Boolean _GetExtensionMethodsOf_b__8_5(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_5_OFFSET))(this, a1);
		}

		::System::Type* _GetExtensionMethodsOf_b__8_6(::System::Object* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_6_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* _GetExtensionMethodsOf_b__8_7(::System::Object* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_7_OFFSET))(this, a1);
		}

		::System::Type* _GetExtensionMethodsOf_b__8_8(::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_8_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* _GetExtensionMethodsOf_b__8_9(::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_9_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* _GetExtensionMethodsOf_b__8_0(::System::Type* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetExtensionMethodsOf_b__8_1(::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* _GetExtensionMethodsOf_b__8_2(::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_2_OFFSET))(this, a1);
		}

		::System::String* _makeReflectionWrap_b__12_0(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__12_0_OFFSET))(this, a1);
		}

		::System::String* _makeReflectionWrap_b__12_1(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__12_1_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* _makeReflectionWrap_b__12_2(::System::Reflection::MethodInfo* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__12_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsInBlackList_b__51_0(::System::Reflection::ParameterInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__ISINBLACKLIST_B__51_0_OFFSET))(this, a1);
		}

	};
}
