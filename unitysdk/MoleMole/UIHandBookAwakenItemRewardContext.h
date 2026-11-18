#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"

namespace System { class String; }

#define MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_FROMQUESTID_OFFSET UNITYSDK_OFFSET(0x199D3A80)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x199D3E50)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_GET_ITEMNUM_OFFSET UNITYSDK_OFFSET(0x199D3FB0)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x199D3D10)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_GET_REWARDPREVIEW_OFFSET UNITYSDK_OFFSET(0x199D3BA0)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x199D3B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookAwakenItemRewardContext_TypeDefinitionIndex = 76688;

	class UIHandBookAwakenItemRewardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 QuestID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT__CTOR_OFFSET))(this);
		}

		static ::MoleMole::UIHandBookAwakenItemRewardContext* FromQuestID(::System::Int32 questID)
		{
			return ((::MoleMole::UIHandBookAwakenItemRewardContext*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_FROMQUESTID_OFFSET))(questID);
		}

		::DEDDPKGLKHI_LODLFMBCLAH get_RewardPreview()
		{
			return ((::DEDDPKGLKHI_LODLFMBCLAH(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_GET_REWARDPREVIEW_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_ItemID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_GET_ITEMID_OFFSET))(this);
		}

		::System::Int32 get_ItemNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMREWARDCONTEXT_GET_ITEMNUM_OFFSET))(this);
		}
	};
}
