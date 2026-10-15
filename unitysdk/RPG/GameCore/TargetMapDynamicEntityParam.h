#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapDynamicEntityParam; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6B420)
#define RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB6B500)
#define RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB6B4D0)
#define RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB6B430)
#define RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB6B370)

namespace RPG::GameCore
{
	class TargetMapDynamicEntityParam : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::String* DynamicKey; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapDynamicEntityParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapDynamicEntityParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDynamicEntityParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDynamicEntityParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
