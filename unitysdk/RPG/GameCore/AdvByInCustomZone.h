#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByInCustomZone; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ADVBYINCUSTOMZONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D395F00)
#define RPG_GAMECORE_ADVBYINCUSTOMZONE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D396160)
#define RPG_GAMECORE_ADVBYINCUSTOMZONE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D396130)
#define RPG_GAMECORE_ADVBYINCUSTOMZONE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D395F10)
#define RPG_GAMECORE_ADVBYINCUSTOMZONE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D395ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByInCustomZone_TypeDefinitionIndex = 20022;

	class AdvByInCustomZone : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* CustomZoneName; // 0x28
		::System::Boolean ReturnArtUnload; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYINCUSTOMZONE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByInCustomZone* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByInCustomZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYINCUSTOMZONE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByInCustomZone* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByInCustomZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYINCUSTOMZONE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByInCustomZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByInCustomZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYINCUSTOMZONE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByInCustomZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByInCustomZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYINCUSTOMZONE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
