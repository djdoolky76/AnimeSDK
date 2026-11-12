#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
class MGBHKCMHDOK;
namespace RPG::Client { class GridFightClaraEnhanceAction; }
namespace RPG::Client { class GridFightClaraEnhanceObtainedGroup; }
namespace RPG::Client { class GridFightClaraEnhanceOptionConfig; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDA92B00)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_GETOBTAINEDGROUPS_OFFSET UNITYSDK_OFFSET(0xDA939F0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_GETOBTAINEDNUM_OFFSET UNITYSDK_OFFSET(0xDA93960)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_GET_ACTION_OFFSET UNITYSDK_OFFSET(0xDA94A30)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_GET_ENHANCEIDLIST_OFFSET UNITYSDK_OFFSET(0xDA94810)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_GET_HASULTRA_OFFSET UNITYSDK_OFFSET(0xDA94830)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_GET_OPTIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xDA947C0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_GET__OPTIONIDLIST_OFFSET UNITYSDK_OFFSET(0xDA94710)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xDA92F00)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_REGISTERACTION_OFFSET UNITYSDK_OFFSET(0xDA93910)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_SELECTENHANCE_OFFSET UNITYSDK_OFFSET(0xDA938B0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_SET_ACTION_OFFSET UNITYSDK_OFFSET(0xDA94A40)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_SET_ENHANCEIDLIST_OFFSET UNITYSDK_OFFSET(0xDA94820)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT__ADDDEFAULTOBTAINEDGROUP_OFFSET UNITYSDK_OFFSET(0xDA93E60)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT__GETCURRENTOPTIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xDA945E0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT__HASOBTAINEDCHANGED_OFFSET UNITYSDK_OFFSET(0xDA93730)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT__INITENHANCECONFIG_OFFSET UNITYSDK_OFFSET(0xDA92C60)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT___GETCURRENTOPTIONCONFIGLIST_B__7_0_OFFSET UNITYSDK_OFFSET(0xDA94A50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightClaraEnhanceEffect_TypeDefinitionIndex = 67205;

	class GridFightClaraEnhanceEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ObtainedNumById; // 0x30
		::RPG::Client::GridFightClaraEnhanceAction* _Action_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _EnhanceIdList_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::GridFightClaraEnhanceOptionConfig*>* _EnhanceConfigList; // 0x48
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnUpdate(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void SelectEnhance(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_SELECTENHANCE_OFFSET))(this, a1);
		}

		::System::Void RegisterAction(::RPG::Client::GridFightClaraEnhanceAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightClaraEnhanceAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_REGISTERACTION_OFFSET))(this, a1);
		}

		::System::UInt32 GetObtainedNum(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_GETOBTAINEDNUM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightClaraEnhanceObtainedGroup*>* GetObtainedGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightClaraEnhanceObtainedGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_GETOBTAINEDGROUPS_OFFSET))(this);
		}

		::System::Void _AddDefaultObtainedGroup(::System::Collections::Generic::List_1<::RPG::Client::GridFightClaraEnhanceObtainedGroup*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightClaraEnhanceObtainedGroup*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT__ADDDEFAULTOBTAINEDGROUP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightClaraEnhanceOptionConfig*>* _GetCurrentOptionConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightClaraEnhanceOptionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT__GETCURRENTOPTIONCONFIGLIST_OFFSET))(this);
		}

		::System::Boolean _HasObtainedChanged(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT__HASOBTAINEDCHANGED_OFFSET))(this, a1);
		}

		::System::Void _InitEnhanceConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT__INITENHANCECONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightClaraEnhanceOptionConfig*>* get_OptionConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightClaraEnhanceOptionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_GET_OPTIONCONFIGLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EnhanceIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_GET_ENHANCEIDLIST_OFFSET))(this);
		}

		::System::Void set_EnhanceIdList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_SET_ENHANCEIDLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_HasUltra()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_GET_HASULTRA_OFFSET))(this);
		}

		::RPG::Client::GridFightClaraEnhanceAction* get_Action()
		{
			return ((::RPG::Client::GridFightClaraEnhanceAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::RPG::Client::GridFightClaraEnhanceAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightClaraEnhanceAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_SET_ACTION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get__OptionIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT_GET__OPTIONIDLIST_OFFSET))(this);
		}

		::RPG::Client::GridFightClaraEnhanceOptionConfig* __GetCurrentOptionConfigList_b__7_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightClaraEnhanceOptionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEEFFECT___GETCURRENTOPTIONCONFIGLIST_B__7_0_OFFSET))(this, a1);
		}

	};
}
