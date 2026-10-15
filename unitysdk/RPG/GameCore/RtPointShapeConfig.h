#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCollision2DShapeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtPointShapeConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTPOINTSHAPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA59040)
#define RPG_GAMECORE_RTPOINTSHAPECONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA62630)
#define RPG_GAMECORE_RTPOINTSHAPECONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA59790)
#define RPG_GAMECORE_RTPOINTSHAPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA59050)
#define RPG_GAMECORE_RTPOINTSHAPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA625C0)

namespace RPG::GameCore
{
	class RtPointShapeConfig : public ::RPG::GameCore::RtCollision2DShapeConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPOINTSHAPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtPointShapeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtPointShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPOINTSHAPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtPointShapeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtPointShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPOINTSHAPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtPointShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtPointShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPOINTSHAPECONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtPointShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtPointShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPOINTSHAPECONFIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
