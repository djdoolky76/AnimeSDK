#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class EvolveBuildCollectionGear; }
namespace RPG::Client { class EvolveBuildCollectionGearDisplayData; }
namespace RPG::Client { class EvolveBuildDamageTagWithConnect; }
namespace RPG::GameCore { class ActivityEvolveBuildGearCollectionRow; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_CREATEFROMCOLLECTIONGEAR_OFFSET UNITYSDK_OFFSET(0x1DB43F00)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1DB43E60)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB43EF0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GETALLTAGS_OFFSET UNITYSDK_OFFSET(0x1DB44170)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GETTAGSWITHDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1DB443E0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ELEMENTS_OFFSET UNITYSDK_OFFSET(0x1DB446C0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_GEARTYPE_OFFSET UNITYSDK_OFFSET(0x1DB44620)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1DB44C40)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DB44B00)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ISBROADCASTFORGE_OFFSET UNITYSDK_OFFSET(0x1DB44E30)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0x1DB44DF0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1DB44E10)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1DB44EA0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_MAZEBUFF_OFFSET UNITYSDK_OFFSET(0x1DB44CE0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DB44B20)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x1DB44A60)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_SHOWCONNECTTAG_OFFSET UNITYSDK_OFFSET(0x1DB44EC0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_TAGIDS_OFFSET UNITYSDK_OFFSET(0x1DB449C0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_UNLOCKQUEST_OFFSET UNITYSDK_OFFSET(0x1DB44D50)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1DB44BE0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SETCOLLECTED_OFFSET UNITYSDK_OFFSET(0x1DB440D0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SETUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1DB44120)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1DB44B10)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0x1DB44E00)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1DB44E20)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1DB44EB0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_SHOWCONNECTTAG_OFFSET UNITYSDK_OFFSET(0x1DB44ED0)
#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA__GETALLTAGS_OFFSET UNITYSDK_OFFSET(0x1DB441D0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildCollectionGearDisplayData_TypeDefinitionIndex = 65230;

	class EvolveBuildCollectionGearDisplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>* _TagsWithDamageType; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>* _Tags; // 0x18
		::System::UInt32 _Level_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x24
		::System::Boolean _IsCollected_k__BackingField; // 0x28
		::System::Boolean _IsUnlocked_k__BackingField; // 0x29
		::System::Boolean _ShowConnectTag_k__BackingField; // 0x2A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildCollectionGearDisplayData* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::EvolveBuildCollectionGearDisplayData*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::EvolveBuildCollectionGearDisplayData* CreateFromCollectionGear(::RPG::Client::EvolveBuildCollectionGear* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::EvolveBuildCollectionGearDisplayData*(*)(::RPG::Client::EvolveBuildCollectionGear*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_CREATEFROMCOLLECTIONGEAR_OFFSET))(a1, a2, a3);
		}

		::System::Void SetCollected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SETCOLLECTED_OFFSET))(this, a1);
		}

		::System::Void SetUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SETUNLOCKED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>* GetAllTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GETALLTAGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>* GetTagsWithDamageType()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GETTAGSWITHDAMAGETYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>* _GetAllTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildDamageTagWithConnect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA__GETALLTAGS_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::EvolveGearType get_GearType()
		{
			return ((::RPG::GameCore::EvolveGearType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_GEARTYPE_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_SEASON_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_Elements()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ELEMENTS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TagIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_TAGIDS_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get_MazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_MAZEBUFF_OFFSET))(this);
		}

		::System::UInt32 get_UnlockQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_UNLOCKQUEST_OFFSET))(this);
		}

		::System::Boolean get_IsCollected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ISCOLLECTED_OFFSET))(this);
		}

		::System::Void set_IsCollected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_ISCOLLECTED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBroadcastForge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_ISBROADCASTFORGE_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowConnectTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET_SHOWCONNECTTAG_OFFSET))(this);
		}

		::System::Void set_ShowConnectTag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_SET_SHOWCONNECTTAG_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityEvolveBuildGearCollectionRow* get__Row()
		{
			return ((::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONGEARDISPLAYDATA_GET__ROW_OFFSET))(this);
		}

	};
}
