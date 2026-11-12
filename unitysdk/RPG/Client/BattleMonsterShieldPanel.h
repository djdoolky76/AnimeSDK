#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EAJGJOOFAMF;
class ECDNGOHAPMA;
class EGOIABMAGME;
class HBIPKAEAEJE;
namespace RPG::Client { class IBattleMonsterBehaviorFlagShieldStyle; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD1A9AC0)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xD1A9770)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL_ONMONSTERHUDCONTENTROOTCHANGE_OFFSET UNITYSDK_OFFSET(0xD1A9A30)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL_ONRETURN_OFFSET UNITYSDK_OFFSET(0xD1A98A0)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__CREATESUBPANELINITPARAM_OFFSET UNITYSDK_OFFSET(0xD1A9530)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xD1A9920)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__ONBIND_OFFSET UNITYSDK_OFFSET(0xD1A8F80)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xD1A9960)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xD1A9630)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__ONORDERABLETRANSCHANGED_OFFSET UNITYSDK_OFFSET(0xD1A99C0)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xD1A9860)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__UPDATEENTITY_OFFSET UNITYSDK_OFFSET(0xD1A9720)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleMonsterShieldPanel_TypeDefinitionIndex = 73764;

	class BattleMonsterShieldPanel : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* _Entity; // 0x60
		::EAJGJOOFAMF* _MechanicShieldProxyPanel; // 0x68
		::EAJGJOOFAMF* _SingleBlockProxyPanel; // 0x70
		::HBIPKAEAEJE* _ShieldPanel; // 0x78
		::System::Collections::Generic::List_1<::ECDNGOHAPMA*>* _OrderableTransList; // 0x80
		::EGOIABMAGME* _SuperArmorPanel; // 0x88
		::System::Boolean _IsBossPanel; // 0x90
		// static const ::System::Object TRANFORM_ORDER_MECHANIC_SHIELD; // 0x0
		// static const ::System::Object TRANFORM_ORDER_SINGLE_BLOCK; // 0x0
		// static const ::System::Object TRANFORM_ORDER_SUPER_ARMOR; // 0x0
		// static const ::System::Object TRANFORM_ORDER_SHIELD; // 0x0
		// static const ::System::Object SHIELD_PREFAB_INDEX_BOSS; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSHIELDPANEL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__ONBIND_OFFSET))(this);
		}

		::IGKFNIEJGLM _CreateSubPanelInitParam(::RPG::Client::IBattleMonsterBehaviorFlagShieldStyle* a1)
		{
			return ((::IGKFNIEJGLM(*)(::PVOID, ::RPG::Client::IBattleMonsterBehaviorFlagShieldStyle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__CREATESUBPANELINITPARAM_OFFSET))(this, a1);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSHIELDPANEL_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSHIELDPANEL_ONRETURN_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _UpdateEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__UPDATEENTITY_OFFSET))(this, a1);
		}

		::System::Void _OnOrderableTransChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__ONORDERABLETRANSCHANGED_OFFSET))(this);
		}

		::System::Void OnMonsterHUDContentRootChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERSHIELDPANEL_ONMONSTERHUDCONTENTROOTCHANGE_OFFSET))(this, a1);
		}

	};
}
