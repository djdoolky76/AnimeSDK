#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCNLPLHOACB;
class GGBEEJNPPOP;
class KCHLIIEPMJG;
class KFGGDNIGKGG;
class NDCLBAKBEIP;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftCraftProgressAttrRadarViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCRAFTPROGRESSATTRRADARVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xD679D40)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCRAFTPROGRESSATTRRADARVIEWMODEL_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xD679D30)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCRAFTPROGRESSATTRRADARVIEWMODEL_FACTORY__CREATE_B__4_0_OFFSET UNITYSDK_OFFSET(0xD67A150)

namespace RPG::Client::MechCraft::ViewModel
{
	class MechCraftCraftProgressAttrRadarViewModel_Factory : public ::System::Object
	{
	public:
		::NDCLBAKBEIP* _AttributeDisplayConfigRepository; // 0x10
		::KCHLIIEPMJG* _ConstantConfigRepository; // 0x18
		::GGBEEJNPPOP* _AttributeTypeCompareService; // 0x20
		::System::Void _ctor(::KCHLIIEPMJG* a1, ::GGBEEJNPPOP* a2, ::NDCLBAKBEIP* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KCHLIIEPMJG*, ::GGBEEJNPPOP*, ::NDCLBAKBEIP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCRAFTPROGRESSATTRRADARVIEWMODEL_FACTORY_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel* Create(::FCNLPLHOACB* a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel*(*)(::PVOID, ::FCNLPLHOACB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCRAFTPROGRESSATTRRADARVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}

		::System::Int32 _Create_b__4_0(::KFGGDNIGKGG* a1, ::KFGGDNIGKGG* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KFGGDNIGKGG*, ::KFGGDNIGKGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCRAFTPROGRESSATTRRADARVIEWMODEL_FACTORY__CREATE_B__4_0_OFFSET))(this, a1, a2);
		}

	};
}
