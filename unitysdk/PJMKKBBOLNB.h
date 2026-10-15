#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/GJPBCNIIEOB_Mode.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CAOEEDDAPIK_NNBFMHKHMKO;
class GAHPNAEGACM;
class GEDMHFPPBHN;
namespace System { class Action; }
namespace System { class String; }

#define PJMKKBBOLNB_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xC29C580)
#define PJMKKBBOLNB_CTOR_OFFSET UNITYSDK_OFFSET(0xC29C980)
#define PJMKKBBOLNB_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC29C420)
#define PJMKKBBOLNB_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC29C5E0)
#define PJMKKBBOLNB_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0xC29C920)
#define PJMKKBBOLNB_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xC29C660)
#define PJMKKBBOLNB_MHLMDMKFOFG_OFFSET UNITYSDK_OFFSET(0xC29C820)
#define PJMKKBBOLNB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC29C4E0)
#define PJMKKBBOLNB_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xC29C6A0)
#define PJMKKBBOLNB__ONBIND_OFFSET UNITYSDK_OFFSET(0xC29C3C0)
#define PJMKKBBOLNB__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC29C490)

	class PJMKKBBOLNB : public ::FMPCODLIOLG
	{
	public:
		::GEDMHFPPBHN* KPFKDKLCFKG; // 0x60
		::System::Action* ONHFOPOHPAP; // 0x68
		::RPG::Client::ActionBarItemUIStyle IACCEDNBPJL; // 0x70
		::System::Boolean IDBHEIBEGBA; // 0x74
		// static const ::System::String* IOOKKPNGLPC; // 0x0
		// static const ::System::String* EBFOPODAMHB; // 0x0
		// static const ::System::String* KPAAFLLEBLB; // 0x0
		// static const ::System::String* PIENAGHGKCI; // 0x0
		// static const ::System::String* JJKFIOFCAJJ; // 0x0
		// static const ::System::String* JJDJIMIOKAC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMKKBBOLNB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMKKBBOLNB__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PJMKKBBOLNB_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMKKBBOLNB__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + PJMKKBBOLNB_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMKKBBOLNB_MFCDKJIHDEH_OFFSET))(this);
		}

		::GJPBCNIIEOB_Mode PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::GJPBCNIIEOB_Mode(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + PJMKKBBOLNB_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Boolean MHLMDMKFOFG(::RPG::Client::ActionBarItemUIStyle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + PJMKKBBOLNB_MHLMDMKFOFG_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + PJMKKBBOLNB_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void LACAPACNEPI(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + PJMKKBBOLNB_LACAPACNEPI_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PJMKKBBOLNB_BLILDBCEGFH_OFFSET))(this, a1);
		}

	};
