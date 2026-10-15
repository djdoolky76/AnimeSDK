#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchDataViewUISelectLeave; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB61F70)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB62000)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB61FE0)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB61F80)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB61F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchDataViewUISelectLeave_TypeDefinitionIndex = 23960;

	class TargetFetchDataViewUISelectLeave : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTLEAVE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
