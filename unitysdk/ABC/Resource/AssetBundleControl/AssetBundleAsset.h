#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Resource/AssetBundleControl/ScriptableObjectUseFiEdit.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_RESOURCE_ASSETBUNDLECONTROL_ASSETBUNDLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E456F0)

namespace ABC::Resource::AssetBundleControl
{
	inline static constexpr unsigned int AssetBundleAsset_TypeDefinitionIndex = 4030;

	class AssetBundleAsset : public ::ABC::Resource::AssetBundleControl::ScriptableObjectUseFiEdit
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* asbList; // 0x18
		::System::String* projectChangeList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_RESOURCE_ASSETBUNDLECONTROL_ASSETBUNDLEASSET__CTOR_OFFSET))(this);
		}
	};
}
