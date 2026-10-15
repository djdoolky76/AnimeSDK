#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAnchor; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHANCHOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5FDA0)
#define RPG_GAMECORE_TARGETFETCHANCHOR_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB5FEE0)
#define RPG_GAMECORE_TARGETFETCHANCHOR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB5FE90)
#define RPG_GAMECORE_TARGETFETCHANCHOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5FDB0)
#define RPG_GAMECORE_TARGETFETCHANCHOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5FD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAnchor_TypeDefinitionIndex = 23881;

	class TargetFetchAnchor : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 GroupInstanceID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchor* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHOR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchor* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHOR_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
