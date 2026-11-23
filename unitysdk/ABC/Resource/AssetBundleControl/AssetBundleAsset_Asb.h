#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ABC_RESOURCE_ASSETBUNDLECONTROL_ASSETBUNDLEASSET_ASB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Resource::AssetBundleControl
{
	inline static constexpr unsigned int AssetBundleAsset_Asb_TypeDefinitionIndex = 4029;

	class AssetBundleAsset_Asb : public ::System::Object
	{
	public:
		::System::UInt64 name; // 0x10
		::System::UInt32 hash; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt64>* assets; // 0x20
		::Il2CppArray<::System::Int32>* directDependencies; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_RESOURCE_ASSETBUNDLECONTROL_ASSETBUNDLEASSET_ASB__CTOR_OFFSET))(this);
		}
	};
}
