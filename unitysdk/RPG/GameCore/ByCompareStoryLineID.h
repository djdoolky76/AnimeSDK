#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareStoryLineID; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESTORYLINEID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4DA640)
#define RPG_GAMECORE_BYCOMPARESTORYLINEID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4DA7F0)
#define RPG_GAMECORE_BYCOMPARESTORYLINEID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4DA7C0)
#define RPG_GAMECORE_BYCOMPARESTORYLINEID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4DA650)
#define RPG_GAMECORE_BYCOMPARESTORYLINEID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4DA610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareStoryLineID_TypeDefinitionIndex = 20768;

	class ByCompareStoryLineID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TargetStoryLineID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTORYLINEID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareStoryLineID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareStoryLineID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTORYLINEID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareStoryLineID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareStoryLineID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTORYLINEID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStoryLineID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStoryLineID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTORYLINEID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStoryLineID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStoryLineID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTORYLINEID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
