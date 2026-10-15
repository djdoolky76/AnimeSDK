#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
class LMJCAJNDODP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDEROPTIONALCONDITIONSVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD683890)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDEROPTIONALCONDITIONSVIEWMODEL_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xD650020)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDEROPTIONALCONDITIONSVIEWMODEL_SET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xD683800)

namespace RPG::Client::MechCraft::ViewModel
{
	class MechCraftOrderOptionalConditionsViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::Generic::List_1<::LMJCAJNDODP*>* _RewardItems; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDEROPTIONALCONDITIONSVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::LMJCAJNDODP*>* get_RewardItems()
		{
			return ((::System::Collections::Generic::List_1<::LMJCAJNDODP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDEROPTIONALCONDITIONSVIEWMODEL_GET_REWARDITEMS_OFFSET))(this);
		}

		::System::Void set_RewardItems(::System::Collections::Generic::List_1<::LMJCAJNDODP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LMJCAJNDODP*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDEROPTIONALCONDITIONSVIEWMODEL_SET_REWARDITEMS_OFFSET))(this, a1);
		}

	};
}
