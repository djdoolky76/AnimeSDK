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

#define XLUA_OVERLOADMETHODWRAP_CALL_OFFSET UNITYSDK_OFFSET(0x1A018360)
#define XLUA_OVERLOADMETHODWRAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A018D50)
#define XLUA_OVERLOADMETHODWRAP_CHECK_OFFSET UNITYSDK_OFFSET(0x1A0181A0)
#define XLUA_OVERLOADMETHODWRAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1A016320)
#define XLUA_OVERLOADMETHODWRAP_GET_HASDEFALUTVALUE_OFFSET UNITYSDK_OFFSET(0x1A016300)
#define XLUA_OVERLOADMETHODWRAP_INIT_OFFSET UNITYSDK_OFFSET(0x1A016350)
#define XLUA_OVERLOADMETHODWRAP_SET_HASDEFALUTVALUE_OFFSET UNITYSDK_OFFSET(0x1A016310)

namespace XLua
{
	inline static constexpr unsigned int OverloadMethodWrap_TypeDefinitionIndex = 51265;

	class OverloadMethodWrap : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* refPos; // 0x10
		::System::Reflection::MethodBase* method; // 0x18
		::Il2CppArray<::System::Int32>* outPosArray; // 0x20
		::Il2CppArray<::XLua::ObjectCast*>* castArray; // 0x28
		::System::Type* targetType; // 0x30
		::System::Reflection::PropertyInfo* returnValueProperty; // 0x38
		::XLua::ObjectTranslator* translator; // 0x40
		::Il2CppArray<::System::Object*>* defaultValueArray; // 0x48
		::System::Type* paramsType; // 0x50
		::Il2CppArray<::System::Boolean>* isOptionalArray; // 0x58
		::Il2CppArray<::System::Int32>* inPosArray; // 0x60
		::Il2CppArray<::XLua::ObjectCheck*>* checkArray; // 0x68
		::Il2CppArray<::System::Object*>* args; // 0x70
		::System::Boolean _HasDefalutValue_k__BackingField; // 0x78
		::System::Boolean isVoid; // 0x79
		::System::Boolean targetNeeded; // 0x7A
		::System::Byte _padding0[0x1];
		::System::Int32 luaStackPosStart; // 0x7C
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_outPosList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("XLua", "OverloadMethodWrap")->GetStaticField(0x62C10);
		}

		static ::System::Collections::Generic::List_1<::System::Boolean>** StaticGet_isOptionalList()
		{
			return (::System::Collections::Generic::List_1<::System::Boolean>**)UnitySDK::FromName("XLua", "OverloadMethodWrap")->GetStaticField(0x62C18);
		}

		static ::System::Collections::Generic::List_1<::XLua::ObjectCast*>** StaticGet_paramsCasts()
		{
			return (::System::Collections::Generic::List_1<::XLua::ObjectCast*>**)UnitySDK::FromName("XLua", "OverloadMethodWrap")->GetStaticField(0x62C20);
		}

		static ::System::Collections::Generic::List_1<::XLua::ObjectCheck*>** StaticGet_paramsChecks()
		{
			return (::System::Collections::Generic::List_1<::XLua::ObjectCheck*>**)UnitySDK::FromName("XLua", "OverloadMethodWrap")->GetStaticField(0x62C28);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_defaultValueList()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("XLua", "OverloadMethodWrap")->GetStaticField(0x62C30);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_inPosList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("XLua", "OverloadMethodWrap")->GetStaticField(0x62C38);
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
