#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareSPChangeTag; }
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESPCHANGETAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A30E0)
#define RPG_GAMECORE_BYCOMPARESPCHANGETAG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4A32B0)
#define RPG_GAMECORE_BYCOMPARESPCHANGETAG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4A3280)
#define RPG_GAMECORE_BYCOMPARESPCHANGETAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A30F0)
#define RPG_GAMECORE_BYCOMPARESPCHANGETAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A30B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSPChangeTag_TypeDefinitionIndex = 23565;

	class ByCompareSPChangeTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* TagList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPCHANGETAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSPChangeTag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSPChangeTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPCHANGETAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSPChangeTag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSPChangeTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPCHANGETAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSPChangeTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSPChangeTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPCHANGETAG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSPChangeTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSPChangeTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPCHANGETAG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
