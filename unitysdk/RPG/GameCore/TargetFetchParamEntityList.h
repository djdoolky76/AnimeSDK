#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchParamEntityList; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB648F0)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB64980)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB64960)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB64900)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB64880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchParamEntityList_TypeDefinitionIndex = 23915;

	class TargetFetchParamEntityList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchParamEntityList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchParamEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchParamEntityList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchParamEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
