#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BANDDFEHONE;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define PGNDPPPFEEA_BNEKJHADLNK_OFFSET UNITYSDK_OFFSET(0xC2226C0)
#define PGNDPPPFEEA_CTOR_OFFSET UNITYSDK_OFFSET(0xC222750)
#define PGNDPPPFEEA_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC221F30)
#define PGNDPPPFEEA_EHODDIDPHII_OFFSET UNITYSDK_OFFSET(0xC2223F0)
#define PGNDPPPFEEA_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC221FA0)
#define PGNDPPPFEEA_ELHDKDOJHNK_OFFSET UNITYSDK_OFFSET(0xC222440)
#define PGNDPPPFEEA_FAGOCNEOBLD_OFFSET UNITYSDK_OFFSET(0xC222570)
#define PGNDPPPFEEA_FNFEMGIBECE_OFFSET UNITYSDK_OFFSET(0xC222500)
#define PGNDPPPFEEA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC2224A0)
#define PGNDPPPFEEA_MIAFHKJKAJM_OFFSET UNITYSDK_OFFSET(0xC2225C0)
#define PGNDPPPFEEA_NDOANFBMLOH_OFFSET UNITYSDK_OFFSET(0xC222670)
#define PGNDPPPFEEA_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC2220B0)
#define PGNDPPPFEEA__ONBIND_OFFSET UNITYSDK_OFFSET(0xC221E90)

inline static constexpr unsigned int PGNDPPPFEEA_TypeDefinitionIndex = 72172;

	class PGNDPPPFEEA : public ::FMPCODLIOLG
	{
	public:
		::BANDDFEHONE* EEHODNKAAMH; // 0x60
		::RPG::Client::RPGAnimationEvent* LHMIOEDNCAJ; // 0x68
		::UnityEngine::Animation* KCOAILOHDND; // 0x70
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x78
		::System::Action_1<::BANDDFEHONE*>* LJFACEIHGKL; // 0x80
		::System::Boolean HMLJOCBCHKG; // 0x88
		// static const ::System::String* PKGOOJBGLEG; // 0x0
		// static const ::System::String* KBDENNHLLOC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNDPPPFEEA_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNDPPPFEEA__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PGNDPPPFEEA_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNDPPPFEEA_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::BANDDFEHONE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BANDDFEHONE*))((::PBYTE)hIl2Cpp + PGNDPPPFEEA_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void ELHDKDOJHNK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PGNDPPPFEEA_ELHDKDOJHNK_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNDPPPFEEA_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void FNFEMGIBECE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNDPPPFEEA_FNFEMGIBECE_OFFSET))(this);
		}

		::System::Boolean FAGOCNEOBLD(::BANDDFEHONE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BANDDFEHONE*))((::PBYTE)hIl2Cpp + PGNDPPPFEEA_FAGOCNEOBLD_OFFSET))(this, a1);
		}

		::System::Void MIAFHKJKAJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNDPPPFEEA_MIAFHKJKAJM_OFFSET))(this);
		}

		::System::Void EHODDIDPHII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNDPPPFEEA_EHODDIDPHII_OFFSET))(this);
		}

		::System::Void BNEKJHADLNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNDPPPFEEA_BNEKJHADLNK_OFFSET))(this);
		}

		::System::Boolean NDOANFBMLOH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNDPPPFEEA_NDOANFBMLOH_OFFSET))(this);
		}

	};
