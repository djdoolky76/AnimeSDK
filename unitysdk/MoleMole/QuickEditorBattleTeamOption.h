#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/PCEALKAMJDN.h"

class BKGKJNHLCKC;
class BPFDIBAFAFI;
class BPHGNMNLLHF;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_QUICKEDITORBATTLETEAMOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x13F0F190)

namespace MoleMole
{
	inline static constexpr unsigned int QuickEditorBattleTeamOption_TypeDefinitionIndex = 74555;

	class QuickEditorBattleTeamOption : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* historyTeam; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* avatarAbilityMap; // 0x30
		::System::Action_1<::BPFDIBAFAFI*>* onConfirmCallback; // 0x38
		::System::Collections::Generic::List_1<::BKGKJNHLCKC*>* buddyDataList; // 0x40
		::System::String* headerDescTextKey; // 0x48
		::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* avatarItemList; // 0x50
		::System::Boolean useAlternativeBackground; // 0x58
		::System::Boolean isOpenBuddy; // 0x59
		::System::Byte _padding0[0x2];
		::System::UInt32 monsterID; // 0x5C
		::PCEALKAMJDN displayMode; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUICKEDITORBATTLETEAMOPTION__CTOR_OFFSET))(this);
		}
	};
}
