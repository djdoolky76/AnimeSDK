#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define EELDIPDFMNB_ACPEGOAKBDB_OFFSET UNITYSDK_OFFSET(0x13A34730)
#define EELDIPDFMNB_CTOR_OFFSET UNITYSDK_OFFSET(0x13A34920)
#define EELDIPDFMNB_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x13A33FF0)
#define EELDIPDFMNB_HDCLHFMCKNI_OFFSET UNITYSDK_OFFSET(0x13A343E0)
#define EELDIPDFMNB_HGCGEDEBEFJ_OFFSET UNITYSDK_OFFSET(0x13A345F0)
#define EELDIPDFMNB_IAPHKLLIDAJ_OFFSET UNITYSDK_OFFSET(0x13A348A0)
#define EELDIPDFMNB_JCAPNOBKEGC_OFFSET UNITYSDK_OFFSET(0x13A34280)
#define EELDIPDFMNB_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x13A341E0)
#define EELDIPDFMNB_MMHBFLPJDBP_OFFSET UNITYSDK_OFFSET(0x13A34380)
#define EELDIPDFMNB_NFNGKDMMOOC_OFFSET UNITYSDK_OFFSET(0x13A34170)
#define EELDIPDFMNB_OKIEJEGHDHJ_OFFSET UNITYSDK_OFFSET(0x13A347F0)
#define EELDIPDFMNB_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x13A34090)
#define EELDIPDFMNB_ONRETURN_OFFSET UNITYSDK_OFFSET(0x13A340E0)
#define EELDIPDFMNB__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x13A342F0)

inline static constexpr unsigned int EELDIPDFMNB_TypeDefinitionIndex = 71606;

	class EELDIPDFMNB : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::UnityEngine::RectTransform* KJOIKPFMLOE; // 0x68
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
		::System::Single IGGGPOBEEPK; // 0x78
		::System::Single KOLOABGLOFA; // 0x7C
		::System::Single NBCBLJAFBBJ; // 0x80
		// static const ::System::String* EDFBNBONLCF; // 0x0
		// static const ::System::String* KDODNCFEJFD; // 0x0
		// static const ::System::String* NMHICHPNEHN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDIPDFMNB_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + EELDIPDFMNB_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EELDIPDFMNB_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDIPDFMNB_ONRETURN_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EELDIPDFMNB_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDIPDFMNB__ONDISPOSE_OFFSET))(this);
		}

		::System::Void MMHBFLPJDBP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EELDIPDFMNB_MMHBFLPJDBP_OFFSET))(this, a1);
		}

		::System::Void HDCLHFMCKNI(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + EELDIPDFMNB_HDCLHFMCKNI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IAPHKLLIDAJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EELDIPDFMNB_IAPHKLLIDAJ_OFFSET))(this, a1);
		}

		::System::Void ACPEGOAKBDB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EELDIPDFMNB_ACPEGOAKBDB_OFFSET))(this, a1);
		}

		::System::Void OKIEJEGHDHJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EELDIPDFMNB_OKIEJEGHDHJ_OFFSET))(this, a1);
		}

		::System::Void HGCGEDEBEFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDIPDFMNB_HGCGEDEBEFJ_OFFSET))(this);
		}

		::System::Void NFNGKDMMOOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDIPDFMNB_NFNGKDMMOOC_OFFSET))(this);
		}

		::System::Void JCAPNOBKEGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDIPDFMNB_JCAPNOBKEGC_OFFSET))(this);
		}

	};
