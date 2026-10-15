#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"
class CJLEJIGIKOF;
class GEIBJKJDOHO;
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GRIDFIGHTELATIONTEMPLATESELECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x15B6F880)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION_GET_EQUIPCONFIGS_OFFSET UNITYSDK_OFFSET(0x15B6FC30)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION_SELECT_OFFSET UNITYSDK_OFFSET(0x15B6FA40)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0x15B6F830)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION__GETTEMPLATEFIRSTEQUIP_OFFSET UNITYSDK_OFFSET(0x15B6F950)

inline static constexpr unsigned int GridFightElationTemplateSelectAction_TypeDefinitionIndex = 47189;

	class GridFightElationTemplateSelectAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* _EquipConfigs; // 0x18
		::System::Collections::Generic::IList_1<::System::UInt32>* _TemplateIDs; // 0x20
		::System::UInt32 _TraitID; // 0x28
		::System::UInt32 _TraitEffectID; // 0x2C
		::System::Void _ctor(::GEIBJKJDOHO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::GEIBJKJDOHO*, ::System::UInt32))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SyncHandleRsp(::CJLEJIGIKOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLEJIGIKOF*))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* _GetTemplateFirstEquip(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION__GETTEMPLATEFIRSTEQUIP_OFFSET))(this, a1);
		}

		::System::Void Select(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION_SELECT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* get_EquipConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION_GET_EQUIPCONFIGS_OFFSET))(this);
		}

	};
