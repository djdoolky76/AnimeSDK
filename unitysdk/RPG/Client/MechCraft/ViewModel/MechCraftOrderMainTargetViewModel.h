#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
class CELAKJDDDOH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERMAINTARGETVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD6837E0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERMAINTARGETVIEWMODEL_GET_REQUIREINFOS_OFFSET UNITYSDK_OFFSET(0xD683710)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERMAINTARGETVIEWMODEL_SET_REQUIREINFOS_OFFSET UNITYSDK_OFFSET(0xD683750)

namespace RPG::Client::MechCraft::ViewModel
{
	class MechCraftOrderMainTargetViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::Generic::List_1<::CELAKJDDDOH*>* _RequireInfos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERMAINTARGETVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::CELAKJDDDOH*>* get_RequireInfos()
		{
			return ((::System::Collections::Generic::List_1<::CELAKJDDDOH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERMAINTARGETVIEWMODEL_GET_REQUIREINFOS_OFFSET))(this);
		}

		::System::Void set_RequireInfos(::System::Collections::Generic::List_1<::CELAKJDDDOH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CELAKJDDDOH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERMAINTARGETVIEWMODEL_SET_REQUIREINFOS_OFFSET))(this, a1);
		}

	};
}
