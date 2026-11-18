#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLazyLoadItem_1_TypeDefinitionIndex = 89446;

	template <typename T>
	class ConfigLazyLoadItem_1 : public ::System::Object
	{
	public:
		::Foundation::AssetPath _assetPath; // 0x0
		T _config; // 0x0
	};
}
