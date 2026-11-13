#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class IMOMNFBEDHG;
class OHPOBLOJCPL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_B51RACING_B51RACINGSEASONPROGRESSDIALOGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA70F20)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingSeasonProgressDialogViewModel_TypeDefinitionIndex = 84834;

	class B51RacingSeasonProgressDialogViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::OHPOBLOJCPL*>* RankRows; // 0x10
		::System::Collections::Generic::List_1<::IMOMNFBEDHG*>* CalendarItems; // 0x18
		::System::Int32 TotalDay; // 0x20
		::System::Int32 CalendarStartIndex; // 0x24
		::RPG::Client::TextID TitleText; // 0x28
		::System::Int32 TargetSelectedDay; // 0x38
		::System::Boolean ShouldPlayNodeAdvance; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Int32 InitialSelectedDay; // 0x40
		::System::Int32 CalendarVisibleWindowSize; // 0x44
		::RPG::Client::TextID InfoButtonText; // 0x48
		::System::Int32 CurrentDay; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSEASONPROGRESSDIALOGVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
