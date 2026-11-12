#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftDiyEditItemViewModelBase.h"
class HEFLLOIJAOF;

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEFFECTITEMVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xE10B800)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiyMechatronEffectItemViewModel_TypeDefinitionIndex = 82382;

	class MechCraftDiyMechatronEffectItemViewModel : public ::RPG::Client::MechCraft::ViewModel::MechCraftDiyEditItemViewModelBase
	{
	public:
		::System::Void _ctor(::HEFLLOIJAOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEFLLOIJAOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEFFECTITEMVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

	};
}
