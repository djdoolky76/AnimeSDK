#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class PropertyInfo; }
namespace XLua { class ObjectCast; }
namespace XLua { class ObjectCasters; }
namespace XLua { class ObjectCheck; }
namespace XLua { class ObjectCheckers; }
namespace XLua { class ObjectTranslator; }

#define XLUA_OVERLOADMETHODWRAP_CALL_OFFSET UNITYSDK_OFFSET(0x161A4FD0)
#define XLUA_OVERLOADMETHODWRAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x161A59C0)
#define XLUA_OVERLOADMETHODWRAP_CHECK_OFFSET UNITYSDK_OFFSET(0x161A4E10)
#define XLUA_OVERLOADMETHODWRAP_CTOR_OFFSET UNITYSDK_OFFSET(0x161A2F90)
#define XLUA_OVERLOADMETHODWRAP_GET_HASDEFALUTVALUE_OFFSET UNITYSDK_OFFSET(0x161A2F70)
#define XLUA_OVERLOADMETHODWRAP_INIT_OFFSET UNITYSDK_OFFSET(0x161A2FC0)
#define XLUA_OVERLOADMETHODWRAP_SET_HASDEFALUTVALUE_OFFSET UNITYSDK_OFFSET(0x161A2F80)

namespace XLua
{
	inline static constexpr unsigned int OverloadMethodWrap_TypeDefinitionIndex = 51265;

	class OverloadMethodWrap : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* refPos; // 0x10
		::System::Reflection::MethodBase* method; // 0x18
		::System::Type* paramsType; // 0x20
		::XLua::ObjectTranslator* translator; // 0x28
		::Il2CppArray<::System::Int32>* inPosArray; // 0x30
		::Il2CppArray<::System::Object*>* args; // 0x38
		::Il2CppArray<::XLua::ObjectCheck*>* checkArray; // 0x40
		::System::Reflection::PropertyInfo* returnValueProperty; // 0x48
		::Il2CppArray<::XLua::ObjectCast*>* castArray; // 0x50
		::Il2CppArray<::System::Boolean>* isOptionalArray; // 0x58
		::System::Type* targetType; // 0x60
		::Il2CppArray<::System::Int32>* outPosArray; // 0x68
		::Il2CppArray<::System::Object*>* defaultValueArray; // 0x70
		::System::Boolean targetNeeded; // 0x78
		::System::Boolean isVoid; // 0x79
		::System::Boolean _HasDefalutValue_k__BackingField; // 0x7A
		::System::Byte _padding0[0x1];
		::System::Int32 luaStackPosStart; // 0x7C
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_outPosList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("XLua", "OverloadMethodWrap")->GetStaticField(0x621B0);
		}

		static ::System::Collections::Generic::List_1<::XLua::ObjectCheck*>** StaticGet_paramsChecks()
		{
			return (::System::Collections::Generic::List_1<::XLua::ObjectCheck*>**)UnitySDK::FromName("XLua", "OverloadMethodWrap")->GetStaticField(0x621B8);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_inPosList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("XLua", "OverloadMethodWrap")->GetStaticField(0x621C0);
		}

		static ::System::Collections::Generic::List_1<::XLua::ObjectCast*>** StaticGet_paramsCasts()
		{
			return (::System::Collections::Generic::List_1<::XLua::ObjectCast*>**)UnitySDK::FromName("XLua", "OverloadMethodWrap")->GetStaticField(0x621C8);
		}

		static ::System::Collections::Generic::List_1<::System::Boolean>** StaticGet_isOptionalList()
		{
			return (::System::Collections::Generic::List_1<::System::Boolean>**)UnitySDK::FromName("XLua", "OverloadMethodWrap")->GetStaticField(0x621D0);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_defaultValueList()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("XLua", "OverloadMethodWrap")->GetStaticField(0x621D8);
		}

		::System::Void _ctor(::XLua::ObjectTranslator* a1, ::System::Type* a2, ::System::Reflection::MethodBase* a3, ::System::Reflection::PropertyInfo* a4)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_CCTOR_OFFSET))();
		}

		::System::Boolean get_HasDefalutValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_GET_HASDEFALUTVALUE_OFFSET))(this);
		}

		::System::Void set_HasDefalutValue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_SET_HASDEFALUTVALUE_OFFSET))(this, a1);
		}

		::System::Void Init(::XLua::ObjectCheckers* a1, ::XLua::ObjectCasters* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::ObjectCheckers*, ::XLua::ObjectCasters*))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean Check(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_CHECK_OFFSET))(this, a1);
		}

		::System::Int32 Call(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_CALL_OFFSET))(this, a1);
		}

	};
}
