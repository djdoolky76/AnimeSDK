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

#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E62A0)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1B1E5F40)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL_ONMONSTERHUDCONTENTROOTCHANGE_OFFSET UNITYSDK_OFFSET(0x1B1E6210)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1B1E6080)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__CREATESUBPANELINITPARAM_OFFSET UNITYSDK_OFFSET(0x1B1E5CF0)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1B1E6100)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B1E5740)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1B1E6140)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B1E5DF0)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__ONORDERABLETRANSCHANGED_OFFSET UNITYSDK_OFFSET(0x1B1E61A0)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B1E6040)
#define RPG_CLIENT_BATTLEMONSTERSHIELDPANEL__UPDATEENTITY_OFFSET UNITYSDK_OFFSET(0x1B1E5EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleMonsterShieldPanel_TypeDefinitionIndex = 73763;

	class BattleMonsterShieldPanel : public ::FMPCODLIOLG
	{
	public:
		::EGOIABMAGME* _SuperArmorPanel; // 0x60
		::HBIPKAEAEJE* _ShieldPanel; // 0x68
		::EAJGJOOFAMF* _SingleBlockProxyPanel; // 0x70
		::EAJGJOOFAMF* _MechanicShieldProxyPanel; // 0x78
		::System::Collections::Generic::List_1<::ECDNGOHAPMA*>* _OrderableTransList; // 0x80
		::RPG::GameCore::GameEntity* _Entity; // 0x88
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
