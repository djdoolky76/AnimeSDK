#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchDataViewUISelectEnter; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB61E60)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB61EF0)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB61ED0)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB61E70)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB61DF0)

namespace RPG::GameCore
{
	class TargetFetchDataViewUISelectEnter : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
