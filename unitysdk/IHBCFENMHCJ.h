#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/GJPBCNIIEOB_Mode.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BNCEIPFBBGM;
class CAOEEDDAPIK_NNBFMHKHMKO;
class DGMADGGFLIJ;
class GAHPNAEGACM;
class GEDMHFPPBHN;
class MADHNHEMBOJ;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define IHBCFENMHCJ_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x16416D70)
#define IHBCFENMHCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16417380)
#define IHBCFENMHCJ_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x16416C50)
#define IHBCFENMHCJ_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x16416E10)
#define IHBCFENMHCJ_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0x16417310)
#define IHBCFENMHCJ_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x164171A0)
#define IHBCFENMHCJ_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x16416F00)
#define IHBCFENMHCJ_MHLMDMKFOFG_OFFSET UNITYSDK_OFFSET(0x16417290)
#define IHBCFENMHCJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x16416D10)
#define IHBCFENMHCJ_PADHGKJFDGD_OFFSET UNITYSDK_OFFSET(0x16417220)
#define IHBCFENMHCJ_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x16416F80)
#define IHBCFENMHCJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x16416B00)
#define IHBCFENMHCJ__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16416CC0)

	class IHBCFENMHCJ : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::GameObject* GECNDFGMHAP; // 0x60
		::BNCEIPFBBGM* CGLMAOHLOJD; // 0x68
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x70
		::DGMADGGFLIJ* GEJPOMIFPDL; // 0x78
		::System::Action* ONHFOPOHPAP; // 0x80
		::GEDMHFPPBHN* KPFKDKLCFKG; // 0x88
		::System::Boolean IDBHEIBEGBA; // 0x90
		::System::Byte _padding0[0x3];
		::RPG::Client::ActionBarItemUIStyle IACCEDNBPJL; // 0x94
		// static const ::System::String* NMFKDBLBPCH; // 0x0
		// static const ::System::String* JJDJIMIOKAC; // 0x0
		// static const ::System::String* NGBKDINBMNM; // 0x0
		// static const ::System::String* CECIENPNBOF; // 0x0
		// static const ::System::String* BLBNCJJHLMC; // 0x0
		// static const ::System::String* PIENAGHGKCI; // 0x0
		// static const ::System::String* JJKFIOFCAJJ; // 0x0
		// static const ::System::String* KPAAFLLEBLB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBCFENMHCJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBCFENMHCJ__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IHBCFENMHCJ_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBCFENMHCJ__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + IHBCFENMHCJ_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBCFENMHCJ_MFCDKJIHDEH_OFFSET))(this);
		}

		::GJPBCNIIEOB_Mode PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::GJPBCNIIEOB_Mode(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + IHBCFENMHCJ_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH(::RPG::Client::ActionBarItemUIStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + IHBCFENMHCJ_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void PADHGKJFDGD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHBCFENMHCJ_PADHGKJFDGD_OFFSET))(this, a1);
		}

		::System::Boolean MHLMDMKFOFG(::RPG::Client::ActionBarItemUIStyle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + IHBCFENMHCJ_MHLMDMKFOFG_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHBCFENMHCJ_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + IHBCFENMHCJ_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void LACAPACNEPI(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + IHBCFENMHCJ_LACAPACNEPI_OFFSET))(this, a1);
		}

	};
