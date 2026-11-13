#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class __Filters; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM___FILTERS_CCTOR_OFFSET UNITYSDK_OFFSET(0x20845A10)
#define SYSTEM___FILTERS_CTOR_OFFSET UNITYSDK_OFFSET(0x20845A00)
#define SYSTEM___FILTERS_FILTERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x20844FE0)
#define SYSTEM___FILTERS_FILTERIGNORECASE_OFFSET UNITYSDK_OFFSET(0x208457C0)
#define SYSTEM___FILTERS_FILTERNAME_OFFSET UNITYSDK_OFFSET(0x20845560)

namespace System
{
	inline static constexpr unsigned int __Filters_TypeDefinitionIndex = 162;

	class __Filters : public ::System::Object
	{
	public:
		static ::System::__Filters** StaticGet_Instance()
		{
			return (::System::__Filters**)UnitySDK::FromName("System", "__Filters")->GetStaticField(0x1A190);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___FILTERS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM___FILTERS_CCTOR_OFFSET))();
		}

		::System::Boolean FilterAttribute(::System::Reflection::MemberInfo* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM___FILTERS_FILTERATTRIBUTE_OFFSET))(this, a1, a2);
		}

		::System::Boolean FilterName(::System::Reflection::MemberInfo* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM___FILTERS_FILTERNAME_OFFSET))(this, a1, a2);
		}

		::System::Boolean FilterIgnoreCase(::System::Reflection::MemberInfo* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM___FILTERS_FILTERIGNORECASE_OFFSET))(this, a1, a2);
		}

	};
}
