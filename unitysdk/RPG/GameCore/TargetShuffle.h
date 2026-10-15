#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetShuffle; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSHUFFLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB40FF0)
#define RPG_GAMECORE_TARGETSHUFFLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB41080)
#define RPG_GAMECORE_TARGETSHUFFLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB41060)
#define RPG_GAMECORE_TARGETSHUFFLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB41000)
#define RPG_GAMECORE_TARGETSHUFFLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB40F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetShuffle_TypeDefinitionIndex = 23900;

	class TargetShuffle : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSHUFFLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetShuffle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetShuffle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSHUFFLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetShuffle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetShuffle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSHUFFLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetShuffle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetShuffle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSHUFFLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetShuffle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetShuffle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSHUFFLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
