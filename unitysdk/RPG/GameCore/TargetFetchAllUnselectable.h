#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetFetchAllUnselectable; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5F970)
#define RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB5FAD0)
#define RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB5FAA0)
#define RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5F980)
#define RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5F940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAllUnselectable_TypeDefinitionIndex = 23936;

	class TargetFetchAllUnselectable : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceEntity; // 0x10
		::System::Boolean RemoveForceUnselectable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAllUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAllUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAllUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAllUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLUNSELECTABLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
