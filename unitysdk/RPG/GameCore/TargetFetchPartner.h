#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetFetchPartner; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHPARTNER_CTOR_OFFSET UNITYSDK_OFFSET(0x206EE9E0)
#define RPG_GAMECORE_TARGETFETCHPARTNER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206EEB10)
#define RPG_GAMECORE_TARGETFETCHPARTNER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206EEAE0)
#define RPG_GAMECORE_TARGETFETCHPARTNER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206EE9F0)
#define RPG_GAMECORE_TARGETFETCHPARTNER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206EE9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchPartner_TypeDefinitionIndex = 24391;

	class TargetFetchPartner : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x10
		::System::String* Name; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARTNER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchPartner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchPartner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARTNER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchPartner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchPartner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARTNER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPartner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPartner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARTNER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPartner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPartner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARTNER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
