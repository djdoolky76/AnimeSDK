#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_BLENDSHAPECOLLECTCACHE_RESET_OFFSET UNITYSDK_OFFSET(0xE7881D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_BLENDSHAPECOLLECTCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0xE7883A0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_CollectPreUpdateProcessor_BlendShapeCollectCache_TypeDefinitionIndex = 81235;

	class AnimationSubManager_CollectPreUpdateProcessor_BlendShapeCollectCache : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* ActiveRuntimePaths; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* NameOffsets; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* ActiveDefaultPaths; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* UsedNameIndices; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_BLENDSHAPECOLLECTCACHE__CTOR_OFFSET))(this);
		}

		::System::Void Reset(::System::Int32 nameCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_BLENDSHAPECOLLECTCACHE_RESET_OFFSET))(this, nameCount);
		}
	};
}
