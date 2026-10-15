#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/TextID.h"
class GCCCMKAKPGA;
namespace RPG::Client { class SystemOpenModule; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define DILAPCEEDDN_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xF20DE30)
#define DILAPCEEDDN_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xF20E150)
#define DILAPCEEDDN_CNCIGNKHHIA_OFFSET UNITYSDK_OFFSET(0xF20D020)
#define DILAPCEEDDN_COHGDCMAKHO_OFFSET UNITYSDK_OFFSET(0xF20D9B0)
#define DILAPCEEDDN_COKICCJDHIO_OFFSET UNITYSDK_OFFSET(0xF20DC80)
#define DILAPCEEDDN_CTOR_OFFSET UNITYSDK_OFFSET(0xF20E430)
#define DILAPCEEDDN_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xF20D2A0)
#define DILAPCEEDDN_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0xF20C990)
#define DILAPCEEDDN_EMEPDKJICNF_OFFSET UNITYSDK_OFFSET(0xF20D520)
#define DILAPCEEDDN_FMMLEIBKMDO_OFFSET UNITYSDK_OFFSET(0xF20D070)
#define DILAPCEEDDN_HGMJOIEDNJM_OFFSET UNITYSDK_OFFSET(0xF20DD40)
#define DILAPCEEDDN_IEBCOOJDOHF_OFFSET UNITYSDK_OFFSET(0xF20CAA0)
#define DILAPCEEDDN_MIBKDFPLDKJ_OFFSET UNITYSDK_OFFSET(0xF20D930)
#define DILAPCEEDDN_MJMBDCOEEHG_OFFSET UNITYSDK_OFFSET(0xF20D640)
#define DILAPCEEDDN_MNNOFCODINC_OFFSET UNITYSDK_OFFSET(0xF20CC00)
#define DILAPCEEDDN_NBFACODEAHL_OFFSET UNITYSDK_OFFSET(0xF20D110)
#define DILAPCEEDDN_NDCLIODJHID_OFFSET UNITYSDK_OFFSET(0xF20D5B0)
#define DILAPCEEDDN_NECHEIPDPJD_OFFSET UNITYSDK_OFFSET(0xF20DAF0)
#define DILAPCEEDDN_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xF20C900)
#define DILAPCEEDDN_OLHINFMLPGH_OFFSET UNITYSDK_OFFSET(0xF20DB80)
#define DILAPCEEDDN_PMMAKFGDDDH_OFFSET UNITYSDK_OFFSET(0xF20CD80)
#define DILAPCEEDDN__ONBIND_OFFSET UNITYSDK_OFFSET(0xF20C6F0)

inline static constexpr unsigned int DILAPCEEDDN_TypeDefinitionIndex = 71643;

	class DILAPCEEDDN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* COICMBCGBAE; // 0x60
		::UnityEngine::Transform* NAMLIBFIFNE; // 0x68
		::UnityEngine::Animator* CFNGLMDMENE; // 0x70
		::RPG::Client::SystemOpenModule* AGACAPGOBCI; // 0x78
		::UnityEngine::UI::Button* KJIOINOOIHP; // 0x80
		::UnityEngine::Transform* LOOJEDMAKHC; // 0x88
		::UnityEngine::Transform* CPEBAEFNJKH; // 0x90
		::RPG::Client::TextID PNBMFCDCDNG; // 0x98
		::System::Boolean HABBLKDIKGK; // 0xA8
		::System::Boolean GBFBLPJFCGB; // 0xA9
		::System::Boolean EFPEHIKMIDA; // 0xAA
		::System::Boolean CBILHPMCOMD; // 0xAB
		::System::Boolean CPDGFJFHMMG; // 0xAC
		::System::Boolean BCMBANIDHNP; // 0xAD
		// static const ::System::Object MBKPKFJHODD; // 0x0
		// static const ::System::String* KKJNILBOKEJ; // 0x0
		// static const ::System::String* JPBJFIIAGOE; // 0x0
		// static const ::System::String* OGHCLADFIAO; // 0x0
		// static const ::System::Object INHJCFGEJFE; // 0x0
		// static const ::System::Object MHAJOPGFLHM; // 0x0
		// static const ::System::Object GAHOOFONHJJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILAPCEEDDN_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILAPCEEDDN__ONBIND_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILAPCEEDDN_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EDFDIAKEGIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILAPCEEDDN_EDFDIAKEGIK_OFFSET))(this);
		}

		::System::Void MNNOFCODINC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DILAPCEEDDN_MNNOFCODINC_OFFSET))(this, a1);
		}

		::System::Void CNCIGNKHHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILAPCEEDDN_CNCIGNKHHIA_OFFSET))(this);
		}

		::System::Void FMMLEIBKMDO(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + DILAPCEEDDN_FMMLEIBKMDO_OFFSET))(this, a1);
		}

		::System::Void NBFACODEAHL(::GCCCMKAKPGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCCCMKAKPGA*))((::PBYTE)hIl2Cpp + DILAPCEEDDN_NBFACODEAHL_OFFSET))(this, a1);
		}

		::System::Void IEBCOOJDOHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILAPCEEDDN_IEBCOOJDOHF_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILAPCEEDDN_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void MJMBDCOEEHG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DILAPCEEDDN_MJMBDCOEEHG_OFFSET))(this, a1);
		}

		::System::Void PMMAKFGDDDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILAPCEEDDN_PMMAKFGDDDH_OFFSET))(this);
		}

		::System::Void MIBKDFPLDKJ(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DILAPCEEDDN_MIBKDFPLDKJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean EMEPDKJICNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DILAPCEEDDN_EMEPDKJICNF_OFFSET))(this);
		}

		::System::Void NDCLIODJHID(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DILAPCEEDDN_NDCLIODJHID_OFFSET))(this, a1);
		}

		::System::Void COHGDCMAKHO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DILAPCEEDDN_COHGDCMAKHO_OFFSET))(this, a1);
		}

		::System::Void NECHEIPDPJD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DILAPCEEDDN_NECHEIPDPJD_OFFSET))(this, a1);
		}

		::System::Void OLHINFMLPGH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DILAPCEEDDN_OLHINFMLPGH_OFFSET))(this, a1);
		}

		::System::Void COKICCJDHIO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DILAPCEEDDN_COKICCJDHIO_OFFSET))(this, a1);
		}

		::System::Void HGMJOIEDNJM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DILAPCEEDDN_HGMJOIEDNJM_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILAPCEEDDN_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILAPCEEDDN_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
