#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/EB51RacingResultState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class LGKNPHGNNDI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYRESULTDIALOGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA5C160)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingGameplayResultDialogViewModel_TypeDefinitionIndex = 84823;

	class B51RacingGameplayResultDialogViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::LGKNPHGNNDI*>* RankEntries; // 0x10
		::System::Boolean IsChallenge; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::Client::B51Racing::EB51RacingResultState ResultState; // 0x1C
		::System::Boolean ShowRestartButton; // 0x20
		::System::Boolean ShowExitButton; // 0x21
		::System::Boolean ShowHintPanel; // 0x22
		::System::Boolean ShowEmptyCloseButton; // 0x23
		::System::Int32 PlayerFinalRank; // 0x24
		::RPG::Client::TextID TitleText; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYRESULTDIALOGVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
