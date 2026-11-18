#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCBLENDSHAPEMASKASSET__CTOR_OFFSET UNITYSDK_OFFSET(0xED66DD0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCBlendShapeMaskAsset_TypeDefinitionIndex = 74003;

	class NPCBlendShapeMaskAsset : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Boolean isFullMask; // 0x58
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::String*>* blendShapeNames; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCBLENDSHAPEMASKASSET__CTOR_OFFSET))(this);
		}
	};
}
