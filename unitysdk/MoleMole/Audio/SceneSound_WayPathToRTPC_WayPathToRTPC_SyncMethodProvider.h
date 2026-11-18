#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Segment3.h"
#include "unitysdk/System/Object.h"

class BAEDBIJINGO;
namespace MoleMole::Audio { class SceneSound_WayPathToRTPC; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_APPLYSYNCTOWWISE_OFFSET UNITYSDK_OFFSET(0xFA86010)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_COMPUTESYNC_OFFSET UNITYSDK_OFFSET(0xFA85BE0)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_CREATE_OFFSET UNITYSDK_OFFSET(0xFA86880)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_INIT_OFFSET UNITYSDK_OFFSET(0xFA86330)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_ONSYNC_OFFSET UNITYSDK_OFFSET(0xFA866B0)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_POLISH_OFFSET UNITYSDK_OFFSET(0xFA86730)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_RECYCLE_OFFSET UNITYSDK_OFFSET(0xFA867B0)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xFA86920)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int SceneSound_WayPathToRTPC_WayPathToRTPC_SyncMethodProvider_TypeDefinitionIndex = 84711;

	class SceneSound_WayPathToRTPC_WayPathToRTPC_SyncMethodProvider : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Dest::Math::Segment3>* _segments; // 0x10
		::MoleMole::Audio::SceneSound_WayPathToRTPC* _context; // 0x18
		::System::Single totalLength; // 0x20
		::System::Single _computedRtpcT; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void ComputeSync(::BAEDBIJINGO* emitter, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_COMPUTESYNC_OFFSET))(this, emitter, deltaTime);
		}

		::System::Void ApplySyncToWwise(::BAEDBIJINGO* emitter)
		{
			return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_APPLYSYNCTOWWISE_OFFSET))(this, emitter);
		}

		::System::Void Init(::BAEDBIJINGO* emitter)
		{
			return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_INIT_OFFSET))(this, emitter);
		}

		::System::Void OnSync(::BAEDBIJINGO* emitter, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_ONSYNC_OFFSET))(this, emitter, deltaTime);
		}

		::System::Void Polish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_POLISH_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_RECYCLE_OFFSET))(this);
		}

		static ::MoleMole::Audio::SceneSound_WayPathToRTPC_WayPathToRTPC_SyncMethodProvider* Create(::MoleMole::Audio::SceneSound_WayPathToRTPC* context)
		{
			return ((::MoleMole::Audio::SceneSound_WayPathToRTPC_WayPathToRTPC_SyncMethodProvider*(*)(::MoleMole::Audio::SceneSound_WayPathToRTPC*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_WAYPATHTORTPC_SYNCMETHODPROVIDER_CREATE_OFFSET))(context);
		}
	};
}
