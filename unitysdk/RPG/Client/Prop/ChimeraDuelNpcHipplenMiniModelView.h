#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelNpcModelView.h"

#define RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC65F90)
#define RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDC65F70)
#define RPG_CLIENT_PROP_CHIMERADUELNPCHIPPLENMINIMODELVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDC65EC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelNpcHipplenMiniModelView_TypeDefinitionIndex = 78334;

	class ChimeraDuelNpcHipplenMiniModelView : public ::RPG::Client::Prop::ChimeraDuelNpcModelView
	{
	public:
		::System::Boolean _IsLeftSide; // 0x48
		static ::System::Int32* StaticGet_HBDKFNHJLAN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "ChimeraDuelNpcHipplenMiniModelView")->GetStaticField(0xBCC0);
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
