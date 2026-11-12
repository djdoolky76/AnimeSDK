#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IAKMFLMFALK_CTOR_OFFSET UNITYSDK_OFFSET(0x16DC17D0)
#define IAKMFLMFALK_GET_BASESTATMAP_OFFSET UNITYSDK_OFFSET(0x16DC1770)
#define IAKMFLMFALK_GET_CARID_OFFSET UNITYSDK_OFFSET(0x16DC1710)
#define IAKMFLMFALK_GET_CARNUMBER_OFFSET UNITYSDK_OFFSET(0x16DC1730)
#define IAKMFLMFALK_GET_INITHEXCOLOR_OFFSET UNITYSDK_OFFSET(0x16DC17B0)
#define IAKMFLMFALK_GET_PARTIDLIST_OFFSET UNITYSDK_OFFSET(0x16DC1750)
#define IAKMFLMFALK_GET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x16DC1790)
#define IAKMFLMFALK_SET_BASESTATMAP_OFFSET UNITYSDK_OFFSET(0x16DC1780)
#define IAKMFLMFALK_SET_CARID_OFFSET UNITYSDK_OFFSET(0x16DC1720)
#define IAKMFLMFALK_SET_CARNUMBER_OFFSET UNITYSDK_OFFSET(0x16DC1740)
#define IAKMFLMFALK_SET_INITHEXCOLOR_OFFSET UNITYSDK_OFFSET(0x16DC17C0)
#define IAKMFLMFALK_SET_PARTIDLIST_OFFSET UNITYSDK_OFFSET(0x16DC1760)
#define IAKMFLMFALK_SET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x16DC17A0)

inline static constexpr unsigned int IAKMFLMFALK_TypeDefinitionIndex = 84470;

	class IAKMFLMFALK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _PartIDList_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* _BaseStatMap_k__BackingField; // 0x18
		::System::String* _InitHexColor_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _SkillIDList_k__BackingField; // 0x28
		::System::UInt32 _CarNumber_k__BackingField; // 0x30
		::System::UInt32 _CarID_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKMFLMFALK_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKMFLMFALK_GET_CARID_OFFSET))(this);
		}

		::System::Void set_CarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IAKMFLMFALK_SET_CARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CarNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKMFLMFALK_GET_CARNUMBER_OFFSET))(this);
		}

		::System::Void set_CarNumber(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IAKMFLMFALK_SET_CARNUMBER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PartIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKMFLMFALK_GET_PARTIDLIST_OFFSET))(this);
		}

		::System::Void set_PartIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IAKMFLMFALK_SET_PARTIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* get_BaseStatMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKMFLMFALK_GET_BASESTATMAP_OFFSET))(this);
		}

		::System::Void set_BaseStatMap(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + IAKMFLMFALK_SET_BASESTATMAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SkillIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKMFLMFALK_GET_SKILLIDLIST_OFFSET))(this);
		}

		::System::Void set_SkillIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IAKMFLMFALK_SET_SKILLIDLIST_OFFSET))(this, a1);
		}

		::System::String* get_InitHexColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKMFLMFALK_GET_INITHEXCOLOR_OFFSET))(this);
		}

		::System::Void set_InitHexColor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IAKMFLMFALK_SET_INITHEXCOLOR_OFFSET))(this, a1);
		}

	};
