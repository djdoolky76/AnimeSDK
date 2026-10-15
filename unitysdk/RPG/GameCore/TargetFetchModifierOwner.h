#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchModifierOwner; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB63800)
#define RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB63890)
#define RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB63870)
#define RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB63810)
#define RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB63790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchModifierOwner_TypeDefinitionIndex = 23907;

	class TargetFetchModifierOwner : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchModifierOwner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchModifierOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchModifierOwner* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchModifierOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchModifierOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchModifierOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchModifierOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchModifierOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMODIFIEROWNER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
