#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TravelShipCameraMode.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class Freelook3rdRigParams; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define BDMIBKGJLNN_CTOR_OFFSET UNITYSDK_OFFSET(0x16302340)
#define BDMIBKGJLNN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16302E40)
#define BDMIBKGJLNN_GET_MODE_OFFSET UNITYSDK_OFFSET(0x16303650)
#define BDMIBKGJLNN_GFDJEKKINHH_OFFSET UNITYSDK_OFFSET(0x16302950)
#define BDMIBKGJLNN_IAIOONJJCPM_OFFSET UNITYSDK_OFFSET(0x16302800)
#define BDMIBKGJLNN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x163023F0)
#define BDMIBKGJLNN_KOIPIBBKJII_OFFSET UNITYSDK_OFFSET(0x16302FC0)
#define BDMIBKGJLNN_MEKHBHLDFAF_OFFSET UNITYSDK_OFFSET(0x16303200)
#define BDMIBKGJLNN_MOKNCFJICIC_OFFSET UNITYSDK_OFFSET(0x163023A0)
#define BDMIBKGJLNN_NGOEHHGLJOP_OFFSET UNITYSDK_OFFSET(0x16303420)
#define BDMIBKGJLNN_SET_MODE_OFFSET UNITYSDK_OFFSET(0x16303660)

inline static constexpr unsigned int BDMIBKGJLNN_TypeDefinitionIndex = 68789;

	class BDMIBKGJLNN : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JCCHOIPFHHD; // 0x10
		::UnityEngine::Transform* ILFCKOFPHGH; // 0x18
		::System::Single DBNPPMOPFNG; // 0x20
		::System::Single JDLCCIPIHEM; // 0x24
		::System::Single MDALBHBADBJ; // 0x28
		::RPG::Client::TravelShipCameraMode _Mode_k__BackingField; // 0x2C
		::System::Single EILFNDNFIFK; // 0x30
		::System::Single CNPIJNIMJHA; // 0x34
		::System::Single BAAHCPEDNDO; // 0x38
		::System::Single KALMIGLCEAP; // 0x3C
		::System::Boolean MHEAIOMEGCA; // 0x40
		::System::Boolean GMJHMBDAAID; // 0x41
		::System::Byte _padding0[0x2];
		::System::Single EMFNDEMFDAE; // 0x44
		// static const ::System::Object IHBFOINGLEC; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BDMIBKGJLNN_CTOR_OFFSET))(this, a1);
		}

		::System::Void MOKNCFJICIC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDMIBKGJLNN_MOKNCFJICIC_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDMIBKGJLNN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMIBKGJLNN_DISPOSE_OFFSET))(this);
		}

		::System::Void KOIPIBBKJII(::RPG::Client::TravelShipCameraMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TravelShipCameraMode))((::PBYTE)hIl2Cpp + BDMIBKGJLNN_KOIPIBBKJII_OFFSET))(this, a1);
		}

		::System::Boolean IAIOONJJCPM(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDMIBKGJLNN_IAIOONJJCPM_OFFSET))(this, a1);
		}

		::System::Single GFDJEKKINHH(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDMIBKGJLNN_GFDJEKKINHH_OFFSET))(this, a1);
		}

		::System::Single MEKHBHLDFAF(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDMIBKGJLNN_MEKHBHLDFAF_OFFSET))(this, a1);
		}

		::System::Single NGOEHHGLJOP(::RPG::Client::Freelook3rdRigParams* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::Freelook3rdRigParams*, ::System::Single))((::PBYTE)hIl2Cpp + BDMIBKGJLNN_NGOEHHGLJOP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TravelShipCameraMode get_Mode()
		{
			return ((::RPG::Client::TravelShipCameraMode(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMIBKGJLNN_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::RPG::Client::TravelShipCameraMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TravelShipCameraMode))((::PBYTE)hIl2Cpp + BDMIBKGJLNN_SET_MODE_OFFSET))(this, a1);
		}

	};
