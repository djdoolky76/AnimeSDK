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

#define CEONPKDKNHP_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xD35D270)
#define CEONPKDKNHP_CTOR_OFFSET UNITYSDK_OFFSET(0xD35D5C0)
#define CEONPKDKNHP_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD35D2D0)
#define CEONPKDKNHP_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0xD35D560)
#define CEONPKDKNHP_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xD35D350)
#define CEONPKDKNHP_MHLMDMKFOFG_OFFSET UNITYSDK_OFFSET(0xD35D460)
#define CEONPKDKNHP_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xD35D1D0)
#define CEONPKDKNHP_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xD35D390)
#define CEONPKDKNHP__ONBIND_OFFSET UNITYSDK_OFFSET(0xD35D0B0)
#define CEONPKDKNHP__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xD35D180)
#define CEONPKDKNHP__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xD35D110)

inline static constexpr unsigned int CEONPKDKNHP_TypeDefinitionIndex = 73248;

	class CEONPKDKNHP : public ::FMPCODLIOLG
	{
	public:
		::GEDMHFPPBHN* KPFKDKLCFKG; // 0x60
		::System::Action_1<::System::String*>* ONHFOPOHPAP; // 0x68
		::RPG::Client::ActionBarItemUIStyle IACCEDNBPJL; // 0x70
		::System::Boolean IDBHEIBEGBA; // 0x74
		// static const ::System::String* CFOFMMAEIJD; // 0x0
		// static const ::System::String* JJKFIOFCAJJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEONPKDKNHP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEONPKDKNHP__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CEONPKDKNHP__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEONPKDKNHP__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + CEONPKDKNHP_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEONPKDKNHP_MFCDKJIHDEH_OFFSET))(this);
		}

		::GJPBCNIIEOB_Mode PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::GJPBCNIIEOB_Mode(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + CEONPKDKNHP_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Boolean MHLMDMKFOFG(::RPG::Client::ActionBarItemUIStyle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + CEONPKDKNHP_MHLMDMKFOFG_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CEONPKDKNHP_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + CEONPKDKNHP_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void LACAPACNEPI(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + CEONPKDKNHP_LACAPACNEPI_OFFSET))(this, a1);
		}

	};
