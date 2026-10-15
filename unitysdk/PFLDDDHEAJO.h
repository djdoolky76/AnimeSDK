#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGCEOOGCKGE;
namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class SubMissionData; }

#define PFLDDDHEAJO_AIMPLGGKOIA_OFFSET UNITYSDK_OFFSET(0xC216980)
#define PFLDDDHEAJO_BPIBPDENHOI_OFFSET UNITYSDK_OFFSET(0xC216CF0)
#define PFLDDDHEAJO_CTOR_OFFSET UNITYSDK_OFFSET(0xC215880)
#define PFLDDDHEAJO_DJCNJGGIBBG_OFFSET UNITYSDK_OFFSET(0xC216870)
#define PFLDDDHEAJO_FCJDHLHACJH_OFFSET UNITYSDK_OFFSET(0xC216A40)
#define PFLDDDHEAJO_FMBFMOKMBGG_OFFSET UNITYSDK_OFFSET(0xC215DD0)
#define PFLDDDHEAJO_HCBJKFCOBAH_OFFSET UNITYSDK_OFFSET(0xC2162F0)
#define PFLDDDHEAJO_IDKKDGJPEJB_OFFSET UNITYSDK_OFFSET(0xC216AD0)
#define PFLDDDHEAJO_ILNAAEBOJOL_OFFSET UNITYSDK_OFFSET(0xC215ED0)
#define PFLDDDHEAJO_JAPHEDMPLFM_OFFSET UNITYSDK_OFFSET(0xC2162A0)
#define PFLDDDHEAJO_JOMMGGHLFFO_OFFSET UNITYSDK_OFFSET(0xC2158D0)
#define PFLDDDHEAJO_KKDHBKIFAAL_OFFSET UNITYSDK_OFFSET(0xC215E70)
#define PFLDDDHEAJO_LLJAIKBFAGI_OFFSET UNITYSDK_OFFSET(0xC216C50)

inline static constexpr unsigned int PFLDDDHEAJO_TypeDefinitionIndex = 80742;

	class PFLDDDHEAJO : public ::System::Object
	{
	public:
		::KGCEOOGCKGE* LBNAGLIGKIO; // 0x10
		::System::Void _ctor(::KGCEOOGCKGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGCEOOGCKGE*))((::PBYTE)hIl2Cpp + PFLDDDHEAJO_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean JOMMGGHLFFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLDDDHEAJO_JOMMGGHLFFO_OFFSET))(this);
		}

		::System::Boolean KKDHBKIFAAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLDDDHEAJO_KKDHBKIFAAL_OFFSET))(this);
		}

		::System::UInt32 ILNAAEBOJOL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLDDDHEAJO_ILNAAEBOJOL_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* JAPHEDMPLFM()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLDDDHEAJO_JAPHEDMPLFM_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* DJCNJGGIBBG()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLDDDHEAJO_DJCNJGGIBBG_OFFSET))(this);
		}

		::System::Void AIMPLGGKOIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLDDDHEAJO_AIMPLGGKOIA_OFFSET))(this);
		}

		::System::Void FCJDHLHACJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLDDDHEAJO_FCJDHLHACJH_OFFSET))(this);
		}

		::System::Void LLJAIKBFAGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLDDDHEAJO_LLJAIKBFAGI_OFFSET))(this);
		}

		::System::Void IDKKDGJPEJB(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + PFLDDDHEAJO_IDKKDGJPEJB_OFFSET))(this, a1);
		}

		::RPG::Client::SubMissionData* BPIBPDENHOI(::RPG::Client::MainMissionData* a1)
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + PFLDDDHEAJO_BPIBPDENHOI_OFFSET))(this, a1);
		}

		::RPG::Client::MainMissionData* HCBJKFCOBAH()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLDDDHEAJO_HCBJKFCOBAH_OFFSET))(this);
		}

		::System::Boolean FMBFMOKMBGG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFLDDDHEAJO_FMBFMOKMBGG_OFFSET))(this, a1);
		}

	};
