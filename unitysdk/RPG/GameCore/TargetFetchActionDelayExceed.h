#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchActionDelayExceed; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2D090)
#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB2D120)
#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB2D100)
#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB2D0A0)
#define RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB2D020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchActionDelayExceed_TypeDefinitionIndex = 23938;

	class TargetFetchActionDelayExceed : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchActionDelayExceed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchActionDelayExceed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchActionDelayExceed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchActionDelayExceed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActionDelayExceed* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActionDelayExceed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActionDelayExceed* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActionDelayExceed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTIONDELAYEXCEED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
