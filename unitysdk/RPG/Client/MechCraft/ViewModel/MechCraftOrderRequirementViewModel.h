#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
class DILIKOIGENM;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderMainTargetViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderOptionalConditionsViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9190D0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_GET_CURRENCY_OFFSET UNITYSDK_OFFSET(0x1E918F20)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1E918FF0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_GET_MAINTARGET_OFFSET UNITYSDK_OFFSET(0x1E918D80)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_GET_OPTIONALCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1E918E50)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_SET_CURRENCY_OFFSET UNITYSDK_OFFSET(0x1E918F60)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1E919050)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_SET_MAINTARGET_OFFSET UNITYSDK_OFFSET(0x1E918DC0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_SET_OPTIONALCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1E918E90)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftOrderRequirementViewModel_TypeDefinitionIndex = 82440;

	class MechCraftOrderRequirementViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel* _OptionalConditions; // 0x18
		::DILIKOIGENM* _Currency; // 0x20
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* _MainTarget; // 0x28
		::RPG::Client::TextID _Desc; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* get_MainTarget()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_GET_MAINTARGET_OFFSET))(this);
		}

		::System::Void set_MainTarget(::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_SET_MAINTARGET_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel* get_OptionalConditions()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_GET_OPTIONALCONDITIONS_OFFSET))(this);
		}

		::System::Void set_OptionalConditions(::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderOptionalConditionsViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_SET_OPTIONALCONDITIONS_OFFSET))(this, a1);
		}

		::DILIKOIGENM* get_Currency()
		{
			return ((::DILIKOIGENM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_GET_CURRENCY_OFFSET))(this);
		}

		::System::Void set_Currency(::DILIKOIGENM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DILIKOIGENM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_SET_CURRENCY_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTORDERREQUIREMENTVIEWMODEL_SET_DESC_OFFSET))(this, a1);
		}

	};
}
