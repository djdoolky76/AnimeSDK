#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchElationTimeSource; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB62300)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB623B0)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB62370)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB62310)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB62270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchElationTimeSource_TypeDefinitionIndex = 23941;

	class TargetFetchElationTimeSource : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchElationTimeSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchElationTimeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchElationTimeSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchElationTimeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
