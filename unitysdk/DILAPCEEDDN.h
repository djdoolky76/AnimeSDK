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

#define DILAPCEEDDN_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18EC8400)
#define DILAPCEEDDN_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18EC8720)
#define DILAPCEEDDN_CNCIGNKHHIA_OFFSET UNITYSDK_OFFSET(0x18EC75F0)
#define DILAPCEEDDN_COHGDCMAKHO_OFFSET UNITYSDK_OFFSET(0x18EC7F80)
#define DILAPCEEDDN_COKICCJDHIO_OFFSET UNITYSDK_OFFSET(0x18EC8250)
#define DILAPCEEDDN_CTOR_OFFSET UNITYSDK_OFFSET(0x18EC8A00)
#define DILAPCEEDDN_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x18EC7870)
#define DILAPCEEDDN_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0x18EC6F60)
#define DILAPCEEDDN_EMEPDKJICNF_OFFSET UNITYSDK_OFFSET(0x18EC7AF0)
#define DILAPCEEDDN_FMMLEIBKMDO_OFFSET UNITYSDK_OFFSET(0x18EC7640)
#define DILAPCEEDDN_HGMJOIEDNJM_OFFSET UNITYSDK_OFFSET(0x18EC8310)
#define DILAPCEEDDN_IEBCOOJDOHF_OFFSET UNITYSDK_OFFSET(0x18EC7070)
#define DILAPCEEDDN_MIBKDFPLDKJ_OFFSET UNITYSDK_OFFSET(0x18EC7F00)
#define DILAPCEEDDN_MJMBDCOEEHG_OFFSET UNITYSDK_OFFSET(0x18EC7C10)
#define DILAPCEEDDN_MNNOFCODINC_OFFSET UNITYSDK_OFFSET(0x18EC71D0)
#define DILAPCEEDDN_NBFACODEAHL_OFFSET UNITYSDK_OFFSET(0x18EC76E0)
#define DILAPCEEDDN_NDCLIODJHID_OFFSET UNITYSDK_OFFSET(0x18EC7B80)
#define DILAPCEEDDN_NECHEIPDPJD_OFFSET UNITYSDK_OFFSET(0x18EC80C0)
#define DILAPCEEDDN_OLHINFMLPGH_OFFSET UNITYSDK_OFFSET(0x18EC8150)
#define DILAPCEEDDN_PMMAKFGDDDH_OFFSET UNITYSDK_OFFSET(0x18EC7350)
#define DILAPCEEDDN__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x18EC6ED0)
#define DILAPCEEDDN__ONBIND_OFFSET UNITYSDK_OFFSET(0x18EC6C20)

inline static constexpr unsigned int DILAPCEEDDN_TypeDefinitionIndex = 73631;

	class DILAPCEEDDN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* NAMLIBFIFNE; // 0x60
		::UnityEngine::Animator* CFNGLMDMENE; // 0x68
		::UnityEngine::Transform* CPEBAEFNJKH; // 0x70
		::UnityEngine::UI::Button* KJIOINOOIHP; // 0x78
		::UnityEngine::Transform* COICMBCGBAE; // 0x80
		::RPG::Client::SystemOpenModule* AGACAPGOBCI; // 0x88
		::UnityEngine::Transform* LOOJEDMAKHC; // 0x90
		::System::Boolean BCMBANIDHNP; // 0x98
		::System::Boolean CPDGFJFHMMG; // 0x99
		::System::Boolean EFPEHIKMIDA; // 0x9A
		::System::Boolean HABBLKDIKGK; // 0x9B
		::System::Boolean GBFBLPJFCGB; // 0x9C
		::System::Boolean CBILHPMCOMD; // 0x9D
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID PNBMFCDCDNG; // 0xA0
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

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILAPCEEDDN__INITVARONCE_OFFSET))(this);
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
