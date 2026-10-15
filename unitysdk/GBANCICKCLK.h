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
namespace RPG::GameCore { class SetShenJunActionBar; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define GBANCICKCLK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x159471A0)
#define GBANCICKCLK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x159472E0)
#define GBANCICKCLK_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x15946E70)
#define GBANCICKCLK_CTOR_OFFSET UNITYSDK_OFFSET(0x15947400)
#define GBANCICKCLK_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15945D60)
#define GBANCICKCLK_DNMPJPHJJNC_OFFSET UNITYSDK_OFFSET(0x159470C0)
#define GBANCICKCLK_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0x15946730)
#define GBANCICKCLK_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15945E90)
#define GBANCICKCLK_FEMKPKFKCMG_OFFSET UNITYSDK_OFFSET(0x15946BA0)
#define GBANCICKCLK_ILMPMNJDDPA_OFFSET UNITYSDK_OFFSET(0x15946460)
#define GBANCICKCLK_JFBDFHPOEEK_OFFSET UNITYSDK_OFFSET(0x15946FA0)
#define GBANCICKCLK_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x159460D0)
#define GBANCICKCLK_JIGAHNHGJDB_OFFSET UNITYSDK_OFFSET(0x15946D10)
#define GBANCICKCLK_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x15945EE0)
#define GBANCICKCLK_KMIEEJEHMIC_OFFSET UNITYSDK_OFFSET(0x15946AF0)
#define GBANCICKCLK_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x15946320)
#define GBANCICKCLK_NDHIDNBEECG_OFFSET UNITYSDK_OFFSET(0x15947000)
#define GBANCICKCLK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x159461F0)
#define GBANCICKCLK_OAODPPPONBG_OFFSET UNITYSDK_OFFSET(0x15946CC0)
#define GBANCICKCLK_PADHGKJFDGD_OFFSET UNITYSDK_OFFSET(0x15946970)
#define GBANCICKCLK_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x159464B0)
#define GBANCICKCLK__ONBIND_OFFSET UNITYSDK_OFFSET(0x15945AE0)
#define GBANCICKCLK__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15946150)

inline static constexpr unsigned int GBANCICKCLK_TypeDefinitionIndex = 71291;

	class GBANCICKCLK : public ::CAOEEDDAPIK
	{
	public:
		::RPG::Client::UIDynamicEffect* NHJJGPIMAIE; // 0xE0
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xE8
		::UnityEngine::UI::Text* HEFGFLKHACI; // 0xF0
		::BNJCIKPAHIH* HJMKFAGJIJK; // 0xF8
		::System::String* DIDHOFMKIFH; // 0x100
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x108
		::CAOEEDDAPIK_NNBFMHKHMKO* APPIHABBCGK; // 0x110
		::EBCNJEFOMCG* PNBFAOANEKC; // 0x118
		::UnityEngine::Transform* NJFPFGJBLMK; // 0x120
		::ANABDAAAEEA* CMKFDMKBPDD; // 0x128
		::UnityEngine::UI::Image* HHOEIEEFKPH; // 0x130
		::UnityEngine::UI::Image* FCBPPBCLCDA; // 0x138
		::UnityEngine::Animation* BAFAAEFEBPJ; // 0x140
		::GJPBCNIIEOB_Mode BHJDJDPLCLP; // 0x148
		::System::Int32 KFBDIEABBJM; // 0x14C
		::System::Boolean PJEGOGJDMBH; // 0x150
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object LENEPKOMMDG; // 0x0
		// static const ::System::String* COILMFNDLAC; // 0x0
		// static const ::System::String* OKBMHAMONMK; // 0x0
		// static const ::System::String* MGCJIEACIEJ; // 0x0
		// static const ::System::String* KDODNCFEJFD; // 0x0
		// static const ::System::String* NMHICHPNEHN; // 0x0
		// static const ::System::String* FHDKIHEPAHF; // 0x0
		// static const ::System::String* LHANMKCMPCA; // 0x0
		// static const ::System::String* DEKOLFNNKCJ; // 0x0
		// static const ::System::String* OAKFDGDMHKE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBANCICKCLK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBANCICKCLK__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GBANCICKCLK_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBANCICKCLK_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBANCICKCLK_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBANCICKCLK__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GBANCICKCLK_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBANCICKCLK_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + GBANCICKCLK_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void PADHGKJFDGD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBANCICKCLK_PADHGKJFDGD_OFFSET))(this, a1);
		}

		::System::Void KMIEEJEHMIC(::RPG::Client::ShowAttackTimeParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowAttackTimeParam*))((::PBYTE)hIl2Cpp + GBANCICKCLK_KMIEEJEHMIC_OFFSET))(this, a1);
		}

		::System::Void OAODPPPONBG(::RPG::GameCore::SetShenJunActionBar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetShenJunActionBar*))((::PBYTE)hIl2Cpp + GBANCICKCLK_OAODPPPONBG_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBANCICKCLK_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void ILMPMNJDDPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBANCICKCLK_ILMPMNJDDPA_OFFSET))(this);
		}

		::System::Void DOEDECKEMEF(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + GBANCICKCLK_DOEDECKEMEF_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBANCICKCLK_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void JIGAHNHGJDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBANCICKCLK_JIGAHNHGJDB_OFFSET))(this);
		}

		::System::Void FEMKPKFKCMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBANCICKCLK_FEMKPKFKCMG_OFFSET))(this);
		}

		::System::Void JFBDFHPOEEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBANCICKCLK_JFBDFHPOEEK_OFFSET))(this, a1);
		}

		::System::Void NDHIDNBEECG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBANCICKCLK_NDHIDNBEECG_OFFSET))(this, a1);
		}

		::System::Void DNMPJPHJJNC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBANCICKCLK_DNMPJPHJJNC_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBANCICKCLK_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBANCICKCLK_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
