#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEMEIPMCICA;
class JPMCBFLFDIL;
class KMDMCCENAPE;
namespace System { class Object; }
namespace System { class String; }
namespace System::Reflection { class FieldInfo; }

#define EMMLHDGOLIP___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC91C10)
#define EMMLHDGOLIP___C__DISPLAYCLASS6_0__CREATEPROPERTYMAPPER_B__0_OFFSET UNITYSDK_OFFSET(0x1CC92230)

inline static constexpr unsigned int EMMLHDGOLIP___c__DisplayClass6_0_TypeDefinitionIndex = 43887;

	class EMMLHDGOLIP___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::String* fullKey; // 0x10
		::JEMEIPMCICA* converter; // 0x18
		::JPMCBFLFDIL* query; // 0x20
		::System::Reflection::FieldInfo* field; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMMLHDGOLIP___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreatePropertyMapper_b__0(::System::Object* a1, ::KMDMCCENAPE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::KMDMCCENAPE*))((::PBYTE)hIl2Cpp + EMMLHDGOLIP___C__DISPLAYCLASS6_0__CREATEPROPERTYMAPPER_B__0_OFFSET))(this, a1, a2);
		}

	};
