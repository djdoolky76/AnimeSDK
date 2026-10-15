#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Type; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Reflection { class MethodBase; }
namespace XLua { class ObjectTranslator; }
namespace XLua { class OverloadMethodWrap; }

#define XLUA_DICTIONARYMETHODWRAPCREATOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x14DA21D0)
#define XLUA_DICTIONARYMETHODWRAPCREATOR_CHECKARGS_OFFSET UNITYSDK_OFFSET(0x14DA22C0)
#define XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_ENUMERATORGETCURRENT_OFFSET UNITYSDK_OFFSET(0x14DA2C30)
#define XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_ENUMERATORMOVENEXT_OFFSET UNITYSDK_OFFSET(0x14DA28C0)
#define XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14DA2550)
#define XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_KEYVALUEPAIRGETKEY_OFFSET UNITYSDK_OFFSET(0x14DA2FA0)
#define XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_KEYVALUEPAIRGETVALUE_OFFSET UNITYSDK_OFFSET(0x14DA3310)

namespace XLua
{
	inline static constexpr unsigned int DictionaryMethodWrapCreator_TypeDefinitionIndex = 50226;

	class DictionaryMethodWrapCreator : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::Collections::Generic::KeyValuePair*>** StaticGet__ValidTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Collections::Generic::KeyValuePair*>**)UnitySDK::FromName("XLua", "DictionaryMethodWrapCreator")->GetStaticField(0x433B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_DICTIONARYMETHODWRAPCREATOR_CCTOR_OFFSET))();
		}

		static ::System::Boolean CheckArgs(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_DICTIONARYMETHODWRAPCREATOR_CHECKARGS_OFFSET))(a1);
		}

		static ::XLua::OverloadMethodWrap* CreateWrap_GetEnumerator(::XLua::ObjectTranslator* a1, ::System::Type* a2, ::System::Reflection::MethodBase* a3)
		{
			return ((::XLua::OverloadMethodWrap*(*)(::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_GETENUMERATOR_OFFSET))(a1, a2, a3);
		}

		static ::XLua::OverloadMethodWrap* CreateWrap_EnumeratorMoveNext(::XLua::ObjectTranslator* a1, ::System::Type* a2, ::System::Reflection::MethodBase* a3)
		{
			return ((::XLua::OverloadMethodWrap*(*)(::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_ENUMERATORMOVENEXT_OFFSET))(a1, a2, a3);
		}

		static ::XLua::OverloadMethodWrap* CreateWrap_EnumeratorGetCurrent(::XLua::ObjectTranslator* a1, ::System::Type* a2, ::System::Reflection::MethodBase* a3)
		{
			return ((::XLua::OverloadMethodWrap*(*)(::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_ENUMERATORGETCURRENT_OFFSET))(a1, a2, a3);
		}

		static ::XLua::OverloadMethodWrap* CreateWrap_KeyValuePairGetKey(::XLua::ObjectTranslator* a1, ::System::Type* a2, ::System::Reflection::MethodBase* a3)
		{
			return ((::XLua::OverloadMethodWrap*(*)(::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_KEYVALUEPAIRGETKEY_OFFSET))(a1, a2, a3);
		}

		static ::XLua::OverloadMethodWrap* CreateWrap_KeyValuePairGetValue(::XLua::ObjectTranslator* a1, ::System::Type* a2, ::System::Reflection::MethodBase* a3)
		{
			return ((::XLua::OverloadMethodWrap*(*)(::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_KEYVALUEPAIRGETVALUE_OFFSET))(a1, a2, a3);
		}

	};
}
