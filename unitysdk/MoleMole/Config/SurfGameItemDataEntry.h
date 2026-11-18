#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigSurfGameItemAction; }

#define MOLEMOLE_CONFIG_SURFGAMEITEMDATAENTRY_ISVALID_OFFSET UNITYSDK_OFFSET(0x7FF610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SurfGameItemDataEntry_TypeDefinitionIndex = 64547;

	struct alignas(8) SurfGameItemDataEntry
	{
		::System::Int32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>* actionConfigs; // 0x18
		::System::Single PickUpSize; // 0x20

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SURFGAMEITEMDATAENTRY_ISVALID_OFFSET))(this);
		}
	};
}
