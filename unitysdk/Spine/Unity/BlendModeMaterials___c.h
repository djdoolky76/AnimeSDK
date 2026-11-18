#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine::Unity { class SkeletonDataAsset; }
namespace System { template <typename T> class Action_1; }

#define SPINE_UNITY_BLENDMODEMATERIALS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB1F220)
#define SPINE_UNITY_BLENDMODEMATERIALS___C__CREATEANDASSIGNMATERIALS_B__16_0_OFFSET UNITYSDK_OFFSET(0x1FB1F270)
#define SPINE_UNITY_BLENDMODEMATERIALS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB1F260)

namespace Spine::Unity
{
	inline static constexpr unsigned int BlendModeMaterials___c_TypeDefinitionIndex = 38100;

	class BlendModeMaterials___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BlendModeMaterials___c_TypeDefinitionIndex)->GetStaticField(0x2DCB0);
		}
		static ::System::Action_1<::Spine::Unity::SkeletonDataAsset*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::Spine::Unity::SkeletonDataAsset*>**)Il2CppClass::FromTypeDefinitionIndex(BlendModeMaterials___c_TypeDefinitionIndex)->GetStaticField(0x2DCB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS___C__CTOR_OFFSET))(this);
		}

		::System::Void _CreateAndAssignMaterials_b__16_0(::Spine::Unity::SkeletonDataAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonDataAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS___C__CREATEANDASSIGNMATERIALS_B__16_0_OFFSET))(this, asset);
		}
	};
}
