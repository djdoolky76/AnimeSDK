#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareIsWolfBroPuzzleAvatar; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D48AC80)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D48AE00)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D48ADD0)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D48AC90)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D48AC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareIsWolfBroPuzzleAvatar_TypeDefinitionIndex = 21989;

	class ByCompareIsWolfBroPuzzleAvatar : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
