#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class AtlasRegion; }
namespace Spine::Unity { class BlendModeMaterials_ReplacementMaterial; }

#define SPINE_UNITY_BLENDMODEMATERIALS___C__DISPLAYCLASS18_0__CREATEFORREGION_B__0_OFFSET UNITYSDK_OFFSET(0x1FF43630)
#define SPINE_UNITY_BLENDMODEMATERIALS___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF43620)

namespace Spine::Unity
{
	inline static constexpr unsigned int BlendModeMaterials___c__DisplayClass18_0_TypeDefinitionIndex = 38101;

	class BlendModeMaterials___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::Spine::AtlasRegion* originalRegion; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateForRegion_b__0(::Spine::Unity::BlendModeMaterials_ReplacementMaterial* replacement)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Unity::BlendModeMaterials_ReplacementMaterial*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS___C__DISPLAYCLASS18_0__CREATEFORREGION_B__0_OFFSET))(this, replacement);
		}
	};
}
