#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKDirtyFlags.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKDirtyEntity.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDIRTYREGISTRY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1363F940)
#define NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDIRTYREGISTRY_COLLECTDIRTY_OFFSET UNITYSDK_OFFSET(0x1363F5B0)
#define NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDIRTYREGISTRY_MARK_OFFSET UNITYSDK_OFFSET(0x1363F370)
#define NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDIRTYREGISTRY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1363F840)
#define NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDIRTYREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1363FA80)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdLookAtIKDirtyRegistry_TypeDefinitionIndex = 62736;

	class NPCCrowdLookAtIKDirtyRegistry : public ::System::Object
	{
	public:
		::System::Object* _syncRoot; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Animation::FNPCCrowdLookAtIKDirtyFlags>* _dirty; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDIRTYREGISTRY__CTOR_OFFSET))(this);
		}

		::System::Void Mark(::System::UInt32 entityId, ::NPCCrowd::Animation::FNPCCrowdLookAtIKDirtyFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::FNPCCrowdLookAtIKDirtyFlags))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDIRTYREGISTRY_MARK_OFFSET))(this, entityId, flags);
		}

		::System::Void CollectDirty(::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdLookAtIKDirtyEntity>* output)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::FNPCCrowdLookAtIKDirtyEntity>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDIRTYREGISTRY_COLLECTDIRTY_OFFSET))(this, output);
		}

		::System::Void Remove(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDIRTYREGISTRY_REMOVE_OFFSET))(this, entityId);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDIRTYREGISTRY_CLEAR_OFFSET))(this);
		}
	};
}
