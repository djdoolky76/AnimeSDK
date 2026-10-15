#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PuzzleFunc.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ShowFuncBtn; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWFUNCBTN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAF700)
#define RPG_GAMECORE_SHOWFUNCBTN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAF720)
#define RPG_GAMECORE_SHOWFUNCBTN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAF6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowFuncBtn_TypeDefinitionIndex = 20497;

	class ShowFuncBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18
		::System::Boolean HideWhenGraphFinish; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 ItemID; // 0x1C
		::RPG::GameCore::PuzzleFunc PuzzleFunc; // 0x20
		::System::Single CDDuration; // 0x24
		::System::Boolean ShowBtnFucHint; // 0x28
		::System::Byte _padding1[0x7];
		::RPG::GameCore::DynamicString* CustomString; // 0x30
		::System::Boolean ShowBtnEffect; // 0x38
		::System::Byte _padding2[0x7];
		::System::String* OverrideIconPath; // 0x40
		::RPG::Client::TextID OverrideBtnHint; // 0x48
		::RPG::GameCore::DynamicFloat* MissionID; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCBTN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowFuncBtn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowFuncBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCBTN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowFuncBtn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowFuncBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCBTN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
