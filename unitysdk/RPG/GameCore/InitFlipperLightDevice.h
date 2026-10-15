#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicStringList; }
namespace RPG::GameCore { class InitFlipperLightDevice; }

#define RPG_GAMECORE_INITFLIPPERLIGHTDEVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D75A450)
#define RPG_GAMECORE_INITFLIPPERLIGHTDEVICE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D75A460)
#define RPG_GAMECORE_INITFLIPPERLIGHTDEVICE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D75A410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitFlipperLightDevice_TypeDefinitionIndex = 22339;

	class InitFlipperLightDevice : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicStringList* PointList; // 0x18
		::RPG::GameCore::DynamicStringList* MappingList; // 0x20
		::System::Boolean Static; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* OverrideLightTurnOnTime; // 0x30
		::RPG::GameCore::DynamicFloat* OverrideLightRotateSpeed; // 0x38
		::RPG::GameCore::DynamicFloat* OverrideLightBeamRangeDistance; // 0x40
		::RPG::GameCore::DynamicFloat* OverrideLightBeamFadeStartDistance; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITFLIPPERLIGHTDEVICE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitFlipperLightDevice* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitFlipperLightDevice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITFLIPPERLIGHTDEVICE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitFlipperLightDevice* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitFlipperLightDevice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITFLIPPERLIGHTDEVICE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
