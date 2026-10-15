#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCollision2DShapeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtRectShapeConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTRECTSHAPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2B810)
#define RPG_GAMECORE_RTRECTSHAPECONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA35180)
#define RPG_GAMECORE_RTRECTSHAPECONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA2BF10)
#define RPG_GAMECORE_RTRECTSHAPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2B8A0)
#define RPG_GAMECORE_RTRECTSHAPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA350D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtRectShapeConfig_TypeDefinitionIndex = 17656;

	class RtRectShapeConfig : public ::RPG::GameCore::RtCollision2DShapeConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* x; // 0x10
		::RPG::GameCore::DynamicFloat* y; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTRECTSHAPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtRectShapeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtRectShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTRECTSHAPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtRectShapeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtRectShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTRECTSHAPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtRectShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtRectShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTRECTSHAPECONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtRectShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtRectShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTRECTSHAPECONFIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
