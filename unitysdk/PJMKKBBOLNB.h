#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/GJPBCNIIEOB_Mode.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CAOEEDDAPIK_NNBFMHKHMKO;
class GAHPNAEGACM;
class GEDMHFPPBHN;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PJMKKBBOLNB_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xC294B60)
#define PJMKKBBOLNB_CTOR_OFFSET UNITYSDK_OFFSET(0xC294F60)
#define PJMKKBBOLNB_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC294A00)
#define PJMKKBBOLNB_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC294BC0)
#define PJMKKBBOLNB_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0xC294F00)
#define PJMKKBBOLNB_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xC294C40)
#define PJMKKBBOLNB_MHLMDMKFOFG_OFFSET UNITYSDK_OFFSET(0xC294E00)
#define PJMKKBBOLNB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC294AC0)
#define PJMKKBBOLNB_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xC294C80)
#define PJMKKBBOLNB__ONBIND_OFFSET UNITYSDK_OFFSET(0xC2949A0)
#define PJMKKBBOLNB__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC294A70)

inline static constexpr unsigned int PJMKKBBOLNB_TypeDefinitionIndex = 71299;

	class PJMKKBBOLNB : public ::FMPCODLIOLG
	{
	public:
		::System::Action_1<::System::String*>* ONHFOPOHPAP; // 0x60
		::GEDMHFPPBHN* KPFKDKLCFKG; // 0x68
		::System::Boolean IDBHEIBEGBA; // 0x70
		::System::Byte _padding0[0x3];
		::RPG::Client::ActionBarItemUIStyle IACCEDNBPJL; // 0x74
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
