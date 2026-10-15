#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchParamEntityByIndex; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB36D20)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB36E10)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB36DE0)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB36D30)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB36C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchParamEntityByIndex_TypeDefinitionIndex = 23919;

	class TargetFetchParamEntityByIndex : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Int32 Index; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchParamEntityByIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchParamEntityByIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchParamEntityByIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchParamEntityByIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityByIndex* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityByIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityByIndex* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityByIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
