#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCurrentVCameraConfigCaster; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EDBE0)
#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4EDDA0)
#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4EDD70)
#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4EDBF0)
#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4EDBB0)

namespace RPG::GameCore
{
	class ByCurrentVCameraConfigCaster : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
