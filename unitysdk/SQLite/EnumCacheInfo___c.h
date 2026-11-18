#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class CustomAttributeData; }

#define SQLITE_ENUMCACHEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECEFBA0)
#define SQLITE_ENUMCACHEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECEFBE0)
#define SQLITE_ENUMCACHEINFO___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1ECEFBF0)

namespace SQLite
{
	inline static constexpr unsigned int EnumCacheInfo___c_TypeDefinitionIndex = 37062;

	class EnumCacheInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EnumCacheInfo___c_TypeDefinitionIndex)->GetStaticField(0x2BBF0);
		}
		static ::System::Func_2<::System::Reflection::CustomAttributeData*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::Reflection::CustomAttributeData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EnumCacheInfo___c_TypeDefinitionIndex)->GetStaticField(0x2BBF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__0_0(::System::Reflection::CustomAttributeData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::CustomAttributeData*))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO___C___CTOR_B__0_0_OFFSET))(this, x);
		}
	};
}
