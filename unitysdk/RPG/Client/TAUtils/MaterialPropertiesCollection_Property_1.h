#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/MaterialPropertiesCollection_Property.h"

namespace RPG::Client::TAUtils
{
	template <typename T>
	class MaterialPropertiesCollection_Property_1 : public ::RPG::Client::TAUtils::MaterialPropertiesCollection_Property
	{
	public:
		T value; // 0x0
	};
}
