#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchPetPartyRole; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHPETPARTYROLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB375D0)
#define RPG_GAMECORE_TARGETFETCHPETPARTYROLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB376D0)
#define RPG_GAMECORE_TARGETFETCHPETPARTYROLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB37680)
#define RPG_GAMECORE_TARGETFETCHPETPARTYROLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB375E0)
#define RPG_GAMECORE_TARGETFETCHPETPARTYROLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB37500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchPetPartyRole_TypeDefinitionIndex = 17543;

	class TargetFetchPetPartyRole : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::String* RoleName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPETPARTYROLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchPetPartyRole* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchPetPartyRole*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPETPARTYROLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchPetPartyRole* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchPetPartyRole*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPETPARTYROLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPetPartyRole* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPetPartyRole*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPETPARTYROLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPetPartyRole* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPetPartyRole*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPETPARTYROLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
