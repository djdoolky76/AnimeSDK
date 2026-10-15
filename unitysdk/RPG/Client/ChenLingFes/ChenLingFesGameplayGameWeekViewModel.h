#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class FPPNANNOMPF;
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayGameDayItemViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayGameWeekViewModel; }
namespace Sofa::Core { template <typename T> class ObservableList_1; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xCA928C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCA92B50)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_GET_GAMEDAYS_OFFSET UNITYSDK_OFFSET(0xCA92D90)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_SET_GAMEDAYS_OFFSET UNITYSDK_OFFSET(0xCA92DA0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_SYNC_OFFSET UNITYSDK_OFFSET(0xCA92C10)

namespace RPG::Client::ChenLingFes
{
	class ChenLingFesGameplayGameWeekViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayGameDayItemViewModel*>* _GameDays_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingFes::ChenLingFesGameplayGameWeekViewModel* Create(::FPPNANNOMPF* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayGameWeekViewModel*(*)(::FPPNANNOMPF*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Sync(::FPPNANNOMPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPPNANNOMPF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_SYNC_OFFSET))(this, a1);
		}

		::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayGameDayItemViewModel*>* get_GameDays()
		{
			return ((::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayGameDayItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_GET_GAMEDAYS_OFFSET))(this);
		}

		::System::Void set_GameDays(::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayGameDayItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayGameDayItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEWEEKVIEWMODEL_SET_GAMEDAYS_OFFSET))(this, a1);
		}

	};
}
