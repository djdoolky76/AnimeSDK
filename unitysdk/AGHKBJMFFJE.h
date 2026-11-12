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

#define AGHKBJMFFJE_AADBBOBAPOD_OFFSET UNITYSDK_OFFSET(0xD5E93D0)
#define AGHKBJMFFJE_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xD5E8DA0)
#define AGHKBJMFFJE_BNFEMIPLKDA_OFFSET UNITYSDK_OFFSET(0xD5E92E0)
#define AGHKBJMFFJE_CTOR_OFFSET UNITYSDK_OFFSET(0xD5E99C0)
#define AGHKBJMFFJE_JFBDFHPOEEK_OFFSET UNITYSDK_OFFSET(0xD5E9960)
#define AGHKBJMFFJE_JIGAHNHGJDB_OFFSET UNITYSDK_OFFSET(0xD5E9540)
#define AGHKBJMFFJE_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD5E8E50)
#define AGHKBJMFFJE_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0xD5E98F0)
#define AGHKBJMFFJE_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xD5E9440)
#define AGHKBJMFFJE_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xD5E8FE0)
#define AGHKBJMFFJE_MHLMDMKFOFG_OFFSET UNITYSDK_OFFSET(0xD5E9870)
#define AGHKBJMFFJE_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xD5E8D40)
#define AGHKBJMFFJE_PADHGKJFDGD_OFFSET UNITYSDK_OFFSET(0xD5E9800)
#define AGHKBJMFFJE_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xD5E9060)
#define AGHKBJMFFJE__ONBIND_OFFSET UNITYSDK_OFFSET(0xD5E8860)
#define AGHKBJMFFJE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xD5E8CE0)
#define AGHKBJMFFJE__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xD5E8C70)

inline static constexpr unsigned int AGHKBJMFFJE_TypeDefinitionIndex = 73253;

	class AGHKBJMFFJE : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* EGLLKGDOIEP; // 0x60
		::RPG::Client::UIDynamicEffect* EPMJCKHKPFC; // 0x68
		::RPG::Client::UIDynamicEffect* CPGINCJECEM; // 0x70
		::ANABDAAAEEA* CMKFDMKBPDD; // 0x78
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x80
		::BNCEIPFBBGM* CGLMAOHLOJD; // 0x88
		::DGMADGGFLIJ* GEJPOMIFPDL; // 0x90
		::System::Action_1<::System::String*>* ONHFOPOHPAP; // 0x98
		::GEDMHFPPBHN* KPFKDKLCFKG; // 0xA0
		::UnityEngine::Transform* FKDLOPMDHLO; // 0xA8
		::UnityEngine::Transform* NJFPFGJBLMK; // 0xB0
		::RPG::Client::ActionBarItemUIStyle IACCEDNBPJL; // 0xB8
		::System::Boolean IDBHEIBEGBA; // 0xBC
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + AGHKBJMFFJE__ONINITPARAMS_OFFSET))(this, a1);
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
