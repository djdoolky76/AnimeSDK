#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class BMEBMENDJGA;
namespace RPG::Client::ChenLingFes { class ChenLingFesGameAwardInfoViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameAwardItemViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDINFOVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xCA817D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDINFOVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCA81DA0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDINFOVIEWMODEL_GET_AWARDITEMS_OFFSET UNITYSDK_OFFSET(0xCA81EE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDINFOVIEWMODEL_SET_AWARDITEMS_OFFSET UNITYSDK_OFFSET(0xCA81EF0)

namespace RPG::Client::ChenLingFes
{
	class ChenLingFesGameAwardInfoViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesGameAwardItemViewModel*>* _AwardItems_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDINFOVIEWMODEL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingFes::ChenLingFesGameAwardInfoViewModel* Create(::BMEBMENDJGA* a1)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameAwardInfoViewModel*(*)(::BMEBMENDJGA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDINFOVIEWMODEL_CREATE_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesGameAwardItemViewModel*>* get_AwardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesGameAwardItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDINFOVIEWMODEL_GET_AWARDITEMS_OFFSET))(this);
		}

		::System::Void set_AwardItems(::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesGameAwardItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesGameAwardItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDINFOVIEWMODEL_SET_AWARDITEMS_OFFSET))(this, a1);
		}

	};
}
