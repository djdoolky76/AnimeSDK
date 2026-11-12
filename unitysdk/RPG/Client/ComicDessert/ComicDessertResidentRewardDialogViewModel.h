#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTRESIDENTREWARDDIALOGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD50B0C0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTRESIDENTREWARDDIALOGVIEWMODEL_GET_QUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xD50B100)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTRESIDENTREWARDDIALOGVIEWMODEL_SET_QUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xD50B110)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertResidentRewardDialogViewModel_TypeDefinitionIndex = 77142;

	class ComicDessertResidentRewardDialogViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _QuestIDList_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTRESIDENTREWARDDIALOGVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_QuestIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTRESIDENTREWARDDIALOGVIEWMODEL_GET_QUESTIDLIST_OFFSET))(this);
		}

		::System::Void set_QuestIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTRESIDENTREWARDDIALOGVIEWMODEL_SET_QUESTIDLIST_OFFSET))(this, a1);
		}

	};
}
