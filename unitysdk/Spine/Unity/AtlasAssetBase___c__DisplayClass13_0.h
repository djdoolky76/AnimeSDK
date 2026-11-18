#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine::Unity { class MaterialOverrideSet; }
namespace System { class String; }

#define SPINE_UNITY_ATLASASSETBASE___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x2001B6C0)
#define SPINE_UNITY_ATLASASSETBASE___C__DISPLAYCLASS13_0__GETMATERIALOVERRIDESET_B__0_OFFSET UNITYSDK_OFFSET(0x2001B6D0)

namespace Spine::Unity
{
	inline static constexpr unsigned int AtlasAssetBase___c__DisplayClass13_0_TypeDefinitionIndex = 38095;

	class AtlasAssetBase___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMaterialOverrideSet_b__0(::Spine::Unity::MaterialOverrideSet* entry)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Unity::MaterialOverrideSet*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE___C__DISPLAYCLASS13_0__GETMATERIALOVERRIDESET_B__0_OFFSET))(this, entry);
		}
	};
}
