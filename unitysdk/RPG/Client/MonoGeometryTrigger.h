#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseMonoTriggerRegion.h"
#include "unitysdk/RPG/GameCore/GeometryRegionTargetType.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NGOGOCJDPAO;
class OMODLCNDEBI;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }

#define RPG_CLIENT_MONOGEOMETRYTRIGGER_BFNBBIAGCMP_OFFSET UNITYSDK_OFFSET(0xE286850)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_CASTSINGLETARGET_OFFSET UNITYSDK_OFFSET(0xE286050)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_CDKHNKDKJGI_OFFSET UNITYSDK_OFFSET(0xE2865C0)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_CMPDJLKIJJC_OFFSET UNITYSDK_OFFSET(0xE285D30)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0xE286DD0)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_DHHNFNPIHKB_OFFSET UNITYSDK_OFFSET(0xE285840)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_GET_TARGETGROUPID_OFFSET UNITYSDK_OFFSET(0xE286DB0)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_GET_TARGETINSTANCEID_OFFSET UNITYSDK_OFFSET(0xE286DC0)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0xE286DA0)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_GILBLNMEOCG_OFFSET UNITYSDK_OFFSET(0xE285A30)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_HGJAOCKKCBJ_OFFSET UNITYSDK_OFFSET(0xE285EC0)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_KJPPPLHGOBG_OFFSET UNITYSDK_OFFSET(0xE285910)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_KMEECAMKIMD_OFFSET UNITYSDK_OFFSET(0xE285E20)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_NAFFHAJJFFC_OFFSET UNITYSDK_OFFSET(0xE285970)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE286D50)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_OVERLAPPOINT_OFFSET UNITYSDK_OFFSET(0xE286450)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_PLPBGMBGBAE_OFFSET UNITYSDK_OFFSET(0xE285C40)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_SETUPGEOMETRYREGION_OFFSET UNITYSDK_OFFSET(0xE285780)
#define RPG_CLIENT_MONOGEOMETRYTRIGGER_TICK_OFFSET UNITYSDK_OFFSET(0xE285F90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoGeometryTrigger_TypeDefinitionIndex = 70860;

	class MonoGeometryTrigger : public ::RPG::Client::BaseMonoTriggerRegion
	{
	public:
		::NGOGOCJDPAO* CFNECNPCDBP; // 0x20
		::RPG::GameCore::GameEntity* PIAAAIKAGFA; // 0x28
		::System::Single OLEIDKBKEOE; // 0x30
		::System::Single PCOMMLHHNOA; // 0x34
		::RPG::GameCore::GeometryRegionTargetType JCKJHGJDFKF; // 0x38
		::System::UInt32 BCAGKLKAFCF; // 0x3C
		::System::UInt32 GEFEOLMLPJN; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void SetupGeometryRegion(::OMODLCNDEBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMODLCNDEBI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_SETUPGEOMETRYREGION_OFFSET))(this, a1);
		}

		::System::Void DHHNFNPIHKB(::OMODLCNDEBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMODLCNDEBI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_DHHNFNPIHKB_OFFSET))(this, a1);
		}

		::System::Void GILBLNMEOCG(::OMODLCNDEBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMODLCNDEBI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_GILBLNMEOCG_OFFSET))(this, a1);
		}

		::System::Void PLPBGMBGBAE(::OMODLCNDEBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMODLCNDEBI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_PLPBGMBGBAE_OFFSET))(this, a1);
		}

		::System::Void CMPDJLKIJJC(::OMODLCNDEBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMODLCNDEBI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_CMPDJLKIJJC_OFFSET))(this, a1);
		}

		::System::Void KJPPPLHGOBG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_KJPPPLHGOBG_OFFSET))(this, a1);
		}

		::RPG::GameCore::GeometryRegionTargetType KMEECAMKIMD(::RPG::GameCore::TriggerValidGuestConfig* a1)
		{
			return ((::RPG::GameCore::GeometryRegionTargetType(*)(::PVOID, ::RPG::GameCore::TriggerValidGuestConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_KMEECAMKIMD_OFFSET))(this, a1);
		}

		::System::Void NAFFHAJJFFC(::RPG::GameCore::TriggerValidGuestConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerValidGuestConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_NAFFHAJJFFC_OFFSET))(this, a1);
		}

		::System::Void HGJAOCKKCBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_HGJAOCKKCBJ_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_TICK_OFFSET))(this, a1);
		}

		::System::Boolean OverlapPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_OVERLAPPOINT_OFFSET))(this, a1);
		}

		::System::Void CDKHNKDKJGI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_CDKHNKDKJGI_OFFSET))(this, a1);
		}

		::System::Void CastSingleTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_CASTSINGLETARGET_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_ONDISABLE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* BFNBBIAGCMP()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_BFNBBIAGCMP_OFFSET))(this);
		}

		::RPG::GameCore::GeometryRegionTargetType get_TargetType()
		{
			return ((::RPG::GameCore::GeometryRegionTargetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::UInt32 get_TargetGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_GET_TARGETGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_TargetInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOGEOMETRYTRIGGER_GET_TARGETINSTANCEID_OFFSET))(this);
		}

	};
}
