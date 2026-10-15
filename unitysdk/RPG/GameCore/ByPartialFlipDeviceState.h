#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByPartialFlipDeviceState; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D501E80)
#define RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D5020C0)
#define RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D502090)
#define RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D501E90)
#define RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D501E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPartialFlipDeviceState_TypeDefinitionIndex = 22336;

	class ByPartialFlipDeviceState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* InstanceID; // 0x20
		::System::Boolean IsOn; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPartialFlipDeviceState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPartialFlipDeviceState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPartialFlipDeviceState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPartialFlipDeviceState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPartialFlipDeviceState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPartialFlipDeviceState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPartialFlipDeviceState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPartialFlipDeviceState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPARTIALFLIPDEVICESTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
