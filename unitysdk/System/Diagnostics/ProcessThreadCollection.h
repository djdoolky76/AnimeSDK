#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ReadOnlyCollectionBase.h"

namespace System::Diagnostics { class ProcessThread; }

#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1DB9E220)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1DB9E470)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1DB9E5F0)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DB9E0F0)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1DB9E3B0)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1DB9E2E0)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1DB9E530)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB9E030)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9E020)

namespace System::Diagnostics
{
	inline static constexpr unsigned int ProcessThreadCollection_TypeDefinitionIndex = 2787;

	class ProcessThreadCollection : public ::System::Collections::ReadOnlyCollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Diagnostics::ProcessThread*>* processThreads)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::ProcessThread*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION__CTOR_1_OFFSET))(this, processThreads);
		}

		::System::Diagnostics::ProcessThread* get_Item(::System::Int32 index)
		{
			return ((::System::Diagnostics::ProcessThread*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Int32 Add(::System::Diagnostics::ProcessThread* thread)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Diagnostics::ProcessThread*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_ADD_OFFSET))(this, thread);
		}

		::System::Void Insert(::System::Int32 index, ::System::Diagnostics::ProcessThread* thread)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Diagnostics::ProcessThread*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_INSERT_OFFSET))(this, index, thread);
		}

		::System::Int32 IndexOf(::System::Diagnostics::ProcessThread* thread)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Diagnostics::ProcessThread*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_INDEXOF_OFFSET))(this, thread);
		}

		::System::Boolean Contains(::System::Diagnostics::ProcessThread* thread)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::ProcessThread*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_CONTAINS_OFFSET))(this, thread);
		}

		::System::Void Remove(::System::Diagnostics::ProcessThread* thread)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::ProcessThread*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_REMOVE_OFFSET))(this, thread);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Diagnostics::ProcessThread*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::ProcessThread*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}
	};
}
