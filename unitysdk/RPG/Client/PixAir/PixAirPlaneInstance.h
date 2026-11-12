#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client::PixAir { class PixAirPlaneData; }
namespace RPG::Client::PixAir { class PixAirPlaneInstance; }
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0xE5BB210)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_BASEHP_OFFSET UNITYSDK_OFFSET(0xE5BADE0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_BASELIFE_OFFSET UNITYSDK_OFFSET(0xE5BAD90)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0xE5BB090)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xE5BAEE0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_LARGEPLANEICONPATH_OFFSET UNITYSDK_OFFSET(0xE5BAF30)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xE5BAE30)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE5BAE80)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_ONESHOTSHIELD_OFFSET UNITYSDK_OFFSET(0xE5BB0B0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_OWNERDESC_OFFSET UNITYSDK_OFFSET(0xE5BB030)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_OWNERICONPATH_OFFSET UNITYSDK_OFFSET(0xE5BAF80)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_OWNERNAME_OFFSET UNITYSDK_OFFSET(0xE5BAFD0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_PLANEDATA_OFFSET UNITYSDK_OFFSET(0xE5BAD70)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xE5B5930)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_SET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0xE5BB0A0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_SET_ONESHOTSHIELD_OFFSET UNITYSDK_OFFSET(0xE5BB0C0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_SET_PLANEDATA_OFFSET UNITYSDK_OFFSET(0xE5BAD80)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_SYNCCURRENTHP_OFFSET UNITYSDK_OFFSET(0xE5BB0D0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_SYNCONESHOTSHIELD_OFFSET UNITYSDK_OFFSET(0xE5BB120)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_TRYCREATE_OFFSET UNITYSDK_OFFSET(0xE5BB170)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirPlaneInstance_TypeDefinitionIndex = 82134;

	class PixAirPlaneInstance : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirPlaneData* _PlaneData_k__BackingField; // 0x10
		::RPG::GameCore::FixPoint _OneShotShield_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _CurrentHP_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_CTOR_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirPlaneData* get_PlaneData()
		{
			return ((::RPG::Client::PixAir::PixAirPlaneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_PLANEDATA_OFFSET))(this);
		}

		::System::Void set_PlaneData(::RPG::Client::PixAir::PixAirPlaneData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirPlaneData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_SET_PLANEDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_PLANEID_OFFSET))(this);
		}

		::System::Int32 get_BaseLife()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_BASELIFE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BaseHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_BASEHP_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_MODELPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_LargePlaneIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_LARGEPLANEICONPATH_OFFSET))(this);
		}

		::System::String* get_OwnerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_OWNERICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_OwnerName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_OWNERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_OwnerDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_OWNERDESC_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CurrentHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_CURRENTHP_OFFSET))(this);
		}

		::System::Void set_CurrentHP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_SET_CURRENTHP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_OneShotShield()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_GET_ONESHOTSHIELD_OFFSET))(this);
		}

		::System::Void set_OneShotShield(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_SET_ONESHOTSHIELD_OFFSET))(this, a1);
		}

		::System::Void SyncCurrentHP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_SYNCCURRENTHP_OFFSET))(this, a1);
		}

		::System::Void SyncOneShotShield(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_SYNCONESHOTSHIELD_OFFSET))(this, a1);
		}

		static ::RPG::Client::PixAir::PixAirPlaneInstance* TryCreate(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirPlaneInstance*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANEINSTANCE_TRYCREATE_OFFSET))(a1);
		}

	};
}
