#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class ACIOOFOEGOH;
class KHEOBHMINFI;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class LocalizedTextSDF; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace RPG::GameCore { class FateBattleArcherProgressReachLimit; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define BONGEDMOKEL_AFHDIMBOKDA_OFFSET UNITYSDK_OFFSET(0xCB38A50)
#define BONGEDMOKEL_AJIKGDEMOEK_OFFSET UNITYSDK_OFFSET(0xCB38960)
#define BONGEDMOKEL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCB38D50)
#define BONGEDMOKEL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xCB38ED0)
#define BONGEDMOKEL_BBMCPCOCAOI_OFFSET UNITYSDK_OFFSET(0xCB38790)
#define BONGEDMOKEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCB39030)
#define BONGEDMOKEL_DIPKJAIDOLG_OFFSET UNITYSDK_OFFSET(0xCB38690)
#define BONGEDMOKEL_DMLHEFLKAMM_OFFSET UNITYSDK_OFFSET(0xCB38440)
#define BONGEDMOKEL_EFDMIMJJGHF_OFFSET UNITYSDK_OFFSET(0xCB38C90)
#define BONGEDMOKEL_GCHIDMKKCII_OFFSET UNITYSDK_OFFSET(0xCB389D0)
#define BONGEDMOKEL_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xCB37CD0)
#define BONGEDMOKEL_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xCB37CF0)
#define BONGEDMOKEL_GFJNJONLFEK_OFFSET UNITYSDK_OFFSET(0xCB38B70)
#define BONGEDMOKEL_HIKLIIHEKFD_OFFSET UNITYSDK_OFFSET(0xCB38500)
#define BONGEDMOKEL_IDCAMKKDGIO_OFFSET UNITYSDK_OFFSET(0xCB38860)
#define BONGEDMOKEL_LJFIMAMKHOM_OFFSET UNITYSDK_OFFSET(0xCB388F0)
#define BONGEDMOKEL_ONIJMMECOBB_OFFSET UNITYSDK_OFFSET(0xCB38720)
#define BONGEDMOKEL_OPNFIDPPPDK_OFFSET UNITYSDK_OFFSET(0xCB38300)
#define BONGEDMOKEL_PEKJHMCPMGN_OFFSET UNITYSDK_OFFSET(0xCB38800)
#define BONGEDMOKEL_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xCB37CE0)
#define BONGEDMOKEL__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xCB37E40)
#define BONGEDMOKEL__ONBIND_OFFSET UNITYSDK_OFFSET(0xCB37450)
#define BONGEDMOKEL__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xCB37D50)
#define BONGEDMOKEL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xCB37E80)

inline static constexpr unsigned int BONGEDMOKEL_TypeDefinitionIndex = 74272;

	class BONGEDMOKEL : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* GGAKEEEEBEN; // 0x60
		::UnityEngine::Animation* AJIKJPEJPIC; // 0x68
		::RPG::Client::LocalizedText* ADCDJEOKDOO; // 0x70
		::UnityEngine::Transform* MEFPAPDMPHD; // 0x78
		::UnityEngine::Transform* FOBGCFIHIHE; // 0x80
		::UnityEngine::Transform* PCCKAHFEDNO; // 0x88
		::RPG::Client::MonoUIColorSwitcher* OGFPMFKHBKN; // 0x90
		::UnityEngine::Transform* PHCAJAONLHC; // 0x98
		::RPG::Client::LocalizedText* JJICDFFEJIM; // 0xA0
		::RPG::Client::LocalizedTextSDF* NNDILJHJPHB; // 0xA8
		::RPG::Client::LocalizedTextSDF* KIHEDHADLHI; // 0xB0
		::RPG::Client::LocalizedTextSDF* LFAIFMPKKLG; // 0xB8
		::UnityEngine::Animation* MDODHGCNCOG; // 0xC0
		::UnityEngine::Transform* EFIPPGDEIOA; // 0xC8
		::UnityEngine::Transform* FHDELHMLMFO; // 0xD0
		::UnityEngine::Animation* GCDMOAPELDM; // 0xD8
		::UnityEngine::Transform* JFBPCBAMNOF; // 0xE0
		::UnityEngine::Transform* PAOHDLAJKOO; // 0xE8
		::UnityEngine::Animation* LMPILGBHHGK; // 0xF0
		::RPG::Client::LocalizedTextSDF* AMDKLJCCMBG; // 0xF8
		::System::Int32 _Index_k__BackingField; // 0x100
		::System::Boolean OEHKPCJHCIL; // 0x104
		::System::Boolean LDBJJIDHOKM; // 0x105
		::System::Boolean FELGPJHANPD; // 0x106
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* OFEAKEOIKCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONGEDMOKEL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONGEDMOKEL__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BONGEDMOKEL_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BONGEDMOKEL_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BONGEDMOKEL_GET_TRANS_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BONGEDMOKEL__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONGEDMOKEL__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONGEDMOKEL__SETUPVIEW_OFFSET))(this);
		}

		::System::Void ONIJMMECOBB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BONGEDMOKEL_ONIJMMECOBB_OFFSET))(this, a1);
		}

		::System::Void BBMCPCOCAOI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BONGEDMOKEL_BBMCPCOCAOI_OFFSET))(this, a1);
		}

		::System::Void PEKJHMCPMGN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BONGEDMOKEL_PEKJHMCPMGN_OFFSET))(this, a1);
		}

		::System::Void IDCAMKKDGIO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BONGEDMOKEL_IDCAMKKDGIO_OFFSET))(this, a1);
		}

		::System::Void LJFIMAMKHOM(::ACIOOFOEGOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACIOOFOEGOH*))((::PBYTE)hIl2Cpp + BONGEDMOKEL_LJFIMAMKHOM_OFFSET))(this, a1);
		}

		::System::Void AJIKGDEMOEK(::KHEOBHMINFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHEOBHMINFI*))((::PBYTE)hIl2Cpp + BONGEDMOKEL_AJIKGDEMOEK_OFFSET))(this, a1);
		}

		::System::Void GCHIDMKKCII(::RPG::GameCore::FateBattleArcherProgressReachLimit* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateBattleArcherProgressReachLimit*))((::PBYTE)hIl2Cpp + BONGEDMOKEL_GCHIDMKKCII_OFFSET))(this, a1);
		}

		::System::Void DMLHEFLKAMM(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BONGEDMOKEL_DMLHEFLKAMM_OFFSET))(this, a1, a2);
		}

		::System::Void HIKLIIHEKFD(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BONGEDMOKEL_HIKLIIHEKFD_OFFSET))(this, a1, a2);
		}

		::System::Void OPNFIDPPPDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONGEDMOKEL_OPNFIDPPPDK_OFFSET))(this);
		}

		::System::Void DIPKJAIDOLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONGEDMOKEL_DIPKJAIDOLG_OFFSET))(this);
		}

		::System::Void AFHDIMBOKDA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BONGEDMOKEL_AFHDIMBOKDA_OFFSET))(this, a1);
		}

		::System::Void GFJNJONLFEK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BONGEDMOKEL_GFJNJONLFEK_OFFSET))(this, a1);
		}

		::System::Void EFDMIMJJGHF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BONGEDMOKEL_EFDMIMJJGHF_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONGEDMOKEL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONGEDMOKEL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
