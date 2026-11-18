#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Unreal/FName.h"

namespace System { class String; }
namespace UnrealTypes { class Class; }
namespace UnrealTypes { class Object; }

#define UNREALTYPES_OBJECTHASHSTATICS_GETOBJECTHASH_OFFSET UNITYSDK_OFFSET(0x1E2AF2E0)
#define UNREALTYPES_OBJECTHASHSTATICS_GETOBJECTOUTERHASH_1_OFFSET UNITYSDK_OFFSET(0x1E2AF430)
#define UNREALTYPES_OBJECTHASHSTATICS_GETOBJECTOUTERHASH_OFFSET UNITYSDK_OFFSET(0x1E2AF3B0)
#define UNREALTYPES_OBJECTHASHSTATICS_HASHOBJECT_OFFSET UNITYSDK_OFFSET(0x1E2AEB30)
#define UNREALTYPES_OBJECTHASHSTATICS_STATICFINDOBJECTFASTINTERNALTHREADSAFE_1_OFFSET UNITYSDK_OFFSET(0x1E2AFD00)
#define UNREALTYPES_OBJECTHASHSTATICS_STATICFINDOBJECTFASTINTERNALTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1E2AFCB0)
#define UNREALTYPES_OBJECTHASHSTATICS_UNHASHOBJECT_OFFSET UNITYSDK_OFFSET(0x1E2AF020)

namespace UnrealTypes
{
	inline static constexpr unsigned int ObjectHashStatics_TypeDefinitionIndex = 27794;

	class ObjectHashStatics : public ::System::Object
	{
	public:
		static ::System::Int32 GetObjectHash(::Foundation::Unreal::FName& name)
		{
			return ((::System::Int32(*)(::Foundation::Unreal::FName&))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTHASHSTATICS_GETOBJECTHASH_OFFSET))(name);
		}

		static ::System::Int32 GetObjectOuterHash(::System::Int32 nameHash, ::UnrealTypes::Object* outer)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnrealTypes::Object*))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTHASHSTATICS_GETOBJECTOUTERHASH_OFFSET))(nameHash, outer);
		}

		static ::System::Int32 GetObjectOuterHash_1(::Foundation::Unreal::FName name, ::UnrealTypes::Object* outer)
		{
			return ((::System::Int32(*)(::Foundation::Unreal::FName, ::UnrealTypes::Object*))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTHASHSTATICS_GETOBJECTOUTERHASH_1_OFFSET))(name, outer);
		}

		static ::System::Void HashObject(::UnrealTypes::Object* obj)
		{
			return ((::System::Void(*)(::UnrealTypes::Object*))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTHASHSTATICS_HASHOBJECT_OFFSET))(obj);
		}

		static ::System::Void UnhashObject(::UnrealTypes::Object* obj)
		{
			return ((::System::Void(*)(::UnrealTypes::Object*))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTHASHSTATICS_UNHASHOBJECT_OFFSET))(obj);
		}

		static ::UnrealTypes::Object* StaticFindObjectFastInternalThreadSafe(::UnrealTypes::Class* objectClass, ::UnrealTypes::Object* objectPackage, ::System::String* objectName, ::System::Boolean exactClass)
		{
			return ((::UnrealTypes::Object*(*)(::UnrealTypes::Class*, ::UnrealTypes::Object*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTHASHSTATICS_STATICFINDOBJECTFASTINTERNALTHREADSAFE_OFFSET))(objectClass, objectPackage, objectName, exactClass);
		}

		static ::UnrealTypes::Object* StaticFindObjectFastInternalThreadSafe_1(::UnrealTypes::Class* objectClass, ::UnrealTypes::Object* objectPackage, ::Foundation::Unreal::FName objectName, ::System::Boolean exactClass)
		{
			return ((::UnrealTypes::Object*(*)(::UnrealTypes::Class*, ::UnrealTypes::Object*, ::Foundation::Unreal::FName, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTHASHSTATICS_STATICFINDOBJECTFASTINTERNALTHREADSAFE_1_OFFSET))(objectClass, objectPackage, objectName, exactClass);
		}
	};
}
