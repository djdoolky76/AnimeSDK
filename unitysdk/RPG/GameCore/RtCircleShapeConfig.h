#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCollision2DShapeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtCircleShapeConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTCIRCLESHAPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA58D40)
#define RPG_GAMECORE_RTCIRCLESHAPECONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA58EE0)
#define RPG_GAMECORE_RTCIRCLESHAPECONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA58E60)
#define RPG_GAMECORE_RTCIRCLESHAPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA58DA0)
#define RPG_GAMECORE_RTCIRCLESHAPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA58C10)

namespace RPG::GameCore
{
	class RtCircleShapeConfig : public ::RPG::GameCore::RtCollision2DShapeConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Radius; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCIRCLESHAPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtCircleShapeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtCircleShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCIRCLESHAPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtCircleShapeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtCircleShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCIRCLESHAPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtCircleShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtCircleShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCIRCLESHAPECONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtCircleShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtCircleShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCIRCLESHAPECONFIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
