#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CameraScreenScopeMode.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTargetInCameraScreenScope; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D53A2C0)
#define RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D53A700)
#define RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D53A680)
#define RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D53A320)
#define RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D53A240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetInCameraScreenScope_TypeDefinitionIndex = 20256;

	class ByTargetInCameraScreenScope : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Single ScreenHeightDetectRatio; // 0x28
		::System::Single ScreenWidthDetectRatio; // 0x2C
		::System::Single CenterOffsetRatioX; // 0x30
		::System::Single CenterOffsetRatioY; // 0x34
		::RPG::GameCore::CameraScreenScopeMode ScopeMode; // 0x38
		::System::Boolean EnableBlockDetect; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetInCameraScreenScope* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetInCameraScreenScope*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetInCameraScreenScope* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetInCameraScreenScope*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetInCameraScreenScope* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetInCameraScreenScope*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetInCameraScreenScope* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetInCameraScreenScope*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETINCAMERASCREENSCOPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
