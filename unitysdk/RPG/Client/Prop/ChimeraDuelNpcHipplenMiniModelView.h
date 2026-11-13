#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelNpcModelView.h"

#define RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C001F80)
#define RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C001F60)
#define RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C001EB0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelNpcHipplenMiniModelView_TypeDefinitionIndex = 81069;

	class ChimeraDuelNpcHipplenMiniModelView : public ::RPG::Client::Prop::ChimeraDuelNpcModelView
	{
	public:
		::System::Boolean _IsLeftSide; // 0x48
		static ::System::Int32* StaticGet_HBDKFNHJLAN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "ChimeraDuelNpcHipplenMiniModelView")->GetStaticField(0x12A40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW_CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW_ONENABLE_OFFSET))(this);
		}

	};
}
