#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtCollision2DShapeConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA49180)
#define RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA59860)
#define RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA592E0)
#define RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA59280)
#define RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA497D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtCollision2DShapeConfig_TypeDefinitionIndex = 17653;

	class RtCollision2DShapeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtCollision2DShapeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtCollision2DShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtCollision2DShapeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtCollision2DShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtCollision2DShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtCollision2DShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtCollision2DShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtCollision2DShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
