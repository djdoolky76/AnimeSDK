#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/GJPBCNIIEOB_Mode.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/IGKFNIEJGLM.h"
class ANABDAAAEEA;
class BNCEIPFBBGM;
class CAOEEDDAPIK_NNBFMHKHMKO;
class DGMADGGFLIJ;
class GAHPNAEGACM;
class GEDMHFPPBHN;
class MADHNHEMBOJ;
namespace RPG::Client { class UIDynamicEffect; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define AGHKBJMFFJE_AADBBOBAPOD_OFFSET UNITYSDK_OFFSET(0xCF2B0C0)
#define AGHKBJMFFJE_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xCF2AAB0)
#define AGHKBJMFFJE_BNFEMIPLKDA_OFFSET UNITYSDK_OFFSET(0xCF2AFD0)
#define AGHKBJMFFJE_CTOR_OFFSET UNITYSDK_OFFSET(0xCF2B6B0)
#define AGHKBJMFFJE_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xCF2A980)
#define AGHKBJMFFJE_JFBDFHPOEEK_OFFSET UNITYSDK_OFFSET(0xCF2B650)
#define AGHKBJMFFJE_JIGAHNHGJDB_OFFSET UNITYSDK_OFFSET(0xCF2B230)
#define AGHKBJMFFJE_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xCF2AB50)
#define AGHKBJMFFJE_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0xCF2B5E0)
#define AGHKBJMFFJE_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xCF2B130)
#define AGHKBJMFFJE_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCF2ACD0)
#define AGHKBJMFFJE_MHLMDMKFOFG_OFFSET UNITYSDK_OFFSET(0xCF2B560)
#define AGHKBJMFFJE_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xCF2AA50)
#define AGHKBJMFFJE_PADHGKJFDGD_OFFSET UNITYSDK_OFFSET(0xCF2B4F0)
#define AGHKBJMFFJE_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xCF2AD50)
#define AGHKBJMFFJE__ONBIND_OFFSET UNITYSDK_OFFSET(0xCF2A660)
#define AGHKBJMFFJE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xCF2A9F0)

inline static constexpr unsigned int AGHKBJMFFJE_TypeDefinitionIndex = 71275;

	class AGHKBJMFFJE : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIDynamicEffect* CPGINCJECEM; // 0x60
		::DGMADGGFLIJ* GEJPOMIFPDL; // 0x68
		::ANABDAAAEEA* CMKFDMKBPDD; // 0x70
		::UnityEngine::Transform* NJFPFGJBLMK; // 0x78
		::RPG::Client::UIDynamicEffect* EPMJCKHKPFC; // 0x80
		::System::Action_1<::System::String*>* ONHFOPOHPAP; // 0x88
		::UnityEngine::Transform* FKDLOPMDHLO; // 0x90
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x98
		::BNCEIPFBBGM* CGLMAOHLOJD; // 0xA0
		::GEDMHFPPBHN* KPFKDKLCFKG; // 0xA8
		::UnityEngine::Animation* EGLLKGDOIEP; // 0xB0
		::System::Boolean IDBHEIBEGBA; // 0xB8
		::System::Byte _padding0[0x3];
		::RPG::Client::ActionBarItemUIStyle IACCEDNBPJL; // 0xBC
		// static const ::System::String* LHANMKCMPCA; // 0x0
		// static const ::System::String* JMHMJIBDKMI; // 0x0
		// static const ::System::String* DEKOLFNNKCJ; // 0x0
		// static const ::System::String* BLBNCJJHLMC; // 0x0
		// static const ::System::String* EOCIPFLLJML; // 0x0
		// static const ::System::String* NMFKDBLBPCH; // 0x0
		// static const ::System::String* OAKFDGDMHKE; // 0x0
		// static const ::System::String* NGBKDINBMNM; // 0x0
		// static const ::System::String* AFOHEGAMLFM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHKBJMFFJE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHKBJMFFJE__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + AGHKBJMFFJE_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHKBJMFFJE__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + AGHKBJMFFJE_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHKBJMFFJE_MFCDKJIHDEH_OFFSET))(this);
		}

		::GJPBCNIIEOB_Mode PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::GJPBCNIIEOB_Mode(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + AGHKBJMFFJE_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void BNFEMIPLKDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHKBJMFFJE_BNFEMIPLKDA_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::RPG::Client::ActionBarItemUIStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + AGHKBJMFFJE_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void PADHGKJFDGD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGHKBJMFFJE_PADHGKJFDGD_OFFSET))(this, a1);
		}

		::System::Boolean MHLMDMKFOFG(::RPG::Client::ActionBarItemUIStyle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + AGHKBJMFFJE_MHLMDMKFOFG_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + AGHKBJMFFJE_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void LACAPACNEPI(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + AGHKBJMFFJE_LACAPACNEPI_OFFSET))(this, a1);
		}

		::System::Void JFBDFHPOEEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGHKBJMFFJE_JFBDFHPOEEK_OFFSET))(this, a1);
		}

		::System::Void AADBBOBAPOD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGHKBJMFFJE_AADBBOBAPOD_OFFSET))(this, a1);
		}

		::System::Void JIGAHNHGJDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGHKBJMFFJE_JIGAHNHGJDB_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGHKBJMFFJE_BLILDBCEGFH_OFFSET))(this, a1);
		}

	};
