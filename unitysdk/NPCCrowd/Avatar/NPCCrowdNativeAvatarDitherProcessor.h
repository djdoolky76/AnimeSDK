#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDirtyEntity.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDirtyFlags.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDitherInputFragment.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class COCJHGGDBCA;
namespace NPCCrowd { class NPCCrowdNativeDataManager; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace NPCCrowd::Avatar { class NPCCrowdNativeAvatarDitherData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1003AB50)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR_HASDIRTYFLAG_OFFSET UNITYSDK_OFFSET(0x1003AE20)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR_PREPARE_OFFSET UNITYSDK_OFFSET(0x1003A660)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR_SYNCDIRTYSTATE_OFFSET UNITYSDK_OFFSET(0x1003A8D0)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR_TRYCREATECONFIG_OFFSET UNITYSDK_OFFSET(0x1003AE70)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR_TRYCREATEINPUT_OFFSET UNITYSDK_OFFSET(0x1003B040)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR_TRYGETABILITYRUNTIMEINDEX_OFFSET UNITYSDK_OFFSET(0x1003B290)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR_TRYGETDITHERABILITYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1003B120)
#define NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1003B330)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdNativeAvatarDitherProcessor_TypeDefinitionIndex = 50345;

	class NPCCrowdNativeAvatarDitherProcessor : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyEntity>* _dirtyEntities; // 0x10
		::System::Boolean _previousDataOrientedDitherActive; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Boolean Prepare(::NPCCrowd::NPCCrowdNativeDataManager* manager, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR_PREPARE_OFFSET))(this, manager, deltaTime);
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::NPCCrowdNativeDataManager* manager, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR_EXECUTE_OFFSET))(this, manager, deltaTime, dependsOn);
		}

		::System::Void SyncDirtyState(::NPCCrowd::NPCCrowdNativeDataManager* manager, ::NPCCrowd::Avatar::NPCCrowdNativeAvatarDitherData* ditherData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*, ::NPCCrowd::Avatar::NPCCrowdNativeAvatarDitherData*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR_SYNCDIRTYSTATE_OFFSET))(this, manager, ditherData);
		}

		static ::System::Boolean TryCreateInput(::COCJHGGDBCA* npcComp, ::NPCCrowd::Avatar::FNPCCrowdAvatarDitherInputFragment& input)
		{
			return ((::System::Boolean(*)(::COCJHGGDBCA*, ::NPCCrowd::Avatar::FNPCCrowdAvatarDitherInputFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR_TRYCREATEINPUT_OFFSET))(npcComp, input);
		}

		static ::System::Boolean TryCreateConfig(::COCJHGGDBCA* npcComp, ::NPCCrowd::Avatar::FNPCCrowdAvatarDitherInputFragment& config)
		{
			return ((::System::Boolean(*)(::COCJHGGDBCA*, ::NPCCrowd::Avatar::FNPCCrowdAvatarDitherInputFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR_TRYCREATECONFIG_OFFSET))(npcComp, config);
		}

		static ::System::Boolean TryGetDitherAbilitySnapshot(::NPCCrowd::Ability::NPCAbility* ability, ::System::Boolean& startFadeOutFromAbility, ::System::Boolean& collisionDither)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::NPCAbility*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR_TRYGETDITHERABILITYSNAPSHOT_OFFSET))(ability, startFadeOutFromAbility, collisionDither);
		}

		static ::System::Boolean TryGetAbilityRuntimeIndex(::NPCCrowd::Ability::NPCAbility* ability, ::NPCCrowd::Ability::NPCAbilityRuntimeData*& runtime, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::NPCAbility*, ::NPCCrowd::Ability::NPCAbilityRuntimeData*&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR_TRYGETABILITYRUNTIMEINDEX_OFFSET))(ability, runtime, index);
		}

		static ::System::Boolean HasDirtyFlag(::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyFlags flags, ::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyFlags flag)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyFlags, ::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyFlags))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDNATIVEAVATARDITHERPROCESSOR_HASDIRTYFLAG_OFFSET))(flags, flag);
		}
	};
}
