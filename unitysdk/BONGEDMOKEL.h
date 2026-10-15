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

#define BONGEDMOKEL_AFHDIMBOKDA_OFFSET UNITYSDK_OFFSET(0xC197240)
#define BONGEDMOKEL_AJIKGDEMOEK_OFFSET UNITYSDK_OFFSET(0xC197150)
#define BONGEDMOKEL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC197540)
#define BONGEDMOKEL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC1976C0)
#define BONGEDMOKEL_BBMCPCOCAOI_OFFSET UNITYSDK_OFFSET(0xC196F80)
#define BONGEDMOKEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC197820)
#define BONGEDMOKEL_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC196540)
#define BONGEDMOKEL_DIPKJAIDOLG_OFFSET UNITYSDK_OFFSET(0xC196E80)
#define BONGEDMOKEL_DMLHEFLKAMM_OFFSET UNITYSDK_OFFSET(0xC196C30)
#define BONGEDMOKEL_EFDMIMJJGHF_OFFSET UNITYSDK_OFFSET(0xC197480)
#define BONGEDMOKEL_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC196670)
#define BONGEDMOKEL_GCHIDMKKCII_OFFSET UNITYSDK_OFFSET(0xC1971C0)
#define BONGEDMOKEL_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xC1964C0)
#define BONGEDMOKEL_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xC1964E0)
#define BONGEDMOKEL_GFJNJONLFEK_OFFSET UNITYSDK_OFFSET(0xC197360)
#define BONGEDMOKEL_HIKLIIHEKFD_OFFSET UNITYSDK_OFFSET(0xC196CF0)
#define BONGEDMOKEL_IDCAMKKDGIO_OFFSET UNITYSDK_OFFSET(0xC197050)
#define BONGEDMOKEL_LJFIMAMKHOM_OFFSET UNITYSDK_OFFSET(0xC1970E0)
#define BONGEDMOKEL_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xC196630)
#define BONGEDMOKEL_ONIJMMECOBB_OFFSET UNITYSDK_OFFSET(0xC196F10)
#define BONGEDMOKEL_OPNFIDPPPDK_OFFSET UNITYSDK_OFFSET(0xC196AF0)
#define BONGEDMOKEL_PEKJHMCPMGN_OFFSET UNITYSDK_OFFSET(0xC196FF0)
#define BONGEDMOKEL_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xC1964D0)
#define BONGEDMOKEL__ONBIND_OFFSET UNITYSDK_OFFSET(0xC195FF0)

inline static constexpr unsigned int BONGEDMOKEL_TypeDefinitionIndex = 72204;

	class BONGEDMOKEL : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedTextSDF* KIHEDHADLHI; // 0x60
		::RPG::Client::LocalizedTextSDF* LFAIFMPKKLG; // 0x68
		::UnityEngine::Animation* GCDMOAPELDM; // 0x70
		::UnityEngine::Transform* PCCKAHFEDNO; // 0x78
		::RPG::Client::LocalizedTextSDF* NNDILJHJPHB; // 0x80
		::RPG::Client::MonoUIColorSwitcher* OGFPMFKHBKN; // 0x88
		::UnityEngine::Transform* PHCAJAONLHC; // 0x90
		::RPG::Client::LocalizedTextSDF* AMDKLJCCMBG; // 0x98
		::UnityEngine::Animation* MDODHGCNCOG; // 0xA0
		::UnityEngine::Transform* PAOHDLAJKOO; // 0xA8
		::UnityEngine::Transform* FHDELHMLMFO; // 0xB0
		::RPG::Client::LocalizedText* JJICDFFEJIM; // 0xB8
		::UnityEngine::Transform* FOBGCFIHIHE; // 0xC0
		::UnityEngine::Animation* AJIKJPEJPIC; // 0xC8
		::UnityEngine::Transform* GGAKEEEEBEN; // 0xD0
		::UnityEngine::Transform* MEFPAPDMPHD; // 0xD8
		::RPG::Client::LocalizedText* ADCDJEOKDOO; // 0xE0
		::UnityEngine::Transform* EFIPPGDEIOA; // 0xE8
		::UnityEngine::Transform* JFBPCBAMNOF; // 0xF0
		::UnityEngine::Animation* LMPILGBHHGK; // 0xF8
		::System::Int32 _Index_k__BackingField; // 0x100
		::System::Boolean LDBJJIDHOKM; // 0x104
		::System::Boolean OEHKPCJHCIL; // 0x105
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BONGEDMOKEL_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONGEDMOKEL_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONGEDMOKEL_EKGCGIDIFJJ_OFFSET))(this);
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
