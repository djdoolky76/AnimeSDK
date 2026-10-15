#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAOEEDDAPIK.h"
#include "unitysdk/GJPBCNIIEOB_Mode.h"
#include "unitysdk/IGKFNIEJGLM.h"
class ANABDAAAEEA;
class BNJCIKPAHIH;
class CAOEEDDAPIK_NNBFMHKHMKO;
class EBCNJEFOMCG;
class GAHPNAEGACM;
namespace RPG::Client { class ShowAttackTimeParam; }
namespace RPG::Client { class UIDynamicEffect; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define IBIIMGJDFOC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15E3A4C0)
#define IBIIMGJDFOC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15E3A5B0)
#define IBIIMGJDFOC_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x15E3A270)
#define IBIIMGJDFOC_CTOR_OFFSET UNITYSDK_OFFSET(0x15E3A680)
#define IBIIMGJDFOC_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15E390F0)
#define IBIIMGJDFOC_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0x15E39B30)
#define IBIIMGJDFOC_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15E39220)
#define IBIIMGJDFOC_ENAIBJGFMFI_OFFSET UNITYSDK_OFFSET(0x15E39D70)
#define IBIIMGJDFOC_FEMKPKFKCMG_OFFSET UNITYSDK_OFFSET(0x15E3A040)
#define IBIIMGJDFOC_ILMPMNJDDPA_OFFSET UNITYSDK_OFFSET(0x15E39860)
#define IBIIMGJDFOC_JFBDFHPOEEK_OFFSET UNITYSDK_OFFSET(0x15E3A3A0)
#define IBIIMGJDFOC_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x15E394C0)
#define IBIIMGJDFOC_JIGAHNHGJDB_OFFSET UNITYSDK_OFFSET(0x15E3A110)
#define IBIIMGJDFOC_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x15E39270)
#define IBIIMGJDFOC_KMIEEJEHMIC_OFFSET UNITYSDK_OFFSET(0x15E39F90)
#define IBIIMGJDFOC_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x15E39720)
#define IBIIMGJDFOC_NDHIDNBEECG_OFFSET UNITYSDK_OFFSET(0x15E3A400)
#define IBIIMGJDFOC_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x15E395F0)
#define IBIIMGJDFOC_PADHGKJFDGD_OFFSET UNITYSDK_OFFSET(0x15E39E10)
#define IBIIMGJDFOC_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x15E398B0)
#define IBIIMGJDFOC__ONBIND_OFFSET UNITYSDK_OFFSET(0x15E38DB0)
#define IBIIMGJDFOC__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15E39540)

	class IBIIMGJDFOC : public ::CAOEEDDAPIK
	{
	public:
		::UnityEngine::Animation* BAFAAEFEBPJ; // 0xE0
		::EBCNJEFOMCG* PNBFAOANEKC; // 0xE8
		::UnityEngine::UI::Text* HEFGFLKHACI; // 0xF0
		::UnityEngine::Transform* KFHLFCJEAFG; // 0xF8
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x100
		::RPG::Client::UIDynamicEffect* NHJJGPIMAIE; // 0x108
		::ANABDAAAEEA* CMKFDMKBPDD; // 0x110
		::UnityEngine::UI::Image* HHOEIEEFKPH; // 0x118
		::UnityEngine::Transform* HEFBPOGHMLH; // 0x120
		::CAOEEDDAPIK_NNBFMHKHMKO* APPIHABBCGK; // 0x128
		::System::String* DIDHOFMKIFH; // 0x130
		::BNJCIKPAHIH* HJMKFAGJIJK; // 0x138
		::UnityEngine::Transform* NJFPFGJBLMK; // 0x140
		::UnityEngine::UI::Image* FCBPPBCLCDA; // 0x148
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x150
		::System::Boolean PJEGOGJDMBH; // 0x158
		::System::Byte _padding0[0x3];
		::System::Int32 KFBDIEABBJM; // 0x15C
		::GJPBCNIIEOB_Mode BHJDJDPLCLP; // 0x160
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object COBNDDMAALL; // 0x0
		// static const ::System::String* COILMFNDLAC; // 0x0
		// static const ::System::String* OKBMHAMONMK; // 0x0
		// static const ::System::String* KDODNCFEJFD; // 0x0
		// static const ::System::String* NMHICHPNEHN; // 0x0
		// static const ::System::String* FHDKIHEPAHF; // 0x0
		// static const ::System::String* LHANMKCMPCA; // 0x0
		// static const ::System::String* DEKOLFNNKCJ; // 0x0
		// static const ::System::String* OAKFDGDMHKE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIIMGJDFOC__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIIMGJDFOC__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void ENAIBJGFMFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_ENAIBJGFMFI_OFFSET))(this);
		}

		::System::Void PADHGKJFDGD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_PADHGKJFDGD_OFFSET))(this, a1);
		}

		::System::Void KMIEEJEHMIC(::RPG::Client::ShowAttackTimeParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowAttackTimeParam*))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_KMIEEJEHMIC_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void ILMPMNJDDPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_ILMPMNJDDPA_OFFSET))(this);
		}

		::System::Void DOEDECKEMEF(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_DOEDECKEMEF_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void JIGAHNHGJDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_JIGAHNHGJDB_OFFSET))(this);
		}

		::System::Void FEMKPKFKCMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_FEMKPKFKCMG_OFFSET))(this);
		}

		::System::Void JFBDFHPOEEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_JFBDFHPOEEK_OFFSET))(this, a1);
		}

		::System::Void NDHIDNBEECG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_NDHIDNBEECG_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIIMGJDFOC_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
