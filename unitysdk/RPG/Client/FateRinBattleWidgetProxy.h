#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDDJMLCHDIK;

#define RPG_CLIENT_FATERINBATTLEWIDGETPROXY_CLOSEBATTLEWIDGET_OFFSET UNITYSDK_OFFSET(0xD951BF0)
#define RPG_CLIENT_FATERINBATTLEWIDGETPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0xD951B20)
#define RPG_CLIENT_FATERINBATTLEWIDGETPROXY_ONHUDACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0xD951C50)
#define RPG_CLIENT_FATERINBATTLEWIDGETPROXY_OPENBATTLEWIDGET_OFFSET UNITYSDK_OFFSET(0xD951B30)

namespace RPG::Client
{
	inline static constexpr unsigned int FateRinBattleWidgetProxy_TypeDefinitionIndex = 74278;

	class FateRinBattleWidgetProxy : public ::System::Object
	{
	public:
		::MDDJMLCHDIK* _BattleWidgetPage; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINBATTLEWIDGETPROXY_CTOR_OFFSET))(this);
		}

		::System::Void OpenBattleWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINBATTLEWIDGETPROXY_OPENBATTLEWIDGET_OFFSET))(this);
		}

		::System::Void CloseBattleWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINBATTLEWIDGETPROXY_CLOSEBATTLEWIDGET_OFFSET))(this);
		}

		::System::Void OnHudActiveChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERINBATTLEWIDGETPROXY_ONHUDACTIVECHANGE_OFFSET))(this, a1);
		}

	};
}
