#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchNone; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHNONE_CTOR_OFFSET UNITYSDK_OFFSET(0x206EDDE0)
#define RPG_GAMECORE_TARGETFETCHNONE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206EDE70)
#define RPG_GAMECORE_TARGETFETCHNONE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206EDE50)
#define RPG_GAMECORE_TARGETFETCHNONE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206EDDF0)
#define RPG_GAMECORE_TARGETFETCHNONE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206EDD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchNone_TypeDefinitionIndex = 24366;

	class TargetFetchNone : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNONE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchNone* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchNone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNONE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchNone* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchNone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNONE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNONE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNONE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
