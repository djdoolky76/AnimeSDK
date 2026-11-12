#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTDRESSPREVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB8690)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTDRESSPREVIEW_GET_ISCRAFT_OFFSET UNITYSDK_OFFSET(0xDAB86C0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTDRESSPREVIEW_GET_PREVIEWITEMDATA_OFFSET UNITYSDK_OFFSET(0xDAB86B0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTDRESSPREVIEW_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xDAB86A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationLaughPointDressPreview_TypeDefinitionIndex = 67199;

	class GridFightElationLaughPointDressPreview : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipItemData* _PreviewItemData_k__BackingField; // 0x10
		::System::Int32 _SlotIndex_k__BackingField; // 0x18
		::System::Boolean _IsCraft_k__BackingField; // 0x1C
		::System::Void _ctor(::System::Int32 a1, ::RPG::Client::GridFightEquipItemData* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::GridFightEquipItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTDRESSPREVIEW_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTDRESSPREVIEW_GET_SLOTINDEX_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* get_PreviewItemData()
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTDRESSPREVIEW_GET_PREVIEWITEMDATA_OFFSET))(this);
		}

		::System::Boolean get_IsCraft()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTDRESSPREVIEW_GET_ISCRAFT_OFFSET))(this);
		}

	};
}
