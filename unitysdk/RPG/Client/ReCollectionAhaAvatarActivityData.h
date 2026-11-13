#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"
namespace RPG::Client { class ActivityReCollectionItemData; }
namespace RPG::Client { class ActivityReCollectionModule; }
namespace RPG::Client { class ChooseDeliveryGroup; }
namespace RPG::Client { class ChooseDeliveryModule; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D06BBD0)
#define RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_GETOPTIONALAVATARINFOLIST_OFFSET UNITYSDK_OFFSET(0x1D06BE90)
#define RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_GET_CHOOSEDELIVERYID_OFFSET UNITYSDK_OFFSET(0x1D06C9C0)
#define RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x1D06BE00)
#define RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_GET__CHOOSEDELIVERYID_OFFSET UNITYSDK_OFFSET(0x1D06C370)
#define RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_GET__CHOOSEDELIVERYMODULE_OFFSET UNITYSDK_OFFSET(0x1D06C2E0)
#define RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_GET__COLLECTIONITEMDATA_OFFSET UNITYSDK_OFFSET(0x1D06CA60)
#define RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_GET__MODULE_OFFSET UNITYSDK_OFFSET(0x1D06CBB0)
#define RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_ISCHOOSED_OFFSET UNITYSDK_OFFSET(0x1D06BE40)
#define RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D06BDA0)
#define RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1D06BBE0)
#define RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_SENDCHOOSE_OFFSET UNITYSDK_OFFSET(0x1D06C840)
#define RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA__GETPREVIEWREWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0x1D06C3F0)
#define RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA__ISCHOOSED_OFFSET UNITYSDK_OFFSET(0x1D06BC30)

namespace RPG::Client
{
	inline static constexpr unsigned int ReCollectionAhaAvatarActivityData_TypeDefinitionIndex = 63053;

	class ReCollectionAhaAvatarActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::Boolean get_IsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_GET_ISDISPLAY_OFFSET))(this);
		}

		::System::Boolean IsChoosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_ISCHOOSED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetOptionalAvatarInfoList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_GETOPTIONALAVATARINFOLIST_OFFSET))(this);
		}

		::System::Void SendChoose(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_SENDCHOOSE_OFFSET))(this, a1);
		}

		::System::Boolean _IsChoosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA__ISCHOOSED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* _GetPreviewRewardItemList(::RPG::Client::ChooseDeliveryGroup* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::RPG::Client::ChooseDeliveryGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA__GETPREVIEWREWARDITEMLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChooseDeliveryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_GET_CHOOSEDELIVERYID_OFFSET))(this);
		}

		::RPG::Client::ActivityReCollectionItemData* get__CollectionItemData()
		{
			return ((::RPG::Client::ActivityReCollectionItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_GET__COLLECTIONITEMDATA_OFFSET))(this);
		}

		::System::UInt32 get__ChooseDeliveryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_GET__CHOOSEDELIVERYID_OFFSET))(this);
		}

		::RPG::Client::ActivityReCollectionModule* get__Module()
		{
			return ((::RPG::Client::ActivityReCollectionModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_GET__MODULE_OFFSET))(this);
		}

		::RPG::Client::ChooseDeliveryModule* get__ChooseDeliveryModule()
		{
			return ((::RPG::Client::ChooseDeliveryModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_GET__CHOOSEDELIVERYMODULE_OFFSET))(this);
		}

	};
}
