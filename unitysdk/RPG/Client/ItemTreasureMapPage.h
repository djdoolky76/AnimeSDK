#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class ItemCureInfoDataRow; }
namespace System { class String; }

#define RPG_CLIENT_ITEMTREASUREMAPPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE1F50)
#define RPG_CLIENT_ITEMTREASUREMAPPAGE_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1CEE2490)
#define RPG_CLIENT_ITEMTREASUREMAPPAGE_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1CEE2500)
#define RPG_CLIENT_ITEMTREASUREMAPPAGE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1CEE23D0)
#define RPG_CLIENT_ITEMTREASUREMAPPAGE_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1CEE2420)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemTreasureMapPage_TypeDefinitionIndex = 67676;

	class ItemTreasureMapPage : public ::System::Object
	{
	public:
		::RPG::GameCore::ItemCureInfoDataRow* _Row; // 0x10
		::System::Void _ctor(::RPG::GameCore::ItemCureInfoDataRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemCureInfoDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMTREASUREMAPPAGE_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMTREASUREMAPPAGE_GET_INDEX_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMTREASUREMAPPAGE_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMTREASUREMAPPAGE_GET_DESC_OFFSET))(this);
		}

		::System::String* get_Image()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMTREASUREMAPPAGE_GET_IMAGE_OFFSET))(this);
		}

	};
}
