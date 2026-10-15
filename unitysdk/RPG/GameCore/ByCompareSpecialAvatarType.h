#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SpecialAvatarType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareSpecialAvatarType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A9140)
#define RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4A9350)
#define RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4A9320)
#define RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A9150)
#define RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A9110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSpecialAvatarType_TypeDefinitionIndex = 23368;

	class ByCompareSpecialAvatarType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::SpecialAvatarType CompareType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSpecialAvatarType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSpecialAvatarType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSpecialAvatarType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSpecialAvatarType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialAvatarType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialAvatarType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialAvatarType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialAvatarType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
