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

#define BONGEDMOKEL_AFHDIMBOKDA_OFFSET UNITYSDK_OFFSET(0x1B5F4E50)
#define BONGEDMOKEL_AJIKGDEMOEK_OFFSET UNITYSDK_OFFSET(0x1B5F4D60)
#define BONGEDMOKEL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B5F5150)
#define BONGEDMOKEL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B5F52D0)
#define BONGEDMOKEL_BBMCPCOCAOI_OFFSET UNITYSDK_OFFSET(0x1B5F4B90)
#define BONGEDMOKEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5F5430)
#define BONGEDMOKEL_DIPKJAIDOLG_OFFSET UNITYSDK_OFFSET(0x1B5F4A90)
#define BONGEDMOKEL_DMLHEFLKAMM_OFFSET UNITYSDK_OFFSET(0x1B5F4830)
#define BONGEDMOKEL_EFDMIMJJGHF_OFFSET UNITYSDK_OFFSET(0x1B5F5090)
#define BONGEDMOKEL_GCHIDMKKCII_OFFSET UNITYSDK_OFFSET(0x1B5F4DD0)
#define BONGEDMOKEL_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1B5F40C0)
#define BONGEDMOKEL_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x1B5F40E0)
#define BONGEDMOKEL_GFJNJONLFEK_OFFSET UNITYSDK_OFFSET(0x1B5F4F70)
#define BONGEDMOKEL_HIKLIIHEKFD_OFFSET UNITYSDK_OFFSET(0x1B5F48F0)
#define BONGEDMOKEL_IDCAMKKDGIO_OFFSET UNITYSDK_OFFSET(0x1B5F4C60)
#define BONGEDMOKEL_LJFIMAMKHOM_OFFSET UNITYSDK_OFFSET(0x1B5F4CF0)
#define BONGEDMOKEL_ONIJMMECOBB_OFFSET UNITYSDK_OFFSET(0x1B5F4B20)
#define BONGEDMOKEL_OPNFIDPPPDK_OFFSET UNITYSDK_OFFSET(0x1B5F46F0)
#define BONGEDMOKEL_PEKJHMCPMGN_OFFSET UNITYSDK_OFFSET(0x1B5F4C00)
#define BONGEDMOKEL_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1B5F40D0)
#define BONGEDMOKEL__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1B5F4230)
#define BONGEDMOKEL__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B5F3840)
#define BONGEDMOKEL__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B5F4140)
#define BONGEDMOKEL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B5F4270)

inline static constexpr unsigned int BONGEDMOKEL_TypeDefinitionIndex = 74271;

	class BONGEDMOKEL : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedText* ADCDJEOKDOO; // 0x60
		::RPG::Client::MonoUIColorSwitcher* OGFPMFKHBKN; // 0x68
		::UnityEngine::Animation* GCDMOAPELDM; // 0x70
		::UnityEngine::Transform* PAOHDLAJKOO; // 0x78
		::RPG::Client::LocalizedText* JJICDFFEJIM; // 0x80
		::UnityEngine::Transform* FHDELHMLMFO; // 0x88
		::RPG::Client::LocalizedTextSDF* LFAIFMPKKLG; // 0x90
		::RPG::Client::LocalizedTextSDF* KIHEDHADLHI; // 0x98
		::UnityEngine::Transform* JFBPCBAMNOF; // 0xA0
		::UnityEngine::Animation* AJIKJPEJPIC; // 0xA8
		::RPG::Client::LocalizedTextSDF* NNDILJHJPHB; // 0xB0
		::UnityEngine::Animation* MDODHGCNCOG; // 0xB8
		::UnityEngine::Transform* PCCKAHFEDNO; // 0xC0
		::UnityEngine::Transform* FOBGCFIHIHE; // 0xC8
		::RPG::Client::LocalizedTextSDF* AMDKLJCCMBG; // 0xD0
		::UnityEngine::Transform* PHCAJAONLHC; // 0xD8
		::UnityEngine::Animation* LMPILGBHHGK; // 0xE0
		::UnityEngine::Transform* EFIPPGDEIOA; // 0xE8
		::UnityEngine::Transform* GGAKEEEEBEN; // 0xF0
		::UnityEngine::Transform* MEFPAPDMPHD; // 0xF8
		::System::Int32 _Index_k__BackingField; // 0x100
		::System::Boolean FELGPJHANPD; // 0x104
		::System::Boolean LDBJJIDHOKM; // 0x105
		::System::Boolean OEHKPCJHCIL; // 0x106
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
