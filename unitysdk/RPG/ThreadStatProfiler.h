#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { class ProfileRecorderInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_THREADSTATPROFILER_BEGIN_OFFSET UNITYSDK_OFFSET(0x1FE70610)
#define RPG_THREADSTATPROFILER_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE70410)
#define RPG_THREADSTATPROFILER_END_OFFSET UNITYSDK_OFFSET(0x1FE708D0)
#define RPG_THREADSTATPROFILER_GET_MANAGEDTHREADID_OFFSET UNITYSDK_OFFSET(0x1FE709E0)
#define RPG_THREADSTATPROFILER_GET_THREADNAME_OFFSET UNITYSDK_OFFSET(0x1FE70A00)
#define RPG_THREADSTATPROFILER_GET_TIMESAMPLES_OFFSET UNITYSDK_OFFSET(0x1FE70190)
#define RPG_THREADSTATPROFILER_SET_MANAGEDTHREADID_OFFSET UNITYSDK_OFFSET(0x1FE709F0)
#define RPG_THREADSTATPROFILER_SET_THREADNAME_OFFSET UNITYSDK_OFFSET(0x1FE70A10)
#define RPG_THREADSTATPROFILER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE70CD0)
#define RPG_THREADSTATPROFILER_UPDATETIMESAMPLES_OFFSET UNITYSDK_OFFSET(0x1FE70A20)

namespace RPG
{
	inline static constexpr unsigned int ThreadStatProfiler_TypeDefinitionIndex = 36085;

	class ThreadStatProfiler : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::ProfileRecorderInfo*>* UnityMarkers; // 0x10
		::System::Collections::Generic::List_1<::System::Single>* _TimeSamples; // 0x18
		::System::String* _ThreadName_k__BackingField; // 0x20
		::System::Int32 _ManagedThreadId_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_THREADSTATPROFILER_CTOR_OFFSET))(this);
		}

		::System::Int32 get_ManagedThreadId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_THREADSTATPROFILER_GET_MANAGEDTHREADID_OFFSET))(this);
		}

		::System::Void set_ManagedThreadId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_THREADSTATPROFILER_SET_MANAGEDTHREADID_OFFSET))(this, a1);
		}

		::System::String* get_ThreadName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_THREADSTATPROFILER_GET_THREADNAME_OFFSET))(this);
		}

		::System::Void set_ThreadName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_THREADSTATPROFILER_SET_THREADNAME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Single>* get_TimeSamples()
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_THREADSTATPROFILER_GET_TIMESAMPLES_OFFSET))(this);
		}

		::System::Void Begin(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_THREADSTATPROFILER_BEGIN_OFFSET))(this, a1);
		}

		::System::Void End(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_THREADSTATPROFILER_END_OFFSET))(this, a1);
		}

		::System::Void UpdateTimeSamples()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_THREADSTATPROFILER_UPDATETIMESAMPLES_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_THREADSTATPROFILER_TOSTRING_OFFSET))(this);
		}

	};
}
