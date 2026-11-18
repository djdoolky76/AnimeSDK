#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading::Tasks { class Task; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORJOBSDATA_DECOMPRESSASYNC_OFFSET UNITYSDK_OFFSET(0x16E58330)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORJOBSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16E58260)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_AsyncDecompressLyraSectorJobsData_TypeDefinitionIndex = 26749;

	class LyraBakedDataManager_AsyncDecompressLyraSectorJobsData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* jobList; // 0x10
		::System::Int32 distanceFieldDecompressingBlockCountPreJob; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORJOBSDATA__CTOR_OFFSET))(this);
		}

		static ::System::Threading::Tasks::Task* DecompressAsync(::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobsData* jobsData)
		{
			return ((::System::Threading::Tasks::Task*(*)(::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobsData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORJOBSDATA_DECOMPRESSASYNC_OFFSET))(jobsData);
		}
	};
}
