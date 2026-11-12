#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournPersonaRoomCardPreset; }
namespace RPG::Client { class RogueTournPersonaPresetRoomCardData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_CTOR_OFFSET UNITYSDK_OFFSET(0xEA86BF0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_DESC_OFFSET UNITYSDK_OFFSET(0xEA9DFF0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_EXPGAINDESC_OFFSET UNITYSDK_OFFSET(0xEA9E010)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHBIGPARASITE_OFFSET UNITYSDK_OFFSET(0xEA9DF70)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHBIG_OFFSET UNITYSDK_OFFSET(0xEA9DF50)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHSMALLPARASITE_OFFSET UNITYSDK_OFFSET(0xEA9DFB0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHSMALL_OFFSET UNITYSDK_OFFSET(0xEA9DF90)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_INITPRESETROOMCARDDATAS_OFFSET UNITYSDK_OFFSET(0xEA9E170)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ISDUMMY_OFFSET UNITYSDK_OFFSET(0xEA9DF30)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xEA9DFD0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_PASSIVEDESC_OFFSET UNITYSDK_OFFSET(0xEA9E0C0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_STYLEID_OFFSET UNITYSDK_OFFSET(0xEA9DF10)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_DESC_OFFSET UNITYSDK_OFFSET(0xEA9E000)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHBIGPARASITE_OFFSET UNITYSDK_OFFSET(0xEA9DF80)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHBIG_OFFSET UNITYSDK_OFFSET(0xEA9DF60)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHSMALLPARASITE_OFFSET UNITYSDK_OFFSET(0xEA9DFC0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHSMALL_OFFSET UNITYSDK_OFFSET(0xEA9DFA0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ISDUMMY_OFFSET UNITYSDK_OFFSET(0xEA9DF40)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xEA9DFE0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_STYLEID_OFFSET UNITYSDK_OFFSET(0xEA9DF20)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE__INITFROMEXCEL_OFFSET UNITYSDK_OFFSET(0xEA86D70)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE__SETISDUMMY_OFFSET UNITYSDK_OFFSET(0xEA9DDA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleDataBase_TypeDefinitionIndex = 69697;

	class RogueTournPersonaStyleDataBase : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaPresetRoomCardData*>* _InitPresetRoomCardDatas; // 0x10
		::System::String* _IconPathSmallParasite_k__BackingField; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParams; // 0x20
		::System::String* _IconPathBig_k__BackingField; // 0x28
		::System::String* _IconPathBigParasite_k__BackingField; // 0x30
		::System::String* _IconPathSmall_k__BackingField; // 0x38
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueTournPersonaPresetRoomCardData*>* _InitPresetRoomCardDatas_ReadOnly; // 0x40
		::RPG::Client::TextID _ExpGainDescTextID; // 0x48
		::RPG::Client::TextID _Name_k__BackingField; // 0x58
		::RPG::Client::TextID _PassiveDescTextID; // 0x68
		::RPG::Client::TextID _Desc_k__BackingField; // 0x78
		::System::UInt32 _StyleID_k__BackingField; // 0x88
		::System::Boolean _IsDummy_k__BackingField; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_CTOR_OFFSET))(this);
		}

		::System::Boolean _InitFromExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE__INITFROMEXCEL_OFFSET))(this);
		}

		::System::Void _SetIsDummy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE__SETISDUMMY_OFFSET))(this);
		}

		::System::UInt32 get_StyleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_STYLEID_OFFSET))(this);
		}

		::System::Void set_StyleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_STYLEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDummy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ISDUMMY_OFFSET))(this);
		}

		::System::Void set_IsDummy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ISDUMMY_OFFSET))(this, a1);
		}

		::System::String* get_IconPathBig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHBIG_OFFSET))(this);
		}

		::System::Void set_IconPathBig(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHBIG_OFFSET))(this, a1);
		}

		::System::String* get_IconPathBigParasite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHBIGPARASITE_OFFSET))(this);
		}

		::System::Void set_IconPathBigParasite(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHBIGPARASITE_OFFSET))(this, a1);
		}

		::System::String* get_IconPathSmall()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHSMALL_OFFSET))(this);
		}

		::System::Void set_IconPathSmall(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHSMALL_OFFSET))(this, a1);
		}

		::System::String* get_IconPathSmallParasite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_ICONPATHSMALLPARASITE_OFFSET))(this);
		}

		::System::Void set_IconPathSmallParasite(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_ICONPATHSMALLPARASITE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_SET_DESC_OFFSET))(this, a1);
		}

		::System::String* get_ExpGainDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_EXPGAINDESC_OFFSET))(this);
		}

		::System::String* get_PassiveDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_PASSIVEDESC_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardPreset*>* get_InitPresetRoomCardDatas()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardPreset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATABASE_GET_INITPRESETROOMCARDDATAS_OFFSET))(this);
		}

	};
}
