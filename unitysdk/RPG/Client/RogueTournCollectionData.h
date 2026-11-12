#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPCEBDCJBOI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class NPAJHGDEIDJ;
namespace RPG::Client { class IRogueTournCollectionExhibitionDisplayableData; }
namespace RPG::GameCore { class RogueTournContentCollectionRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEA47C30)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0xEA480E0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_EFFECTDESC_OFFSET UNITYSDK_OFFSET(0xEA47F00)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_ENTITYRUNTIMEREPLACEARTPREFABID_OFFSET UNITYSDK_OFFSET(0xEA48300)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xEA47D80)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xEA483A0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_LISTICONPATH_OFFSET UNITYSDK_OFFSET(0xEA481C0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_MAPICONPATH_OFFSET UNITYSDK_OFFSET(0xEA48260)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xEA47DC0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xEA47EA0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_ISSAMEITEM_OFFSET UNITYSDK_OFFSET(0xEA47CA0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xEA47C40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournCollectionData_TypeDefinitionIndex = 69514;

	class RogueTournCollectionData : public ::System::Object
	{
	public:
		::System::UInt32 _CollectionID; // 0x10
		::LPCEBDCJBOI _Status; // 0x14
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::NPAJHGDEIDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPAJHGDEIDJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean IsSameItem(::RPG::Client::IRogueTournCollectionExhibitionDisplayableData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournCollectionExhibitionDisplayableData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_ISSAMEITEM_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_EffectDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_EFFECTDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_BgDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_BGDESC_OFFSET))(this);
		}

		::System::String* get_ListIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_LISTICONPATH_OFFSET))(this);
		}

		::System::String* get_MapIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_MAPICONPATH_OFFSET))(this);
		}

		::System::Int32 get_EntityRuntimeReplaceArtPrefabID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_ENTITYRUNTIMEREPLACEARTPREFABID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournContentCollectionRow* get__Row()
		{
			return ((::RPG::GameCore::RogueTournContentCollectionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONDATA_GET__ROW_OFFSET))(this);
		}

	};
}
