#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JJPHDPNACGD;
class LJNJJOFGCJB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVSTAGESHAREDETAILDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1671D510)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovStageShareDetailDialogPopWindowController_Context_TypeDefinitionIndex = 57688;

	class UIZenkovStageShareDetailDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* AvatarList; // 0x28
		::JJPHDPNACGD* WithdrawPoint; // 0x30
		::LJNJJOFGCJB* Medal; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* Top3ExpensiveItem; // 0x40
		::System::Int32 DungeonId; // 0x48
		::System::Int32 TimeCost; // 0x4C
		::System::Int64 Timestamp; // 0x50
		::System::Int32 ScoreValue; // 0x58
		::System::Boolean IsMedalLocked; // 0x5C
		::System::Boolean IsSelf; // 0x5D
		::System::Byte _padding0[0x2];
		::System::Int32 SeasonId; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSTAGESHAREDETAILDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
