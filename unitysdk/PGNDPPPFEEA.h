#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BANDDFEHONE;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define PGNDPPPFEEA_BNEKJHADLNK_OFFSET UNITYSDK_OFFSET(0x16D9F1E0)
#define PGNDPPPFEEA_CTOR_OFFSET UNITYSDK_OFFSET(0x16D9F270)
#define PGNDPPPFEEA_EHODDIDPHII_OFFSET UNITYSDK_OFFSET(0x16D9EF00)
#define PGNDPPPFEEA_ELHDKDOJHNK_OFFSET UNITYSDK_OFFSET(0x16D9EF50)
#define PGNDPPPFEEA_FAGOCNEOBLD_OFFSET UNITYSDK_OFFSET(0x16D9F080)
#define PGNDPPPFEEA_FNFEMGIBECE_OFFSET UNITYSDK_OFFSET(0x16D9F010)
#define PGNDPPPFEEA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16D9EFB0)
#define PGNDPPPFEEA_MIAFHKJKAJM_OFFSET UNITYSDK_OFFSET(0x16D9F0E0)
#define PGNDPPPFEEA_NDOANFBMLOH_OFFSET UNITYSDK_OFFSET(0x16D9F190)
#define PGNDPPPFEEA_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x16D9EBC0)
#define PGNDPPPFEEA__ONBIND_OFFSET UNITYSDK_OFFSET(0x16D9E890)
#define PGNDPPPFEEA__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16D9EA50)
#define PGNDPPPFEEA__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16D9EAB0)

inline static constexpr unsigned int PGNDPPPFEEA_TypeDefinitionIndex = 74236;

	class PGNDPPPFEEA : public ::FMPCODLIOLG
	{
	public:
		::System::Action_1<::BANDDFEHONE*>* LJFACEIHGKL; // 0x60
		::UnityEngine::Animation* KCOAILOHDND; // 0x68
		::RPG::Client::RPGAnimationEvent* LHMIOEDNCAJ; // 0x70
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x78
		::BANDDFEHONE* EEHODNKAAMH; // 0x80
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PGNDPPPFEEA__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNDPPPFEEA__SETUPVIEW_OFFSET))(this);
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
