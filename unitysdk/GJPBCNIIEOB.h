#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAOEEDDAPIK.h"
#include "unitysdk/GJPBCNIIEOB_Mode.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AGHKBJMFFJE;
class BNJCIKPAHIH;
class CAOEEDDAPIK_NNBFMHKHMKO;
class CEONPKDKNHP;
class GAHPNAEGACM;
class GEDMHFPPBHN;
class IHBCFENMHCJ;
class OBOEBAGLNDH;
class PJMKKBBOLNB;
class PMMJMFOEBPN;
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define GJPBCNIIEOB_AEOEFCONMJD_OFFSET UNITYSDK_OFFSET(0x1A8BB770)
#define GJPBCNIIEOB_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x1A8BD2A0)
#define GJPBCNIIEOB_BFEDMKDIPAA_OFFSET UNITYSDK_OFFSET(0x1A8BBCF0)
#define GJPBCNIIEOB_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x1A8BD1B0)
#define GJPBCNIIEOB_CICKHGGMMCJ_OFFSET UNITYSDK_OFFSET(0x1A8BC910)
#define GJPBCNIIEOB_CILEMECEOPI_OFFSET UNITYSDK_OFFSET(0x1A8BCB50)
#define GJPBCNIIEOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8BD810)
#define GJPBCNIIEOB_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0x1A8BC450)
#define GJPBCNIIEOB_DPGHDBPBMHA_OFFSET UNITYSDK_OFFSET(0x1A8BBDC0)
#define GJPBCNIIEOB_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x1A8BB580)
#define GJPBCNIIEOB_EHACNGGOCDD_OFFSET UNITYSDK_OFFSET(0x1A8BD7C0)
#define GJPBCNIIEOB_ENAIBJGFMFI_OFFSET UNITYSDK_OFFSET(0x1A8BC7A0)
#define GJPBCNIIEOB_HJDALEKKPKD_OFFSET UNITYSDK_OFFSET(0x1A8BD700)
#define GJPBCNIIEOB_HPGGKEFMGDC_OFFSET UNITYSDK_OFFSET(0x1A8BCDF0)
#define GJPBCNIIEOB_ILMPMNJDDPA_OFFSET UNITYSDK_OFFSET(0x1A8BC0F0)
#define GJPBCNIIEOB_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x1A8BBD70)
#define GJPBCNIIEOB_JNHMEAMEMNA_OFFSET UNITYSDK_OFFSET(0x1A8BD4D0)
#define GJPBCNIIEOB_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1A8BB980)
#define GJPBCNIIEOB_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x1A8BC000)
#define GJPBCNIIEOB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1A8BBF20)
#define GJPBCNIIEOB_OBHGDOMDLLG_OFFSET UNITYSDK_OFFSET(0x1A8BD560)
#define GJPBCNIIEOB_ODDBCLCHLKE_OFFSET UNITYSDK_OFFSET(0x1A8BCD70)
#define GJPBCNIIEOB_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0x1A8BD330)
#define GJPBCNIIEOB_PADHGKJFDGD_OFFSET UNITYSDK_OFFSET(0x1A8BC5B0)
#define GJPBCNIIEOB_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x1A8BC200)
#define GJPBCNIIEOB__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A8BAE30)
#define GJPBCNIIEOB__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1A8BBE70)
#define GJPBCNIIEOB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1A8BB460)
#define GJPBCNIIEOB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A8BB8C0)
#define GJPBCNIIEOB___REFRESHTARGETMARK_B__39_0_OFFSET UNITYSDK_OFFSET(0x1A8BD840)

inline static constexpr unsigned int GJPBCNIIEOB_TypeDefinitionIndex = 73238;

	class GJPBCNIIEOB : public ::CAOEEDDAPIK
	{
	public:
		::UnityEngine::Transform* MBEHKDDLBIA; // 0xE0
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0xE8
		::PMMJMFOEBPN* PLGCMJNOFEO; // 0xF0
		::BNJCIKPAHIH* BCIIEAPGOJG; // 0xF8
		::UnityEngine::Transform* NEMHEFAPIKO; // 0x100
		::PJMKKBBOLNB* POMODDLEMAD; // 0x108
		::UnityEngine::Transform* HOAEDNGDJFK; // 0x110
		::CAOEEDDAPIK_NNBFMHKHMKO* APPIHABBCGK; // 0x118
		::OBOEBAGLNDH* ACBFBNJLABE; // 0x120
		::UnityEngine::Animation* IOPAFOBGGPI; // 0x128
		::UnityEngine::Animation* BAFAAEFEBPJ; // 0x130
		::AGHKBJMFFJE* CNOFGGPEGEA; // 0x138
		::IHBCFENMHCJ* HNLADALPLPG; // 0x140
		::CEONPKDKNHP* HLJOCEGGKKJ; // 0x148
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x150
		::System::String* DIDHOFMKIFH; // 0x158
		::System::Boolean PJEGOGJDMBH; // 0x160
		::System::Byte _padding0[0x3];
		::GJPBCNIIEOB_Mode BHJDJDPLCLP; // 0x164
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* NHGJHJBBJAA; // 0x0
		// static const ::System::String* GAFIBPAPEED; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GJPBCNIIEOB__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void AEOEFCONMJD(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_AEOEFCONMJD_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void DPGHDBPBMHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_DPGHDBPBMHA_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void PADHGKJFDGD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_PADHGKJFDGD_OFFSET))(this, a1);
		}

		::System::Void ENAIBJGFMFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_ENAIBJGFMFI_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void ILMPMNJDDPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_ILMPMNJDDPA_OFFSET))(this);
		}

		::System::Void CICKHGGMMCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_CICKHGGMMCJ_OFFSET))(this);
		}

		::System::Void DOEDECKEMEF(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_DOEDECKEMEF_OFFSET))(this, a1);
		}

		::System::Void HPGGKEFMGDC(::GJPBCNIIEOB_Mode a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJPBCNIIEOB_Mode))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_HPGGKEFMGDC_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void AGIJFEPDKMM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_AGIJFEPDKMM_OFFSET))(this, a1);
		}

		::System::Void JNHMEAMEMNA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_JNHMEAMEMNA_OFFSET))(this, a1);
		}

		::System::Void OMNOCGOKIDP(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_OMNOCGOKIDP_OFFSET))(this, a1);
		}

		::System::Void OBHGDOMDLLG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_OBHGDOMDLLG_OFFSET))(this, a1);
		}

		::System::Void HJDALEKKPKD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_HJDALEKKPKD_OFFSET))(this, a1);
		}

		::System::Void EHACNGGOCDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_EHACNGGOCDD_OFFSET))(this, a1);
		}

		::System::Void CILEMECEOPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_CILEMECEOPI_OFFSET))(this);
		}

		::System::Void BFEDMKDIPAA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_BFEDMKDIPAA_OFFSET))(this, a1);
		}

		::System::Void ODDBCLCHLKE(::GJPBCNIIEOB_Mode a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJPBCNIIEOB_Mode))((::PBYTE)hIl2Cpp + GJPBCNIIEOB_ODDBCLCHLKE_OFFSET))(this, a1);
		}

		::System::Boolean __RefreshTargetMark_b__39_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GJPBCNIIEOB___REFRESHTARGETMARK_B__39_0_OFFSET))(this, a1);
		}

	};
