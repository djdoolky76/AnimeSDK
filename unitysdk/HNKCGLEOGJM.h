#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLEFGGIHGMI;
class LJFHKAJPFNE;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class Volume; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HNKCGLEOGJM_CTOR_OFFSET UNITYSDK_OFFSET(0x15D9E7C0)
#define HNKCGLEOGJM_GET_FILTERSTREAMINGBLOCK_OFFSET UNITYSDK_OFFSET(0x15D9E7A0)
#define HNKCGLEOGJM_GET_FILTERSTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0x15D9E780)
#define HNKCGLEOGJM_SET_FILTERSTREAMINGBLOCK_OFFSET UNITYSDK_OFFSET(0x15D9E7B0)
#define HNKCGLEOGJM_SET_FILTERSTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0x15D9E790)

inline static constexpr unsigned int HNKCGLEOGJM_TypeDefinitionIndex = 73999;

	class HNKCGLEOGJM : public ::System::Object
	{
	public:
		::LJFHKAJPFNE* EKHCOEPOJDL; // 0x10
		::System::Collections::Generic::HashSet_1<::KLEFGGIHGMI*>* _FilterStreamingBlock_k__BackingField; // 0x18
		::RPG::Client::OpenWorld::Volume* EDHBBJADHHJ; // 0x20
		::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* _FilterStreamingItem_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKCGLEOGJM_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* get_FilterStreamingItem()
		{
			return ((::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKCGLEOGJM_GET_FILTERSTREAMINGITEM_OFFSET))(this);
		}

		::System::Void set_FilterStreamingItem(::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + HNKCGLEOGJM_SET_FILTERSTREAMINGITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::KLEFGGIHGMI*>* get_FilterStreamingBlock()
		{
			return ((::System::Collections::Generic::HashSet_1<::KLEFGGIHGMI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKCGLEOGJM_GET_FILTERSTREAMINGBLOCK_OFFSET))(this);
		}

		::System::Void set_FilterStreamingBlock(::System::Collections::Generic::HashSet_1<::KLEFGGIHGMI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::KLEFGGIHGMI*>*))((::PBYTE)hIl2Cpp + HNKCGLEOGJM_SET_FILTERSTREAMINGBLOCK_OFFSET))(this, a1);
		}

	};
