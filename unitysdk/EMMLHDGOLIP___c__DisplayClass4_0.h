#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEMEIPMCICA;
class JPMCBFLFDIL;
class KMDMCCENAPE;
namespace System { class Object; }
namespace System { class String; }
namespace System::Reflection { class PropertyInfo; }

#define EMMLHDGOLIP___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC904B0)
#define EMMLHDGOLIP___C__DISPLAYCLASS4_0___BUILDPROPERTYMAPPER_B__0_OFFSET UNITYSDK_OFFSET(0x1CC91C20)

	class EMMLHDGOLIP___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::JEMEIPMCICA* converter; // 0x10
		::System::Reflection::PropertyInfo* property; // 0x18
		::JPMCBFLFDIL* query; // 0x20
		::System::String* fullKey; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMMLHDGOLIP___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void __BuildPropertyMapper_b__0(::System::Object* a1, ::KMDMCCENAPE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::KMDMCCENAPE*))((::PBYTE)hIl2Cpp + EMMLHDGOLIP___C__DISPLAYCLASS4_0___BUILDPROPERTYMAPPER_B__0_OFFSET))(this, a1, a2);
		}

	};
