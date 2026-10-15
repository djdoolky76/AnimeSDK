#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MissionWayPointType.h"
#include "unitysdk/System/Object.h"
class KGDADKNPPOL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace System { class String; }

#define DEMLILJDOKM_ACNEJKGHANC_OFFSET UNITYSDK_OFFSET(0xE51A510)
#define DEMLILJDOKM_CTOR_OFFSET UNITYSDK_OFFSET(0xE51A940)
#define DEMLILJDOKM_GET_ISREGISTERREGIONCHANGE_OFFSET UNITYSDK_OFFSET(0xE51A920)
#define DEMLILJDOKM_HECDFACFACC_OFFSET UNITYSDK_OFFSET(0xE51A490)
#define DEMLILJDOKM_IIHLICPMAKP_OFFSET UNITYSDK_OFFSET(0xE51A8C0)
#define DEMLILJDOKM_KCLLDCLEMPJ_OFFSET UNITYSDK_OFFSET(0xE51A3E0)
#define DEMLILJDOKM_LFOCEAIKJAJ_OFFSET UNITYSDK_OFFSET(0xE51A1B0)
#define DEMLILJDOKM_SET_ISREGISTERREGIONCHANGE_OFFSET UNITYSDK_OFFSET(0xE51A930)
#define DEMLILJDOKM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE51A610)

	class DEMLILJDOKM : public ::System::Object
	{
	public:
		::RPG::GameCore::MissionWayPointType KIBABGFHNMB; // 0x10
		::System::UInt32 FHNELHJHCAE; // 0x14
		::System::UInt32 BNDCPIICGGE; // 0x18
		::System::UInt32 GMCBNNKJAGJ; // 0x1C
		::System::Boolean _IsRegisterRegionChange_k__BackingField; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 PANKDHPPCNC; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMLILJDOKM_CTOR_OFFSET))(this);
		}

		::System::Void LFOCEAIKJAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMLILJDOKM_LFOCEAIKJAJ_OFFSET))(this);
		}

		::System::Void KCLLDCLEMPJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DEMLILJDOKM_KCLLDCLEMPJ_OFFSET))(this, a1);
		}

		::System::Boolean HECDFACFACC(::RPG::GameCore::SubMissionInfoConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SubMissionInfoConfig*))((::PBYTE)hIl2Cpp + DEMLILJDOKM_HECDFACFACC_OFFSET))(this, a1);
		}

		::System::Boolean ACNEJKGHANC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DEMLILJDOKM_ACNEJKGHANC_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMLILJDOKM_TOSTRING_OFFSET))(this);
		}

		::System::Void IIHLICPMAKP(::KGDADKNPPOL* a1, ::KGDADKNPPOL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + DEMLILJDOKM_IIHLICPMAKP_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsRegisterRegionChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMLILJDOKM_GET_ISREGISTERREGIONCHANGE_OFFSET))(this);
		}

		::System::Void set_IsRegisterRegionChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEMLILJDOKM_SET_ISREGISTERREGIONCHANGE_OFFSET))(this, a1);
		}

	};
