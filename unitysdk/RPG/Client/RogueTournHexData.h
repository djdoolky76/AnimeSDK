#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LAGKECNIKFL.h"
namespace RPG::AvatarSystem { class AvatarPath; }
namespace RPG::Client { class RogueTournHexData; }
namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNHEXDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEB5560)
#define RPG_CLIENT_ROGUETOURNHEXDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB5060)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GETALLDATAS_OFFSET UNITYSDK_OFFSET(0x1CEB4C70)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GETDATA_1_OFFSET UNITYSDK_OFFSET(0x1CEB4C10)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CEB1950)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_ATTACKDAMAGETYPES_OFFSET UNITYSDK_OFFSET(0x1CEB4B50)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_AVATARPATHS_OFFSET UNITYSDK_OFFSET(0x1CEB4B70)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0x1CEB4AF0)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1CEB1C10)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_EXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x1CEB4B90)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_FIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x1CEB4B30)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_HEXID_OFFSET UNITYSDK_OFFSET(0x1CEB4A90)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1CEB4B10)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CEB4AD0)
#define RPG_CLIENT_ROGUETOURNHEXDATA_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0x1CEB4AB0)
#define RPG_CLIENT_ROGUETOURNHEXDATA_ISHEXEXISTS_OFFSET UNITYSDK_OFFSET(0x1CEB4BB0)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_ATTACKDAMAGETYPES_OFFSET UNITYSDK_OFFSET(0x1CEB4B60)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_AVATARPATHS_OFFSET UNITYSDK_OFFSET(0x1CEB4B80)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_BGDESC_OFFSET UNITYSDK_OFFSET(0x1CEB4B00)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_EXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x1CEB4BA0)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_FIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x1CEB4B40)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_HEXID_OFFSET UNITYSDK_OFFSET(0x1CEB4AA0)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1CEB4B20)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1CEB4AE0)
#define RPG_CLIENT_ROGUETOURNHEXDATA_SET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0x1CEB4AC0)
#define RPG_CLIENT_ROGUETOURNHEXDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0x1CEB4FF0)
#define RPG_CLIENT_ROGUETOURNHEXDATA__INITFROMEXCEL_OFFSET UNITYSDK_OFFSET(0x1CEB5070)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHexData_TypeDefinitionIndex = 69615;

	class RogueTournHexData : public ::System::Object
	{
	public:
		::System::String* _FigureIconPath_k__BackingField; // 0x10
		::Il2CppArray<::RPG::AvatarSystem::AvatarPath*>* _AvatarPaths_k__BackingField; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _AttackDamageTypes_k__BackingField; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParamList; // 0x30
		::Il2CppArray<::System::UInt32>* _ExtraEffectIDs_k__BackingField; // 0x38
		::RPG::GameCore::RogueTournMode _TournMode_k__BackingField; // 0x40
		::System::UInt32 _HexID_k__BackingField; // 0x44
		::RPG::Client::TextID _DescTextID; // 0x48
		::RPG::Client::TextID _BgDesc_k__BackingField; // 0x58
		::RPG::Client::TextID _Name_k__BackingField; // 0x68
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournHexData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournHexData*>**)UnitySDK::FromName("RPG.Client", "RogueTournHexData")->GetStaticField(0x72B00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_CCTOR_OFFSET))();
		}

		::System::UInt32 get_HexID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_HEXID_OFFSET))(this);
		}

		::System::Void set_HexID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_HEXID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_TOURNMODE_OFFSET))(this);
		}

		::System::Void set_TournMode(::RPG::GameCore::RogueTournMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_TOURNMODE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_BgDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_BGDESC_OFFSET))(this);
		}

		::System::Void set_BgDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_BGDESC_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_DESC_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_FigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_FIGUREICONPATH_OFFSET))(this);
		}

		::System::Void set_FigureIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_FIGUREICONPATH_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_AttackDamageTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_ATTACKDAMAGETYPES_OFFSET))(this);
		}

		::System::Void set_AttackDamageTypes(::Il2CppArray<::RPG::GameCore::AttackDamageType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AttackDamageType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_ATTACKDAMAGETYPES_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::AvatarSystem::AvatarPath*>* get_AvatarPaths()
		{
			return ((::Il2CppArray<::RPG::AvatarSystem::AvatarPath*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_AVATARPATHS_OFFSET))(this);
		}

		::System::Void set_AvatarPaths(::Il2CppArray<::RPG::AvatarSystem::AvatarPath*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::AvatarSystem::AvatarPath*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_AVATARPATHS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GET_EXTRAEFFECTIDS_OFFSET))(this);
		}

		::System::Void set_ExtraEffectIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_SET_EXTRAEFFECTIDS_OFFSET))(this, a1);
		}

		static ::System::Boolean IsHexExists(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_ISHEXEXISTS_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournHexData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournHexData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GETDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournHexData* GetData_1(::LAGKECNIKFL a1)
		{
			return ((::RPG::Client::RogueTournHexData*(*)(::LAGKECNIKFL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GETDATA_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RogueTournHexData*>* GetAllDatas(::System::Predicate_1<::RPG::Client::RogueTournHexData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournHexData*>*(*)(::System::Predicate_1<::RPG::Client::RogueTournHexData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA_GETALLDATAS_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournHexData* _CreateData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournHexData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA__CREATEDATA_OFFSET))(a1);
		}

		::System::Boolean _InitFromExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXDATA__INITFROMEXCEL_OFFSET))(this);
		}

	};
}
