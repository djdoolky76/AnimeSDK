#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class AssetRequestCompleteDel; }

#define NAPSTREAMING_NAPSTREAMINGMANAGER_INITASYNCLOADSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xEEB3650)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingManager_InitAsyncLoadState_TypeDefinitionIndex = 64452;

	class NapStreamingManager_InitAsyncLoadState : public ::System::Object
	{
	public:
		::Foundation::AssetPath path; // 0x10
		::Foundation::AssetRequestCompleteDel* callback; // 0x20
		::Foundation::AssetRequestHandle handle; // 0x28
		::System::Boolean handleAssigned; // 0x48
		::System::Boolean completed; // 0x49
		::System::Byte _padding0[0x2];
		::System::Int32 generation; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_INITASYNCLOADSTATE__CTOR_OFFSET))(this);
		}
	};
}
