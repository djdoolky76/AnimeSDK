#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCollision2DShapeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtPointShapeConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTPOINTSHAPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC74C20)
#define RPG_GAMECORE_RTPOINTSHAPECONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EC74CB0)
#define RPG_GAMECORE_RTPOINTSHAPECONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EC74C90)
#define RPG_GAMECORE_RTPOINTSHAPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC74C30)
#define RPG_GAMECORE_RTPOINTSHAPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC74BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtPointShapeConfig_TypeDefinitionIndex = 17823;

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
