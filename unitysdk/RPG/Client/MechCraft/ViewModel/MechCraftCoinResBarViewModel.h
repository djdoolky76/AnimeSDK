#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
class CEEGMMCFCBG;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftCoinViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINRESBARVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E90C480)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINRESBARVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E90C580)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINRESBARVIEWMODEL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E90C1C0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINRESBARVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1E90C2A0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINRESBARVIEWMODEL_GET_SHOWITEMDETAILCOMMAND_OFFSET UNITYSDK_OFFSET(0x1E90C3C0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINRESBARVIEWMODEL_REFRESH_OFFSET UNITYSDK_OFFSET(0x1E90C680)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINRESBARVIEWMODEL__ONCOINPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E90C8F0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINRESBARVIEWMODEL__SHOWITEMDETAIL_OFFSET UNITYSDK_OFFSET(0x1E90CCC0)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftCoinResBarViewModel_TypeDefinitionIndex = 82194;

	class MechCraftCoinResBarViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* _Coin; // 0x18
		::Sofa::Core::SimpleCommand* _ShowItemDetailCommand; // 0x20
		::System::Void _ctor(::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINRESBARVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINRESBARVIEWMODEL_GET_COUNT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINRESBARVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_ShowItemDetailCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINRESBARVIEWMODEL_GET_SHOWITEMDETAILCOMMAND_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINRESBARVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINRESBARVIEWMODEL_REFRESH_OFFSET))(this);
		}

		::System::Void _OnCoinPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINRESBARVIEWMODEL__ONCOINPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowItemDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINRESBARVIEWMODEL__SHOWITEMDETAIL_OFFSET))(this);
		}

	};
}
