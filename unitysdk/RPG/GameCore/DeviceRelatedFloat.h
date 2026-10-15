#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeviceRelatedFloat; }

#define RPG_GAMECORE_DEVICERELATEDFLOAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FF130)
#define RPG_GAMECORE_DEVICERELATEDFLOAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FF140)
#define RPG_GAMECORE_DEVICERELATEDFLOAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FFAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedFloat_TypeDefinitionIndex = 16468;

	class DeviceRelatedFloat : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::System::Single Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFLOAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceRelatedFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceRelatedFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFLOAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceRelatedFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceRelatedFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFLOAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
