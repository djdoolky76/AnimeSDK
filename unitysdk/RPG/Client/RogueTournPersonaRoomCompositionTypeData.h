#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournPersonaRoomBgColorType.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HJPKGKGOAFP.h"
namespace RPG::Client { class RogueTournPersonaRoomCompositionTypeData; }
namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xEA9C590)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEA9BD90)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xEA9C1F0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xEA9C150)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETCOLORSTATE_OFFSET UNITYSDK_OFFSET(0xEA9BEC0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETDATA_1_OFFSET UNITYSDK_OFFSET(0xEA9BF70)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xEA84690)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEA9C250)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_BGCOLOR_OFFSET UNITYSDK_OFFSET(0xEA9C530)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xEA9C490)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xEA9C4D0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xEA9C550)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_LEVELUPDESC_OFFSET UNITYSDK_OFFSET(0xEA9C4F0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xEA9C4B0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_NULL_OFFSET UNITYSDK_OFFSET(0xEA9BDA0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xEA9C510)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xEA9C570)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_UNDETERMINED_OFFSET UNITYSDK_OFFSET(0xEA85A60)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xEA9C290)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xEA9C420)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_BGCOLOR_OFFSET UNITYSDK_OFFSET(0xEA9C540)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xEA9C4A0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0xEA9C4E0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xEA9C560)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_LEVELUPDESC_OFFSET UNITYSDK_OFFSET(0xEA9C500)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xEA9C4C0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xEA9C520)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xEA9C580)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xEA9BFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCompositionTypeData_TypeDefinitionIndex = 69665;

	class RogueTournPersonaRoomCompositionTypeData : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::String* _ToastIconPath_k__BackingField; // 0x18
		::RPG::GameCore::RogueTournRoomType _RoomType_k__BackingField; // 0x20
		::System::UInt32 _CompositionType_k__BackingField; // 0x24
		::RPG::Client::TextID _Name_k__BackingField; // 0x28
		::RPG::Client::TextID _LevelUpDesc_k__BackingField; // 0x38
		::RPG::Client::TextID _Desc_k__BackingField; // 0x48
		::RPG::GameCore::RogueTournPersonaRoomBgColorType _BgColor_k__BackingField; // 0x58
		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData** StaticGet__Null()
		{
			return (::RPG::Client::RogueTournPersonaRoomCompositionTypeData**)UnitySDK::FromName("RPG.Client", "RogueTournPersonaRoomCompositionTypeData")->GetStaticField(0x728A0);
		}

		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData** StaticGet__Undetermined()
		{
			return (::RPG::Client::RogueTournPersonaRoomCompositionTypeData**)UnitySDK::FromName("RPG.Client", "RogueTournPersonaRoomCompositionTypeData")->GetStaticField(0x728A8);
		}

		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*>**)UnitySDK::FromName("RPG.Client", "RogueTournPersonaRoomCompositionTypeData")->GetStaticField(0x728B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* get_Null()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_NULL_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* get_Undetermined()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_UNDETERMINED_OFFSET))();
		}

		::System::String* GetColorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETCOLORSTATE_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* GetData_1(::HJPKGKGOAFP a1)
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::HJPKGKGOAFP))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETDATA_1_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* _CreateData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA__CREATEDATA_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::Client::RogueTournPersonaRoomCompositionTypeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::RPG::Client::RogueTournPersonaRoomCompositionTypeData* a1, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournPersonaRoomCompositionTypeData*, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::RogueTournPersonaRoomCompositionTypeData* a1, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournPersonaRoomCompositionTypeData*, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::UInt32 get_CompositionType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_COMPOSITIONTYPE_OFFSET))(this);
		}

		::System::Void set_CompositionType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_COMPOSITIONTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_DESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_LevelUpDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_LEVELUPDESC_OFFSET))(this);
		}

		::System::Void set_LevelUpDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_LEVELUPDESC_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournRoomType get_RoomType()
		{
			return ((::RPG::GameCore::RogueTournRoomType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_ROOMTYPE_OFFSET))(this);
		}

		::System::Void set_RoomType(::RPG::GameCore::RogueTournRoomType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournRoomType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_ROOMTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournPersonaRoomBgColorType get_BgColor()
		{
			return ((::RPG::GameCore::RogueTournPersonaRoomBgColorType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_BGCOLOR_OFFSET))(this);
		}

		::System::Void set_BgColor(::RPG::GameCore::RogueTournPersonaRoomBgColorType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournPersonaRoomBgColorType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_BGCOLOR_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ToastIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_GET_TOASTICONPATH_OFFSET))(this);
		}

		::System::Void set_ToastIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCOMPOSITIONTYPEDATA_SET_TOASTICONPATH_OFFSET))(this, a1);
		}

	};
}
