#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEE6B00)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1AEE6250)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEE6320)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_GETID_OFFSET UNITYSDK_OFFSET(0x1AEE63C0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_HASID_OFFSET UNITYSDK_OFFSET(0x1AEE69A0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_REHASH_OFFSET UNITYSDK_OFFSET(0x1AEE65C0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ObjectIDGenerator_TypeDefinitionIndex = 1108;

	class ObjectIDGenerator : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* m_objs; // 0x10
		::Il2CppArray<::System::Int64>* m_ids; // 0x18
		::System::Int32 m_currentCount; // 0x20
		::System::Int32 m_currentSize; // 0x24
		static ::Il2CppArray<::System::Int32>** StaticGet_sizes()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("System.Runtime.Serialization", "ObjectIDGenerator")->GetStaticField(0x1AE60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_CCTOR_OFFSET))();
		}

		::System::Int32 FindElement(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_FINDELEMENT_OFFSET))(this, a1, a2);
		}

		::System::Int64 GetId(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_GETID_OFFSET))(this, a1, a2);
		}

		::System::Int64 HasId(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_HASID_OFFSET))(this, a1, a2);
		}

		::System::Void Rehash()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_REHASH_OFFSET))(this);
		}

	};
}
