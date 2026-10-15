#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJDLENJJBHJ;
class LALKBPJANIH;
class NDPFOOJIAIJ;
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PDGHJIAPLGL_CTOR_OFFSET UNITYSDK_OFFSET(0xC0123D0)
#define PDGHJIAPLGL_DGJECJONILC_OFFSET UNITYSDK_OFFSET(0xC012F70)
#define PDGHJIAPLGL_GAHKMKLENEG_OFFSET UNITYSDK_OFFSET(0xC012980)
#define PDGHJIAPLGL_KMABPJFINPG_OFFSET UNITYSDK_OFFSET(0xC0123E0)
#define PDGHJIAPLGL_KPOADMHPMGB_OFFSET UNITYSDK_OFFSET(0xC0129D0)

	class PDGHJIAPLGL : public ::System::Object
	{
	public:
		::NDPFOOJIAIJ* BABBJILOOAL; // 0x10
		::System::Void _ctor(::NDPFOOJIAIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + PDGHJIAPLGL_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>* KMABPJFINPG(::System::Collections::Generic::IList_1<::LALKBPJANIH*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::LALKBPJANIH*>*))((::PBYTE)hIl2Cpp + PDGHJIAPLGL_KMABPJFINPG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* KPOADMHPMGB(::System::Collections::Generic::IList_1<::IJDLENJJBHJ*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::IJDLENJJBHJ*>*))((::PBYTE)hIl2Cpp + PDGHJIAPLGL_KPOADMHPMGB_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableItemData* GAHKMKLENEG(::LALKBPJANIH* a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::LALKBPJANIH*))((::PBYTE)hIl2Cpp + PDGHJIAPLGL_GAHKMKLENEG_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* DGJECJONILC(::IJDLENJJBHJ* a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::IJDLENJJBHJ*))((::PBYTE)hIl2Cpp + PDGHJIAPLGL_DGJECJONILC_OFFSET))(this, a1);
		}

	};
