#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetRemoveUnselectable; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6DCA0)
#define RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB6DD30)
#define RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB6DD10)
#define RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB6DCB0)
#define RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB6DC30)

namespace RPG::GameCore
{
	class TargetRemoveUnselectable : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetRemoveUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetRemoveUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetRemoveUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetRemoveUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetRemoveUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetRemoveUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetRemoveUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetRemoveUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREMOVEUNSELECTABLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
