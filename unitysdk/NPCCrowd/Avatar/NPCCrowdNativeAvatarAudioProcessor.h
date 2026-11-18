#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDirtyEntity.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDirtyFlags.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarAudioInputFragment.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class COCJHGGDBCA;
namespace NPCCrowd { class NPCCrowdNativeDataManager; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Avatar { class NPCCrowdNativeAvatarAudioData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIOPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEEAAA90)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIOPROCESSOR_HASDIRTYFLAG_OFFSET UNITYSDK_OFFSET(0xEEAACC0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIOPROCESSOR_PREPARE_OFFSET UNITYSDK_OFFSET(0xEEAA520)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIOPROCESSOR_SYNCDIRTYSTATE_OFFSET UNITYSDK_OFFSET(0xEEAA7B0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIOPROCESSOR_TRYCREATEINPUT_OFFSET UNITYSDK_OFFSET(0xEEAAD10)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIOPROCESSOR_TRYGETAUDIOABILITYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xEEAB080)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIOPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xEEAB210)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdNativeAvatarAudioProcessor_TypeDefinitionIndex = 91603;

	class NPCCrowdNativeAvatarAudioProcessor : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyEntity>* _dirtyEntities; // 0x10
		::System::Boolean _previousDataOrientedAudioActive; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIOPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Boolean Prepare(::NPCCrowd::NPCCrowdNativeDataManager* manager, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIOPROCESSOR_PREPARE_OFFSET))(this, manager, deltaTime);
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::NPCCrowdNativeDataManager* manager, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIOPROCESSOR_EXECUTE_OFFSET))(this, manager, deltaTime, dependsOn);
		}

		::System::Void SyncDirtyState(::NPCCrowd::NPCCrowdNativeDataManager* manager, ::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioData* audioData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*, ::NPCCrowd::Avatar::NPCCrowdNativeAvatarAudioData*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIOPROCESSOR_SYNCDIRTYSTATE_OFFSET))(this, manager, audioData);
		}

		static ::System::Boolean TryCreateInput(::COCJHGGDBCA* npcComp, ::NPCCrowd::Avatar::FNPCCrowdAvatarAudioInputFragment& input)
		{
			return ((::System::Boolean(*)(::COCJHGGDBCA*, ::NPCCrowd::Avatar::FNPCCrowdAvatarAudioInputFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIOPROCESSOR_TRYCREATEINPUT_OFFSET))(npcComp, input);
		}

		static ::System::Boolean TryGetAudioAbilitySnapshot(::NPCCrowd::Ability::NPCAbility* ability, ::UnityEngine::Vector3& velocity, ::System::Single& maxSpeed)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::NPCAbility*, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIOPROCESSOR_TRYGETAUDIOABILITYSNAPSHOT_OFFSET))(ability, velocity, maxSpeed);
		}

		static ::System::Boolean HasDirtyFlag(::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyFlags flags, ::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyFlags flag)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyFlags, ::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyFlags))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARAUDIOPROCESSOR_HASDIRTYFLAG_OFFSET))(flags, flag);
		}
	};
}
