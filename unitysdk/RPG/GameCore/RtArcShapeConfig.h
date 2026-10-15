#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCollision2DShapeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtArcShapeConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTARCSHAPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA48A50)
#define RPG_GAMECORE_RTARCSHAPECONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA48DF0)
#define RPG_GAMECORE_RTARCSHAPECONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA48CE0)
#define RPG_GAMECORE_RTARCSHAPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA48B30)
#define RPG_GAMECORE_RTARCSHAPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA48940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtArcShapeConfig_TypeDefinitionIndex = 17657;

	class RtArcShapeConfig : public ::RPG::GameCore::RtCollision2DShapeConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RadiusMin; // 0x10
		::RPG::GameCore::DynamicFloat* RadiusMax; // 0x18
		::RPG::GameCore::DynamicFloat* Angle; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTARCSHAPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtArcShapeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtArcShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTARCSHAPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtArcShapeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtArcShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTARCSHAPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtArcShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtArcShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTARCSHAPECONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtArcShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtArcShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTARCSHAPECONFIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
