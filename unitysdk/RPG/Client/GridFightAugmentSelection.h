#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightProtoPendingAction.h"
class CHCHAJIANIM;
class IHGANLCNHBD;
class IPFFLNPMCEG;
class OEJKAOKHPPL;
namespace RPG::Client { class GridFightAugmentSelectItem; }
namespace RPG::Client { class GridFightPetPalConfig; }
namespace RPG::Client { class GridFightPetPalEffectConfig; }
namespace RPG::Client { class LuaUIController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_CTOR_1_OFFSET UNITYSDK_OFFSET(0xDA67DA0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDA67D10)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GETACTIONID_OFFSET UNITYSDK_OFFSET(0xDA67CB0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GETBACKTIPS_OFFSET UNITYSDK_OFFSET(0xDA67B60)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GETMEMENTO_OFFSET UNITYSDK_OFFSET(0xDA68350)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xDA67CF0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_AFFECTEDPETPALCONFIG_OFFSET UNITYSDK_OFFSET(0xDA68100)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_AFFECTEDPETPALEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xDA68120)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_CANUPGRADEQUALITY_OFFSET UNITYSDK_OFFSET(0xDA68140)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xDA67C30)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_SELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xDA67B10)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_ONPAUSE_OFFSET UNITYSDK_OFFSET(0xDA686A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_ONRESUME_OFFSET UNITYSDK_OFFSET(0xDA68710)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_REROLL_OFFSET UNITYSDK_OFFSET(0xDA68510)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SELECT_OFFSET UNITYSDK_OFFSET(0xDA68390)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xDA67D00)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SET_AFFECTEDPETPALCONFIG_OFFSET UNITYSDK_OFFSET(0xDA68110)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SET_AFFECTEDPETPALEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xDA68130)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SET_CANUPGRADEQUALITY_OFFSET UNITYSDK_OFFSET(0xDA68150)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xDA68160)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__MAKESELECTION_OFFSET UNITYSDK_OFFSET(0xDA688A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__ONFINISH_OFFSET UNITYSDK_OFFSET(0xDA68810)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__ONSTART_OFFSET UNITYSDK_OFFSET(0xDA685A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__REFRESHAFFECTEDPETPAL_OFFSET UNITYSDK_OFFSET(0xDA67E70)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__UPDATE_B__25_0_OFFSET UNITYSDK_OFFSET(0xDA689E0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION___CTOR_B__24_0_OFFSET UNITYSDK_OFFSET(0xDA68930)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentSelection_TypeDefinitionIndex = 65832;

	class GridFightAugmentSelection : public ::RPG::Client::GridFightProtoPendingAction
	{
	public:
		::RPG::Client::LuaUIController* _HandleUI; // 0x20
		::System::Object* _Memento; // 0x28
		::RPG::Client::GridFightPetPalConfig* _AffectedPetPalConfig_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugmentSelectItem*>* _Selections; // 0x38
		::RPG::Client::GridFightPetPalEffectConfig* _AffectedPetPalEffectConfig_k__BackingField; // 0x40
		::System::Boolean _CanUpgradeQuality_k__BackingField; // 0x48
		::System::Byte _padding0[0x3];
		::System::Int32 PendingSelectID; // 0x4C
		::System::UInt32 _ActionID_k__BackingField; // 0x50
		::System::Void _ctor(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::IPFFLNPMCEG* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::IPFFLNPMCEG*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_SelectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_SELECTIONCOUNT_OFFSET))(this);
		}

		::System::String* GetBackTips()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GETBACKTIPS_OFFSET))(this);
		}

		::RPG::Client::GridFightAugmentSelectItem* get_Item(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightAugmentSelectItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_ITEM_OFFSET))(this, a1);
		}

		::System::UInt32 GetActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GETACTIONID_OFFSET))(this);
		}

		::System::UInt32 get_ActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SET_ACTIONID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPetPalConfig* get_AffectedPetPalConfig()
		{
			return ((::RPG::Client::GridFightPetPalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_AFFECTEDPETPALCONFIG_OFFSET))(this);
		}

		::System::Void set_AffectedPetPalConfig(::RPG::Client::GridFightPetPalConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPetPalConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SET_AFFECTEDPETPALCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPetPalEffectConfig* get_AffectedPetPalEffectConfig()
		{
			return ((::RPG::Client::GridFightPetPalEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_AFFECTEDPETPALEFFECTCONFIG_OFFSET))(this);
		}

		::System::Void set_AffectedPetPalEffectConfig(::RPG::Client::GridFightPetPalEffectConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPetPalEffectConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SET_AFFECTEDPETPALEFFECTCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_CanUpgradeQuality()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_CANUPGRADEQUALITY_OFFSET))(this);
		}

		::System::Void set_CanUpgradeQuality(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SET_CANUPGRADEQUALITY_OFFSET))(this, a1);
		}

		::System::Void Update(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Object* GetMemento()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GETMEMENTO_OFFSET))(this);
		}

		::System::Void Select(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SELECT_OFFSET))(this, a1);
		}

		::System::Void Reroll(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_REROLL_OFFSET))(this, a1);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__ONSTART_OFFSET))(this);
		}

		::System::Void OnPause(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_ONPAUSE_OFFSET))(this, a1);
		}

		::System::Void OnResume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_ONRESUME_OFFSET))(this);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__ONFINISH_OFFSET))(this);
		}

		::System::Void _RefreshAffectedPetPal(::OEJKAOKHPPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEJKAOKHPPL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__REFRESHAFFECTEDPETPAL_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightAugmentSelectItem* _MakeSelection(::IHGANLCNHBD* a1)
		{
			return ((::RPG::Client::GridFightAugmentSelectItem*(*)(::PVOID, ::IHGANLCNHBD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__MAKESELECTION_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightAugmentSelectItem* __ctor_b__24_0(::IHGANLCNHBD* a1)
		{
			return ((::RPG::Client::GridFightAugmentSelectItem*(*)(::PVOID, ::IHGANLCNHBD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION___CTOR_B__24_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightAugmentSelectItem* _Update_b__25_0(::IHGANLCNHBD* a1)
		{
			return ((::RPG::Client::GridFightAugmentSelectItem*(*)(::PVOID, ::IHGANLCNHBD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__UPDATE_B__25_0_OFFSET))(this, a1);
		}

	};
}
