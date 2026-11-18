#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKDirtyEntity.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKDirtyFlags.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKInputFragment.h"

class COCJHGGDBCA;
namespace NPCCrowd { class NPCCrowdNativeDataManager; }
namespace NPCCrowd::Animation { class NPCCrowdNativeLookAtIKData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR_ABORTPREPAREDFRAME_OFFSET UNITYSDK_OFFSET(0xED74A40)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR_APPLYCOMMANDS_OFFSET UNITYSDK_OFFSET(0xED74AB0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR_CANAPPLYCURRENTFRAME_OFFSET UNITYSDK_OFFSET(0xED749A0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xED74690)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR_PREPARE_OFFSET UNITYSDK_OFFSET(0xED73AD0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR_SYNCDIRTYINPUTS_OFFSET UNITYSDK_OFFSET(0xED744B0)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR_TRYCREATEINPUT_OFFSET UNITYSDK_OFFSET(0xED74D70)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR_UPDATEGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xED73D90)
#define NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xED74E90)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdNativeLookAtIKProcessor_TypeDefinitionIndex = 64100;

	class NPCCrowdNativeLookAtIKProcessor : public ::System::Object
	{
	public:
		::System::Object* _lastConfig; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _configTagBuffer; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdLookAtIKDirtyEntity>* _dirtyEntities; // 0x20
		::System::Boolean _previousEnabled; // 0x28
		::System::Boolean _forceApplyThisFrame; // 0x29
		::System::Byte _padding0[0x6];
		::Unity::Jobs::JobHandle _abilityTransformDependency; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Boolean Prepare(::NPCCrowd::NPCCrowdNativeDataManager* manager, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR_PREPARE_OFFSET))(this, manager, deltaTime);
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::NPCCrowdNativeDataManager* manager, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR_EXECUTE_OFFSET))(this, manager, deltaTime, dependsOn);
		}

		::System::Boolean CanApplyCurrentFrame(::NPCCrowd::NPCCrowdNativeDataManager* manager)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR_CANAPPLYCURRENTFRAME_OFFSET))(this, manager);
		}

		::System::Void AbortPreparedFrame(::NPCCrowd::NPCCrowdNativeDataManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR_ABORTPREPAREDFRAME_OFFSET))(this, manager);
		}

		::System::Void ApplyCommands(::NPCCrowd::NPCCrowdNativeDataManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR_APPLYCOMMANDS_OFFSET))(this, manager);
		}

		::System::Void SyncDirtyInputs(::NPCCrowd::NPCCrowdNativeDataManager* manager, ::NPCCrowd::Animation::NPCCrowdNativeLookAtIKData* data)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*, ::NPCCrowd::Animation::NPCCrowdNativeLookAtIKData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR_SYNCDIRTYINPUTS_OFFSET))(this, manager, data);
		}

		static ::System::Boolean TryCreateInput(::COCJHGGDBCA* npcComp, ::NPCCrowd::Animation::FNPCCrowdLookAtIKDirtyFlags dirtyFlags, ::NPCCrowd::Animation::FNPCCrowdLookAtIKInputFragment& input)
		{
			return ((::System::Boolean(*)(::COCJHGGDBCA*, ::NPCCrowd::Animation::FNPCCrowdLookAtIKDirtyFlags, ::NPCCrowd::Animation::FNPCCrowdLookAtIKInputFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR_TRYCREATEINPUT_OFFSET))(npcComp, dirtyFlags, input);
		}

		::System::Void UpdateGlobalConfig(::NPCCrowd::Animation::NPCCrowdNativeLookAtIKData* data)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdNativeLookAtIKData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDNATIVELOOKATIKPROCESSOR_UPDATEGLOBALCONFIG_OFFSET))(this, data);
		}
	};
}
