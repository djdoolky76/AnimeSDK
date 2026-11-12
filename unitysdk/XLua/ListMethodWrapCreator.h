#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Reflection { class MethodBase; }
namespace XLua { class ObjectTranslator; }
namespace XLua { class OverloadMethodWrap; }

#define XLUA_LISTMETHODWRAPCREATOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C76610)
#define XLUA_LISTMETHODWRAPCREATOR_CHECKARGS_OFFSET UNITYSDK_OFFSET(0x15C76700)
#define XLUA_LISTMETHODWRAPCREATOR_CREATEWRAP_GETCOUNT_OFFSET UNITYSDK_OFFSET(0x15C768C0)

namespace XLua
{
	inline static constexpr unsigned int ListMethodWrapCreator_TypeDefinitionIndex = 51279;

	class ListMethodWrapCreator : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet__ValidTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Type*>**)UnitySDK::FromName("XLua", "ListMethodWrapCreator")->GetStaticField(0x5CCC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_LISTMETHODWRAPCREATOR_CCTOR_OFFSET))();
		}

		static ::System::Boolean CheckArgs(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_LISTMETHODWRAPCREATOR_CHECKARGS_OFFSET))(a1);
		}

		static ::XLua::OverloadMethodWrap* CreateWrap_GetCount(::XLua::ObjectTranslator* a1, ::System::Type* a2, ::System::Reflection::MethodBase* a3)
		{
			return ((::XLua::OverloadMethodWrap*(*)(::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + XLUA_LISTMETHODWRAPCREATOR_CREATEWRAP_GETCOUNT_OFFSET))(a1, a2, a3);
		}

	};
}
