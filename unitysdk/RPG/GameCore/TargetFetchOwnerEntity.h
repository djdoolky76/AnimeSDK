#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchOwnerEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHOWNERENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB36AB0)
#define RPG_GAMECORE_TARGETFETCHOWNERENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB36B40)
#define RPG_GAMECORE_TARGETFETCHOWNERENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB36B20)
#define RPG_GAMECORE_TARGETFETCHOWNERENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB36AC0)
#define RPG_GAMECORE_TARGETFETCHOWNERENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB36A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchOwnerEntity_TypeDefinitionIndex = 23975;

	class TargetFetchOwnerEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHOWNERENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchOwnerEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHOWNERENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchOwnerEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHOWNERENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHOWNERENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHOWNERENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
