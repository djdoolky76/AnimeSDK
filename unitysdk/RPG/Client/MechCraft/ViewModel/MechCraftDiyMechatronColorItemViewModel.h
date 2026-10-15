#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftDiyEditItemViewModelBase.h"
class KBDDPBPABDD;
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONCOLORITEMVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD671120)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONCOLORITEMVIEWMODEL_GET_MATERIALPATH_OFFSET UNITYSDK_OFFSET(0xD671110)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiyMechatronColorItemViewModel_TypeDefinitionIndex = 79602;

	class MechCraftDiyMechatronColorItemViewModel : public ::RPG::Client::MechCraft::ViewModel::MechCraftDiyEditItemViewModelBase
	{
	public:
		::System::String* _MaterialPath_k__BackingField; // 0x20
		::System::Void _ctor(::KBDDPBPABDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBDDPBPABDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONCOLORITEMVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_MaterialPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONCOLORITEMVIEWMODEL_GET_MATERIALPATH_OFFSET))(this);
		}

	};
}
