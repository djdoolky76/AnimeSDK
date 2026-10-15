#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetSortByAITag; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETSORTBYAITAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB410E0)
#define RPG_GAMECORE_TARGETSORTBYAITAG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB412C0)
#define RPG_GAMECORE_TARGETSORTBYAITAG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB41270)
#define RPG_GAMECORE_TARGETSORTBYAITAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB410F0)
#define RPG_GAMECORE_TARGETSORTBYAITAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB41090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByAITag_TypeDefinitionIndex = 23990;

	class TargetSortByAITag : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::String* AITagKey; // 0x10
		::System::Boolean HighestFirst; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* MaxClamp; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYAITAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByAITag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByAITag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYAITAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByAITag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByAITag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYAITAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByAITag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByAITag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYAITAG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByAITag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByAITag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYAITAG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
