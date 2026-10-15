#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeviceRelatedBool; }

#define RPG_GAMECORE_DEVICERELATEDBOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D0F70)
#define RPG_GAMECORE_DEVICERELATEDBOOL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D0F80)
#define RPG_GAMECORE_DEVICERELATEDBOOL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D0F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedBool_TypeDefinitionIndex = 16470;

	class DeviceRelatedBool : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::System::Boolean Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDBOOL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceRelatedBool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceRelatedBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDBOOL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceRelatedBool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceRelatedBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDBOOL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
