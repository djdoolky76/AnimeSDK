#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_INSTANCESTORE_ADDPOOLED_OFFSET UNITYSDK_OFFSET(0x1D740410)
#define FOUNDATION_INSTANCESTORE_ADD_OFFSET UNITYSDK_OFFSET(0x1D740220)
#define FOUNDATION_INSTANCESTORE_CHECKALIVE_OFFSET UNITYSDK_OFFSET(0x1D740770)
#define FOUNDATION_INSTANCESTORE_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1D740D40)
#define FOUNDATION_INSTANCESTORE_CLEARPOOLED_OFFSET UNITYSDK_OFFSET(0x1D740A70)
#define FOUNDATION_INSTANCESTORE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D740180)
#define FOUNDATION_INSTANCESTORE_GET_POOLEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1D7401D0)
#define FOUNDATION_INSTANCESTORE_TRYPOPPOOLED_OFFSET UNITYSDK_OFFSET(0x1D740600)
#define FOUNDATION_INSTANCESTORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D741020)

namespace Foundation
{
	inline static constexpr unsigned int InstanceStore_TypeDefinitionIndex = 8645;

	class InstanceStore : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* allInstances; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* pooledInstances; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCESTORE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCESTORE_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 get_PooledCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCESTORE_GET_POOLEDCOUNT_OFFSET))(this);
		}

		::System::Void Add(::UnityEngine::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCESTORE_ADD_OFFSET))(this, instance);
		}

		::System::Void AddPooled(::UnityEngine::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCESTORE_ADDPOOLED_OFFSET))(this, instance);
		}

		::System::Boolean TryPopPooled(::UnityEngine::Object*& instance)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*&))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCESTORE_TRYPOPPOOLED_OFFSET))(this, instance);
		}

		::System::Int32 CheckAlive(::System::Boolean deepCheck)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCESTORE_CHECKALIVE_OFFSET))(this, deepCheck);
		}

		::System::Void ClearPooled(::System::Action_1<::UnityEngine::Object*>* destroy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCESTORE_CLEARPOOLED_OFFSET))(this, destroy);
		}

		::System::Void ClearAll(::System::Action_1<::UnityEngine::Object*>* destroy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCESTORE_CLEARALL_OFFSET))(this, destroy);
		}
	};
}
