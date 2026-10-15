#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureCameraOrthographicResetMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureCameraToOrthographic; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADVENTURECAMERATOORTHOGRAPHIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D396CE0)
#define RPG_GAMECORE_ADVENTURECAMERATOORTHOGRAPHIC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D396CF0)
#define RPG_GAMECORE_ADVENTURECAMERATOORTHOGRAPHIC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D396CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCameraToOrthographic_TypeDefinitionIndex = 22137;

	class AdventureCameraToOrthographic : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Reset; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* OrethographicSize; // 0x20
		::RPG::GameCore::DynamicFloat* BlendIn; // 0x28
		::RPG::GameCore::DynamicFloat* BlendOut; // 0x30
		::RPG::GameCore::DynamicString* BlendInCurve; // 0x38
		::RPG::GameCore::DynamicString* BlendOutCurve; // 0x40
		::System::Boolean ResetImmediately; // 0x48
		::System::Byte _padding1[0x3];
		::RPG::GameCore::AdventureCameraOrthographicResetMode ResetMode; // 0x4C
		::RPG::GameCore::DynamicFloat* Fov; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERATOORTHOGRAPHIC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureCameraToOrthographic* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureCameraToOrthographic*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERATOORTHOGRAPHIC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureCameraToOrthographic* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureCameraToOrthographic*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERATOORTHOGRAPHIC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
