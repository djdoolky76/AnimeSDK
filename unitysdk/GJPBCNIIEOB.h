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

#define GJPBCNIIEOB_AEOEFCONMJD_OFFSET UNITYSDK_OFFSET(0x169BD030)
#define GJPBCNIIEOB_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x169BEB70)
#define GJPBCNIIEOB_BFEDMKDIPAA_OFFSET UNITYSDK_OFFSET(0x169BD5B0)
#define GJPBCNIIEOB_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x169BEA80)
#define GJPBCNIIEOB_CICKHGGMMCJ_OFFSET UNITYSDK_OFFSET(0x169BE1E0)
#define GJPBCNIIEOB_CILEMECEOPI_OFFSET UNITYSDK_OFFSET(0x169BE420)
#define GJPBCNIIEOB_CTOR_OFFSET UNITYSDK_OFFSET(0x169BF0E0)
#define GJPBCNIIEOB_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0x169BDD10)
#define GJPBCNIIEOB_DPGHDBPBMHA_OFFSET UNITYSDK_OFFSET(0x169BD680)
#define GJPBCNIIEOB_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x169BCE40)
#define GJPBCNIIEOB_EHACNGGOCDD_OFFSET UNITYSDK_OFFSET(0x169BF090)
#define GJPBCNIIEOB_ENAIBJGFMFI_OFFSET UNITYSDK_OFFSET(0x169BE070)
#define GJPBCNIIEOB_HJDALEKKPKD_OFFSET UNITYSDK_OFFSET(0x169BEFD0)
#define GJPBCNIIEOB_HPGGKEFMGDC_OFFSET UNITYSDK_OFFSET(0x169BE6C0)
#define GJPBCNIIEOB_ILMPMNJDDPA_OFFSET UNITYSDK_OFFSET(0x169BD9B0)
#define GJPBCNIIEOB_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x169BD630)
#define GJPBCNIIEOB_JNHMEAMEMNA_OFFSET UNITYSDK_OFFSET(0x169BEDA0)
#define GJPBCNIIEOB_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x169BD240)
#define GJPBCNIIEOB_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x169BD8C0)
#define GJPBCNIIEOB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x169BD7E0)
#define GJPBCNIIEOB_OBHGDOMDLLG_OFFSET UNITYSDK_OFFSET(0x169BEE30)
#define GJPBCNIIEOB_ODDBCLCHLKE_OFFSET UNITYSDK_OFFSET(0x169BE640)
#define GJPBCNIIEOB_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0x169BEC00)
#define GJPBCNIIEOB_PADHGKJFDGD_OFFSET UNITYSDK_OFFSET(0x169BDE70)
#define GJPBCNIIEOB_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x169BDAC0)
#define GJPBCNIIEOB__ONBIND_OFFSET UNITYSDK_OFFSET(0x169BC6F0)
#define GJPBCNIIEOB__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x169BD730)
#define GJPBCNIIEOB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x169BCD20)
#define GJPBCNIIEOB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x169BD180)
#define GJPBCNIIEOB___REFRESHTARGETMARK_B__39_0_OFFSET UNITYSDK_OFFSET(0x169BF110)

inline static constexpr unsigned int GJPBCNIIEOB_TypeDefinitionIndex = 73239;

	class GJPBCNIIEOB : public ::CAOEEDDAPIK
	{
	public:
		::UnityEngine::Transform* HOAEDNGDJFK; // 0xE0
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xE8
		::OBOEBAGLNDH* ACBFBNJLABE; // 0xF0
		::PMMJMFOEBPN* PLGCMJNOFEO; // 0xF8
		::UnityEngine::Animation* BAFAAEFEBPJ; // 0x100
		::UnityEngine::Transform* MBEHKDDLBIA; // 0x108
		::UnityEngine::Animation* IOPAFOBGGPI; // 0x110
		::PJMKKBBOLNB* POMODDLEMAD; // 0x118
		::CAOEEDDAPIK_NNBFMHKHMKO* APPIHABBCGK; // 0x120
		::AGHKBJMFFJE* CNOFGGPEGEA; // 0x128
		::IHBCFENMHCJ* HNLADALPLPG; // 0x130
		::BNJCIKPAHIH* BCIIEAPGOJG; // 0x138
		::UnityEngine::Transform* NEMHEFAPIKO; // 0x140
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x148
		::CEONPKDKNHP* HLJOCEGGKKJ; // 0x150
		::System::String* DIDHOFMKIFH; // 0x158
		::GJPBCNIIEOB_Mode BHJDJDPLCLP; // 0x160
		::System::Boolean PJEGOGJDMBH; // 0x164
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
