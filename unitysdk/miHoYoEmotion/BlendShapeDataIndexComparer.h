#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/miHoYoEmotion/BlendShapeData.h"

#define MIHOYOEMOTION_BLENDSHAPEDATAINDEXCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x8B9CF0)
#define MIHOYOEMOTION_BLENDSHAPEDATAINDEXCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8B9E00)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int BlendShapeDataIndexComparer_TypeDefinitionIndex = 38074;

	struct alignas(4) BlendShapeDataIndexComparer
	{
		::System::Boolean Equals(::miHoYoEmotion::BlendShapeData x, ::miHoYoEmotion::BlendShapeData y)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::BlendShapeData, ::miHoYoEmotion::BlendShapeData))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATAINDEXCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::miHoYoEmotion::BlendShapeData obj)
		{
			return ((::System::Int32(*)(::PVOID, ::miHoYoEmotion::BlendShapeData))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATAINDEXCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
