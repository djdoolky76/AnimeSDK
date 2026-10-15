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

#define IBIIMGJDFOC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15E2D4A0)
#define IBIIMGJDFOC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15E2D590)
#define IBIIMGJDFOC_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x15E2D250)
#define IBIIMGJDFOC_CTOR_OFFSET UNITYSDK_OFFSET(0x15E2D660)
#define IBIIMGJDFOC_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15E2C0E0)
#define IBIIMGJDFOC_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0x15E2CB10)
#define IBIIMGJDFOC_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15E2C200)
#define IBIIMGJDFOC_ENAIBJGFMFI_OFFSET UNITYSDK_OFFSET(0x15E2CD50)
#define IBIIMGJDFOC_FEMKPKFKCMG_OFFSET UNITYSDK_OFFSET(0x15E2D020)
#define IBIIMGJDFOC_ILMPMNJDDPA_OFFSET UNITYSDK_OFFSET(0x15E2C840)
#define IBIIMGJDFOC_JFBDFHPOEEK_OFFSET UNITYSDK_OFFSET(0x15E2D380)
#define IBIIMGJDFOC_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x15E2C490)
#define IBIIMGJDFOC_JIGAHNHGJDB_OFFSET UNITYSDK_OFFSET(0x15E2D0F0)
#define IBIIMGJDFOC_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x15E2C250)
#define IBIIMGJDFOC_KMIEEJEHMIC_OFFSET UNITYSDK_OFFSET(0x15E2CF70)
#define IBIIMGJDFOC_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x15E2C700)
#define IBIIMGJDFOC_NDHIDNBEECG_OFFSET UNITYSDK_OFFSET(0x15E2D3E0)
#define IBIIMGJDFOC_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x15E2C5C0)
#define IBIIMGJDFOC_PADHGKJFDGD_OFFSET UNITYSDK_OFFSET(0x15E2CDF0)
#define IBIIMGJDFOC_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x15E2C890)
#define IBIIMGJDFOC__ONBIND_OFFSET UNITYSDK_OFFSET(0x15E2BDA0)
#define IBIIMGJDFOC__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15E2C510)

inline static constexpr unsigned int IBIIMGJDFOC_TypeDefinitionIndex = 71276;

	class IBIIMGJDFOC : public ::CAOEEDDAPIK
	{
	public:
		::UnityEngine::Transform* KFHLFCJEAFG; // 0xE0
		::EBCNJEFOMCG* PNBFAOANEKC; // 0xE8
		::UnityEngine::UI::Image* HHOEIEEFKPH; // 0xF0
		::CAOEEDDAPIK_NNBFMHKHMKO* APPIHABBCGK; // 0xF8
		::RPG::Client::UIDynamicEffect* NHJJGPIMAIE; // 0x100
		::UnityEngine::Animation* BAFAAEFEBPJ; // 0x108
		::UnityEngine::UI::Image* FCBPPBCLCDA; // 0x110
		::ANABDAAAEEA* CMKFDMKBPDD; // 0x118
		::UnityEngine::UI::Text* HEFGFLKHACI; // 0x120
		::System::String* DIDHOFMKIFH; // 0x128
		::UnityEngine::Transform* NJFPFGJBLMK; // 0x130
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x138
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x140
		::UnityEngine::Transform* HEFBPOGHMLH; // 0x148
		::BNJCIKPAHIH* HJMKFAGJIJK; // 0x150
		::GJPBCNIIEOB_Mode BHJDJDPLCLP; // 0x158
		::System::Int32 KFBDIEABBJM; // 0x15C
		::System::Boolean PJEGOGJDMBH; // 0x160
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
