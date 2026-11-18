#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Accessories/DeviceWheelMotionBinding.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DEVICEWHEELMOTIONBATCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114C0180)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DEVICEWHEELMOTIONBATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x114C00A0)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryManager_DeviceWheelMotionBatch_TypeDefinitionIndex = 52990;

	class NPCAccessoryManager_DeviceWheelMotionBatch : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* Accessories; // 0x10
		::NPCCrowd::Ability::NPCAbilityRuntimeData* Runtime; // 0x18
		::System::UInt32 Revision; // 0x20
		::System::Byte _padding0[0x4];
		::Unity::Collections::NativeList_1<::NPCCrowd::Accessories::DeviceWheelMotionBinding> Bindings; // 0x28

		::System::Void _ctor(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DEVICEWHEELMOTIONBATCH__CTOR_OFFSET))(this, runtime);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DEVICEWHEELMOTIONBATCH_DISPOSE_OFFSET))(this);
		}
	};
}
