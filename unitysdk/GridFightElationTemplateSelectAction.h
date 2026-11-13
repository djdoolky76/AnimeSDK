#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightProtoPendingAction.h"
class CHCHAJIANIM;
class CJLEJIGIKOF;
class GEIBJKJDOHO;
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaTable; }

#define GRIDFIGHTELATIONTEMPLATESELECTACTION_CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DD07F0)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x17DD0770)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION_GETACTIONID_OFFSET UNITYSDK_OFFSET(0x17DD08F0)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0x17DD1370)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION_GET_EQUIPCONFIGS_OFFSET UNITYSDK_OFFSET(0x17DD1330)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION_SELECT_OFFSET UNITYSDK_OFFSET(0x17DD0BA0)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0x17DD0B50)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x17DD0930)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION__CALLPANELFUNC_OFFSET UNITYSDK_OFFSET(0x17DD0A10)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION__GETTEMPLATEFIRSTEQUIP_OFFSET UNITYSDK_OFFSET(0x17DD1240)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION__ONFINISH_OFFSET UNITYSDK_OFFSET(0x17DD11C0)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION__ONSTART_OFFSET UNITYSDK_OFFSET(0x17DD0D90)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION__SYNC_OFFSET UNITYSDK_OFFSET(0x17DD0800)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION___ONSTART_B__6_0_OFFSET UNITYSDK_OFFSET(0x17DD1380)

inline static constexpr unsigned int GridFightElationTemplateSelectAction_TypeDefinitionIndex = 48217;

	class GridFightElationTemplateSelectAction : public ::RPG::Client::GridFightProtoPendingAction
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* _TemplateIDs; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* _EquipConfigs; // 0x28
		::XLua::LuaTable* _Panel; // 0x30
		::System::UInt32 _ActionID_k__BackingField; // 0x38
		::System::UInt32 _TraitID; // 0x3C
		::System::UInt32 _TraitEffectID; // 0x40
		::System::Void _ctor(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::GEIBJKJDOHO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::GEIBJKJDOHO*, ::System::UInt32))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION_GETACTIONID_OFFSET))(this);
		}

		::System::Void Update(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncHandleRsp(::CJLEJIGIKOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLEJIGIKOF*))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::System::Void Select(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION_SELECT_OFFSET))(this, a1);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION__ONSTART_OFFSET))(this);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION__ONFINISH_OFFSET))(this);
		}

		::System::Void _Sync(::GEIBJKJDOHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEIBJKJDOHO*))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION__SYNC_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* _GetTemplateFirstEquip(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION__GETTEMPLATEFIRSTEQUIP_OFFSET))(this, a1);
		}

		::System::Void _CallPanelFunc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION__CALLPANELFUNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* get_EquipConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION_GET_EQUIPCONFIGS_OFFSET))(this);
		}

		::System::UInt32 get_ActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void __OnStart_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION___ONSTART_B__6_0_OFFSET))(this);
		}

	};
