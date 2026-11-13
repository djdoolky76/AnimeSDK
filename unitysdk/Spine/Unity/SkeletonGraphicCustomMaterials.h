#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace Spine::Unity { class SkeletonGraphic; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_CTOR_OFFSET UNITYSDK_OFFSET(0x191F94F0)
#define SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x191F9420)
#define SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x191F92B0)
#define SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_REMOVECUSTOMMATERIALOVERRIDES_OFFSET UNITYSDK_OFFSET(0x191F8BF0)
#define SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_REMOVECUSTOMTEXTUREOVERRIDES_OFFSET UNITYSDK_OFFSET(0x191F9030)
#define SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_SETCUSTOMMATERIALOVERRIDES_OFFSET UNITYSDK_OFFSET(0x191F8A30)
#define SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_SETCUSTOMTEXTUREOVERRIDES_OFFSET UNITYSDK_OFFSET(0x191F8E70)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphicCustomMaterials_TypeDefinitionIndex = 46125;

	class SkeletonGraphicCustomMaterials : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::SkeletonGraphic* skeletonGraphic; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* customMaterialOverrides; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* customTextureOverrides; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_CTOR_OFFSET))(this);
		}

		::System::Void SetCustomMaterialOverrides()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_SETCUSTOMMATERIALOVERRIDES_OFFSET))(this);
		}

		::System::Void RemoveCustomMaterialOverrides()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_REMOVECUSTOMMATERIALOVERRIDES_OFFSET))(this);
		}

		::System::Void SetCustomTextureOverrides()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_SETCUSTOMTEXTUREOVERRIDES_OFFSET))(this);
		}

		::System::Void RemoveCustomTextureOverrides()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_REMOVECUSTOMTEXTUREOVERRIDES_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_ONDISABLE_OFFSET))(this);
		}

	};
}
