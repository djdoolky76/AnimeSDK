#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace NapStreaming { class NapStreamingManager; }
namespace NapStreaming { class NapStreamingManager_InitAsyncLoadState; }
namespace UnityEngine { class Object; }

#define NAPSTREAMING_NAPSTREAMINGMANAGER___C__DISPLAYCLASS75_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F4E820)
#define NAPSTREAMING_NAPSTREAMINGMANAGER___C__DISPLAYCLASS75_0__SUBMITINITASSETSASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x15F4E830)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingManager___c__DisplayClass75_0_TypeDefinitionIndex = 64450;

	class NapStreamingManager___c__DisplayClass75_0 : public ::System::Object
	{
	public:
		::NapStreaming::NapStreamingManager* __4__this; // 0x10
		::NapStreaming::NapStreamingManager_InitAsyncLoadState* state; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER___C__DISPLAYCLASS75_0__CTOR_OFFSET))(this);
		}

		::System::Void _SubmitInitAssetsAsync_b__0(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle completedHandle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER___C__DISPLAYCLASS75_0__SUBMITINITASSETSASYNC_B__0_OFFSET))(this, asset, completedHandle);
		}
	};
}
