#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class GlobalObjectArray; }

#define UNREALTYPES_GLOBALMANAGEDOBJECTREGISTRY_REMOVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E2AD770)
#define UNREALTYPES_GLOBALMANAGEDOBJECTREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2AD8E0)

namespace UnrealTypes
{
	inline static constexpr unsigned int GlobalManagedObjectRegistry_TypeDefinitionIndex = 27791;

	class GlobalManagedObjectRegistry : public ::System::Object
	{
	public:
		static ::UnrealTypes::GlobalObjectArray** StaticGet_ObjectArray()
		{
			return (::UnrealTypes::GlobalObjectArray**)Il2CppClass::FromTypeDefinitionIndex(GlobalManagedObjectRegistry_TypeDefinitionIndex)->GetStaticField(0x250B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_GLOBALMANAGEDOBJECTREGISTRY__CCTOR_OFFSET))();
		}

		static ::System::Void RemoveObject(::System::Object* obj, ::System::Int32 objectIndex)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_GLOBALMANAGEDOBJECTREGISTRY_REMOVEOBJECT_OFFSET))(obj, objectIndex);
		}
	};
}
