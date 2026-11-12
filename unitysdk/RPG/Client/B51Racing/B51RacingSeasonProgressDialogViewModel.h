#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class IMOMNFBEDHG;
class OHPOBLOJCPL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_B51RACING_B51RACINGSEASONPROGRESSDIALOGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD117750)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingSeasonProgressDialogViewModel_TypeDefinitionIndex = 84835;

	class B51RacingSeasonProgressDialogViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IMOMNFBEDHG*>* CalendarItems; // 0x10
		::System::Collections::Generic::List_1<::OHPOBLOJCPL*>* RankRows; // 0x18
		::System::Int32 CurrentDay; // 0x20
		::System::Int32 CalendarStartIndex; // 0x24
		::System::Int32 TargetSelectedDay; // 0x28
		::System::Int32 CalendarVisibleWindowSize; // 0x2C
		::System::Int32 TotalDay; // 0x30
		::System::Int32 InitialSelectedDay; // 0x34
		::RPG::Client::TextID InfoButtonText; // 0x38
		::RPG::Client::TextID TitleText; // 0x48
		::System::Boolean ShouldPlayNodeAdvance; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSEASONPROGRESSDIALOGVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
