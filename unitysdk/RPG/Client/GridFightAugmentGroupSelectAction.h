#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightProtoPendingAction.h"
class CHCHAJIANIM;
class OEGLNPAMFNH;
class OEJKAOKHPPL;
namespace RPG::Client { class GridFightAugmentGroupOption; }
namespace RPG::Client { class GridFightPetPalConfig; }
namespace RPG::Client { class GridFightPetPalEffectConfig; }
namespace RPG::Client { class LuaUIController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_CTOR_1_OFFSET UNITYSDK_OFFSET(0xDA64AB0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDA64A30)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_GETACTIONID_OFFSET UNITYSDK_OFFSET(0xDA64690)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_GETBACKTIPS_OFFSET UNITYSDK_OFFSET(0xDA645C0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_GETMEMENTO_OFFSET UNITYSDK_OFFSET(0xDA64E40)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xDA646D0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_GET_AFFECTEDPETPALCONFIG_OFFSET UNITYSDK_OFFSET(0xDA646F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_GET_AFFECTEDPETPALEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0xDA64850)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xDA649B0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_GET_OPTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xDA64570)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_ONPAUSE_OFFSET UNITYSDK_OFFSET(0xDA65190)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_ONRESUME_OFFSET UNITYSDK_OFFSET(0xDA65200)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_REROLL_OFFSET UNITYSDK_OFFSET(0xDA65000)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_SELECT_OFFSET UNITYSDK_OFFSET(0xDA64E80)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xDA646E0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xDA64C10)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION__ONFINISH_OFFSET UNITYSDK_OFFSET(0xDA65300)
#define RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION__ONSTART_OFFSET UNITYSDK_OFFSET(0xDA65090)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentGroupSelectAction_TypeDefinitionIndex = 66701;

	class GridFightAugmentGroupSelectAction : public ::RPG::Client::GridFightProtoPendingAction
	{
	public:
		::RPG::Client::LuaUIController* _HandleUI; // 0x20
		::System::Object* _Memento; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugmentGroupOption*>* _Options; // 0x30
		::OEJKAOKHPPL* _Reason; // 0x38
		::System::Int32 PendingSelectOptionIndex; // 0x40
		::System::UInt32 _ActionID_k__BackingField; // 0x44
		::System::Void _ctor(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::OEGLNPAMFNH* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::OEGLNPAMFNH*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_OptionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_GET_OPTIONCOUNT_OFFSET))(this);
		}

		::System::String* GetBackTips()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_GETBACKTIPS_OFFSET))(this);
		}

		::System::UInt32 GetActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_GETACTIONID_OFFSET))(this);
		}

		::System::UInt32 get_ActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_SET_ACTIONID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPetPalConfig* get_AffectedPetPalConfig()
		{
			return ((::RPG::Client::GridFightPetPalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_GET_AFFECTEDPETPALCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightPetPalEffectConfig* get_AffectedPetPalEffectConfig()
		{
			return ((::RPG::Client::GridFightPetPalEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_GET_AFFECTEDPETPALEFFECTCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightAugmentGroupOption* get_Item(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightAugmentGroupOption*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void Update(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Object* GetMemento()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_GETMEMENTO_OFFSET))(this);
		}

		::System::Void Select(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_SELECT_OFFSET))(this, a1);
		}

		::System::Void Reroll(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_REROLL_OFFSET))(this, a1);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION__ONSTART_OFFSET))(this);
		}

		::System::Void OnPause(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_ONPAUSE_OFFSET))(this, a1);
		}

		::System::Void OnResume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION_ONRESUME_OFFSET))(this);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTGROUPSELECTACTION__ONFINISH_OFFSET))(this);
		}

	};
}
