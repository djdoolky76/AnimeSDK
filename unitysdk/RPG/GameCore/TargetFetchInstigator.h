#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchInstigator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHINSTIGATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB62AF0)
#define RPG_GAMECORE_TARGETFETCHINSTIGATOR_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB62BA0)
#define RPG_GAMECORE_TARGETFETCHINSTIGATOR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB62B60)
#define RPG_GAMECORE_TARGETFETCHINSTIGATOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB62B00)
#define RPG_GAMECORE_TARGETFETCHINSTIGATOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB62A60)

namespace RPG::GameCore
{
	class TargetFetchInstigator : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchInstigator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchInstigator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchInstigator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchInstigator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchInstigator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchInstigator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchInstigator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchInstigator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
