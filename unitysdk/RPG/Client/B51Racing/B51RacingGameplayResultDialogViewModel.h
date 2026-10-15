#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/EB51RacingResultState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class LGKNPHGNNDI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYRESULTDIALOGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC7A1FB0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingGameplayResultDialogViewModel_TypeDefinitionIndex = 82043;

	class B51RacingGameplayResultDialogViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::LGKNPHGNNDI*>* RankEntries; // 0x10
		::System::Boolean IsChallenge; // 0x18
		::System::Boolean ShowRestartButton; // 0x19
		::System::Boolean ShowEmptyCloseButton; // 0x1A
		::System::Boolean ShowHintPanel; // 0x1B
		::System::Boolean ShowExitButton; // 0x1C
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID TitleText; // 0x20
		::RPG::Client::B51Racing::EB51RacingResultState ResultState; // 0x30
		::System::Int32 PlayerFinalRank; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYRESULTDIALOGVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
