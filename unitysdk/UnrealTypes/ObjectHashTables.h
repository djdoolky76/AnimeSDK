#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnrealTypes { class Object; }

#define UNREALTYPES_OBJECTHASHTABLES_ADDTONAMEHASH_OFFSET UNITYSDK_OFFSET(0x1E2AF590)
#define UNREALTYPES_OBJECTHASHTABLES_ADDTOOUTERHASH_OFFSET UNITYSDK_OFFSET(0x1E2AF6E0)
#define UNREALTYPES_OBJECTHASHTABLES_ADDTOOUTERMAP_OFFSET UNITYSDK_OFFSET(0x1E2AF830)
#define UNREALTYPES_OBJECTHASHTABLES_FINDOBJECTBYTYPEID_OFFSET UNITYSDK_OFFSET(0x1E2B0370)
#define UNREALTYPES_OBJECTHASHTABLES_REMOVEFROMNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1E2AF980)
#define UNREALTYPES_OBJECTHASHTABLES_REMOVEFROMOUTERHASH_OFFSET UNITYSDK_OFFSET(0x1E2AFA90)
#define UNREALTYPES_OBJECTHASHTABLES_REMOVEFROMOUTERMAP_OFFSET UNITYSDK_OFFSET(0x1E2AFBA0)
#define UNREALTYPES_OBJECTHASHTABLES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B04A0)
#define UNREALTYPES_OBJECTHASHTABLES__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B01E0)

namespace UnrealTypes
{
	inline static constexpr unsigned int ObjectHashTables_TypeDefinitionIndex = 27795;

	class ObjectHashTables : public ::System::Object
	{
	public:
		static ::UnrealTypes::ObjectHashTables** StaticGet_Instance()
		{
			return (::UnrealTypes::ObjectHashTables**)Il2CppClass::FromTypeDefinitionIndex(ObjectHashTables_TypeDefinitionIndex)->GetStaticField(0x24F60);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>>** StaticGet_TypeId2ObjectHandle()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>>**)Il2CppClass::FromTypeDefinitionIndex(ObjectHashTables_TypeDefinitionIndex)->GetStaticField(0x24F68);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* ObjectOuterMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Hash; // 0x18
		::System::Object* Lock; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* HashOuter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTHASHTABLES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTHASHTABLES__CCTOR_OFFSET))();
		}

		::System::Boolean AddToNameHash(::System::Int32 hash, ::System::Int32 objectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTHASHTABLES_ADDTONAMEHASH_OFFSET))(this, hash, objectIndex);
		}

		::System::Boolean RemoveFromNameHash(::System::Int32 hash, ::System::Int32 objectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTHASHTABLES_REMOVEFROMNAMEHASH_OFFSET))(this, hash, objectIndex);
		}

		::System::Boolean AddToOuterHash(::System::Int32 outerHash, ::System::Int32 objectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTHASHTABLES_ADDTOOUTERHASH_OFFSET))(this, outerHash, objectIndex);
		}

		::System::Boolean RemoveFromOuterHash(::System::Int32 outerHash, ::System::Int32 objectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTHASHTABLES_REMOVEFROMOUTERHASH_OFFSET))(this, outerHash, objectIndex);
		}

		::System::Boolean AddToOuterMap(::System::Int32 outerObjectIndex, ::System::Int32 objectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTHASHTABLES_ADDTOOUTERMAP_OFFSET))(this, outerObjectIndex, objectIndex);
		}

		::System::Boolean RemoveFromOuterMap(::System::Int32 outerObjectIndex, ::System::Int32 objectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTHASHTABLES_REMOVEFROMOUTERMAP_OFFSET))(this, outerObjectIndex, objectIndex);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> FindObjectByTypeId(::System::UInt32 typeId)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTHASHTABLES_FINDOBJECTBYTYPEID_OFFSET))(typeId);
		}
	};
}
