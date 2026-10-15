#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FetchAdvNPCData; }
namespace RPG::GameCore { class TargetFetchAdvNPC; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVNPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5C4A0)
#define RPG_GAMECORE_TARGETFETCHADVNPC_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB5C5F0)
#define RPG_GAMECORE_TARGETFETCHADVNPC_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB5C5A0)
#define RPG_GAMECORE_TARGETFETCHADVNPC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5C4B0)
#define RPG_GAMECORE_TARGETFETCHADVNPC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5C450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvNPC_TypeDefinitionIndex = 23874;

	class TargetFetchAdvNPC : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::FetchAdvNPCData*>* MultiGroupFetch; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvNPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvNPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNPC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNPC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
