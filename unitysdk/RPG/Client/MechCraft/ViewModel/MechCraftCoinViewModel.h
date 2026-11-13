#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
class KCHLIIEPMJG;
namespace RPG::Client { class ItemData; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E90CF20)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E90C240)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1E90C2F0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x1E90CDD0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_REFRESH_OFFSET UNITYSDK_OFFSET(0x1E90C6D0)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftCoinViewModel_TypeDefinitionIndex = 82195;

	class MechCraftCoinViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::UInt32 _ItemID; // 0x18
		::System::Void _ctor(::KCHLIIEPMJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCHLIIEPMJG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_ItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_GET_ITEMDATA_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_GET_COUNT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_REFRESH_OFFSET))(this);
		}

	};
}
