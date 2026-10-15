#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class FEIPLKMMIOI;
class GBDIKBFIMIM;
namespace RPG::Client::FateRin::Day { class SwitchDayTalkEntryViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCF98720)
#define RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODEL_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0xCF98CD0)

namespace RPG::Client::FateRin::Day
{
	inline static constexpr unsigned int SwitchDayTalkViewModel_TypeDefinitionIndex = 81071;

	class SwitchDayTalkViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Day::SwitchDayTalkEntryViewModel*>* _Entries_ReadOnly; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Day::SwitchDayTalkEntryViewModel*>* _Entries; // 0x28
		::GBDIKBFIMIM* _Model; // 0x30
		::System::Void _ctor(::GBDIKBFIMIM* a1, ::FEIPLKMMIOI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GBDIKBFIMIM*, ::FEIPLKMMIOI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Day::SwitchDayTalkEntryViewModel*>* get_Entries()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Day::SwitchDayTalkEntryViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_DAY_SWITCHDAYTALKVIEWMODEL_GET_ENTRIES_OFFSET))(this);
		}

	};
}
