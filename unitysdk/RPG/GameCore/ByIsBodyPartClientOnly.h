#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ByIsBodyPart.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsBodyPartClientOnly; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISBODYPARTCLIENTONLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1FE550)
#define RPG_GAMECORE_BYISBODYPARTCLIENTONLY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E1FEE10)
#define RPG_GAMECORE_BYISBODYPARTCLIENTONLY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E1FEDB0)
#define RPG_GAMECORE_BYISBODYPARTCLIENTONLY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E1FE560)
#define RPG_GAMECORE_BYISBODYPARTCLIENTONLY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E1FEDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsBodyPartClientOnly_TypeDefinitionIndex = 23754;

	class ByIsBodyPartClientOnly : public ::RPG::GameCore::ByIsBodyPart
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTCLIENTONLY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsBodyPartClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsBodyPartClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTCLIENTONLY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsBodyPartClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsBodyPartClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTCLIENTONLY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTCLIENTONLY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTCLIENTONLY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
