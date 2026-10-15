#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CelestialBodyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CelestialBodyData;
class OrbitData;
class VisibilityConfig;

#define SOLARSYSTEMDATA_CLPMLHIKGHD_OFFSET UNITYSDK_OFFSET(0xE98A230)
#define SOLARSYSTEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE989610)
#define SOLARSYSTEMDATA_DNCBJGFEFHJ_OFFSET UNITYSDK_OFFSET(0xE989B80)
#define SOLARSYSTEMDATA_EBBHOIFGHJM_OFFSET UNITYSDK_OFFSET(0xE98A0E0)
#define SOLARSYSTEMDATA_EEJFPHJHDNC_OFFSET UNITYSDK_OFFSET(0xE989980)
#define SOLARSYSTEMDATA_FPCGEIPACNC_OFFSET UNITYSDK_OFFSET(0xE989870)
#define SOLARSYSTEMDATA_IDFKLDPGPGJ_OFFSET UNITYSDK_OFFSET(0xE989A30)
#define SOLARSYSTEMDATA_IIEKBMLCONI_OFFSET UNITYSDK_OFFSET(0xE98A000)
#define SOLARSYSTEMDATA_IPGEEFMLGHG_OFFSET UNITYSDK_OFFSET(0xE989640)
#define SOLARSYSTEMDATA_JLEKGELOOMA_OFFSET UNITYSDK_OFFSET(0xE98A070)
#define SOLARSYSTEMDATA_KKPHDPCNCED_OFFSET UNITYSDK_OFFSET(0xE989C10)
#define SOLARSYSTEMDATA_KPNFIGDOHIE_OFFSET UNITYSDK_OFFSET(0xE989CA0)
#define SOLARSYSTEMDATA_LLCAFKDFBMM_OFFSET UNITYSDK_OFFSET(0xE98A1F0)
#define SOLARSYSTEMDATA_LPGEDMCDNKB_OFFSET UNITYSDK_OFFSET(0xE989900)
#define SOLARSYSTEMDATA_MHDNLFCBJNL_OFFSET UNITYSDK_OFFSET(0xE9899E0)
#define SOLARSYSTEMDATA_MPMHBLOEHFF_OFFSET UNITYSDK_OFFSET(0xE98A120)
#define SOLARSYSTEMDATA_NEDDHKOLNAG_OFFSET UNITYSDK_OFFSET(0xE989F90)

inline static constexpr unsigned int SolarSystemData_TypeDefinitionIndex = 47308;

	class SolarSystemData : public ::System::Object
	{
	public:
		::System::Single timeScale; // 0x10
		::System::Single currentTime; // 0x14
		::System::Single updateInterval; // 0x18
		::System::Single lastUpdateTime; // 0x1C
		::Il2CppArray<::OrbitData*>* orbitDataArray; // 0x20
		::Il2CppArray<::CelestialBodyData*>* bodyDataArray; // 0x28
		::System::Int32 activeBodyCount; // 0x30
		::System::Byte _padding0[0x4];
		::VisibilityConfig* visibilityConfig; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* directionCache; // 0x40
		::Il2CppArray<::System::Single>* distanceCache; // 0x48
		::Il2CppArray<::System::Boolean>* horizonVisibilityCache; // 0x50
		::Il2CppArray<::System::Single>* angularSizeCache; // 0x58
		::Il2CppArray<::UnityEngine::Vector3>* skyPositionCache; // 0x60
		// static const ::System::Object MAX_BODIES; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_CTOR_OFFSET))(this);
		}

		::System::Void IPGEEFMLGHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_IPGEEFMLGHG_OFFSET))(this);
		}

		::System::Void FPCGEIPACNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_FPCGEIPACNC_OFFSET))(this);
		}

		::System::Void LPGEDMCDNKB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_LPGEDMCDNKB_OFFSET))(this, a1);
		}

		::System::Void EEJFPHJHDNC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_EEJFPHJHDNC_OFFSET))(this, a1);
		}

		::System::Void MHDNLFCBJNL(::VisibilityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::VisibilityConfig*))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_MHDNLFCBJNL_OFFSET))(this, a1);
		}

		::System::Boolean IDFKLDPGPGJ(::CelestialBodyType a1, ::OrbitData* a2, ::CelestialBodyData* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::CelestialBodyType, ::OrbitData*, ::CelestialBodyData*))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_IDFKLDPGPGJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DNCBJGFEFHJ(::CelestialBodyType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CelestialBodyType))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_DNCBJGFEFHJ_OFFSET))(this, a1);
		}

		::System::Boolean KKPHDPCNCED(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_KKPHDPCNCED_OFFSET))(this, a1);
		}

		::System::Boolean NEDDHKOLNAG(::CelestialBodyType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CelestialBodyType))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_NEDDHKOLNAG_OFFSET))(this, a1);
		}

		::CelestialBodyData* IIEKBMLCONI(::CelestialBodyType a1)
		{
			return ((::CelestialBodyData*(*)(::PVOID, ::CelestialBodyType))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_IIEKBMLCONI_OFFSET))(this, a1);
		}

		::OrbitData* JLEKGELOOMA(::CelestialBodyType a1)
		{
			return ((::OrbitData*(*)(::PVOID, ::CelestialBodyType))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_JLEKGELOOMA_OFFSET))(this, a1);
		}

		::System::Int32 EBBHOIFGHJM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_EBBHOIFGHJM_OFFSET))(this);
		}

		::System::Void KPNFIGDOHIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_KPNFIGDOHIE_OFFSET))(this);
		}

		::System::Void MPMHBLOEHFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_MPMHBLOEHFF_OFFSET))(this);
		}

		::System::Void LLCAFKDFBMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_LLCAFKDFBMM_OFFSET))(this);
		}

		::System::Boolean CLPMLHIKGHD(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SOLARSYSTEMDATA_CLPMLHIKGHD_OFFSET))(this, a1, a2);
		}

	};
