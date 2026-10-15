#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetFetchAnchorByName; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHANCHORBYNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB60190)
#define RPG_GAMECORE_TARGETFETCHANCHORBYNAME_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB60250)
#define RPG_GAMECORE_TARGETFETCHANCHORBYNAME_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB60220)
#define RPG_GAMECORE_TARGETFETCHANCHORBYNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB601A0)
#define RPG_GAMECORE_TARGETFETCHANCHORBYNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB600F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAnchorByName_TypeDefinitionIndex = 23882;

	class TargetFetchAnchorByName : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::DynamicString* AnchorName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHORBYNAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAnchorByName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAnchorByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHORBYNAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAnchorByName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAnchorByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHORBYNAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchorByName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchorByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHORBYNAME_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchorByName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchorByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHORBYNAME_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
