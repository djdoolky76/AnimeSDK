#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EBBCBB0)
#define PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_ENSURETABLES_OFFSET UNITYSDK_OFFSET(0x1EBBC7D0)
#define PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_GET_KEYTABLE_OFFSET UNITYSDK_OFFSET(0x1EBBC720)
#define PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_GET_TYPETABLE_OFFSET UNITYSDK_OFFSET(0x1EBBC970)
#define PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_SETKEYTABLE_OFFSET UNITYSDK_OFFSET(0x1EBBCA50)
#define PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_SETTABLEBUILDERS_OFFSET UNITYSDK_OFFSET(0x1EBBCA20)
#define PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_SETTYPETABLE_OFFSET UNITYSDK_OFFSET(0x1EBBCB00)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int V2BinaryRegistry_TypeDefinitionIndex = 30950;

	class V2BinaryRegistry : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet__typeTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(V2BinaryRegistry_TypeDefinitionIndex)->GetStaticField(0x26070);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet__keyTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(V2BinaryRegistry_TypeDefinitionIndex)->GetStaticField(0x26078);
		}
		static ::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>** StaticGet__typeTableBuilder()
		{
			return (::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(V2BinaryRegistry_TypeDefinitionIndex)->GetStaticField(0x26080);
		}
		static ::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>** StaticGet__keyTableBuilder()
		{
			return (::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(V2BinaryRegistry_TypeDefinitionIndex)->GetStaticField(0x26088);
		}
		static ::System::Boolean* StaticGet__keyTableInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(V2BinaryRegistry_TypeDefinitionIndex)->GetStaticField(0x7E20);
		}
		static ::System::Boolean* StaticGet__typeTableInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(V2BinaryRegistry_TypeDefinitionIndex)->GetStaticField(0x7E21);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* get_KeyTable()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_GET_KEYTABLE_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* get_TypeTable()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_GET_TYPETABLE_OFFSET))();
		}

		static ::System::Void SetTableBuilders(::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>* keyTableBuilder, ::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>* typeTableBuilder)
		{
			return ((::System::Void(*)(::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>*, ::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_SETTABLEBUILDERS_OFFSET))(keyTableBuilder, typeTableBuilder);
		}

		static ::System::Void SetKeyTable(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* table)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_SETKEYTABLE_OFFSET))(table);
		}

		static ::System::Void SetTypeTable(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* table)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_SETTYPETABLE_OFFSET))(table);
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_CLEAR_OFFSET))();
		}

		static ::System::Void EnsureTables()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_ENSURETABLES_OFFSET))();
		}
	};
}
