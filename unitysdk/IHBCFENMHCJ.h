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
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define IHBCFENMHCJ_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x19F67420)
#define IHBCFENMHCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19F67A20)
#define IHBCFENMHCJ_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x19F674D0)
#define IHBCFENMHCJ_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0x19F679B0)
#define IHBCFENMHCJ_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x19F67840)
#define IHBCFENMHCJ_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x19F675C0)
#define IHBCFENMHCJ_MHLMDMKFOFG_OFFSET UNITYSDK_OFFSET(0x19F67930)
#define IHBCFENMHCJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x19F673C0)
#define IHBCFENMHCJ_PADHGKJFDGD_OFFSET UNITYSDK_OFFSET(0x19F678C0)
#define IHBCFENMHCJ_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x19F67640)
#define IHBCFENMHCJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x19F671A0)
#define IHBCFENMHCJ__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x19F67370)
#define IHBCFENMHCJ__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x19F67300)

inline static constexpr unsigned int IHBCFENMHCJ_TypeDefinitionIndex = 73231;

	class IHBCFENMHCJ : public ::FMPCODLIOLG
	{
	public:
		::System::Action_1<::System::String*>* ONHFOPOHPAP; // 0x60
		::GEDMHFPPBHN* KPFKDKLCFKG; // 0x68
		::UnityEngine::GameObject* GECNDFGMHAP; // 0x70
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x78
		::BNCEIPFBBGM* CGLMAOHLOJD; // 0x80
		::DGMADGGFLIJ* GEJPOMIFPDL; // 0x88
		::RPG::Client::ActionBarItemUIStyle IACCEDNBPJL; // 0x90
		::System::Boolean IDBHEIBEGBA; // 0x94
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IHBCFENMHCJ__ONINITPARAMS_OFFSET))(this, a1);
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
