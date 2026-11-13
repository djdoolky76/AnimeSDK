#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/HBJGBGJENBJ_ButtonState.h"
class DEKDEPEBHNC;
class FMPCODLIOLG;
class HBJGBGJENBJ;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelTurnUltraSkillCancel; }
namespace RPG::GameCore { class LevelTurnUltraSkillPrepare; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define GFEKOPLKHPP_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B48B9E0)
#define GFEKOPLKHPP_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B48BBA0)
#define GFEKOPLKHPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B48BD40)
#define GFEKOPLKHPP_DFGLPGCNBKC_OFFSET UNITYSDK_OFFSET(0x1B48B390)
#define GFEKOPLKHPP_DIJMGNBGFBD_OFFSET UNITYSDK_OFFSET(0x1B48B0C0)
#define GFEKOPLKHPP_DPDOCIHLBOB_OFFSET UNITYSDK_OFFSET(0x1B48AB80)
#define GFEKOPLKHPP_EAMCPPDJIPM_OFFSET UNITYSDK_OFFSET(0x1B48B770)
#define GFEKOPLKHPP_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x1B48A800)
#define GFEKOPLKHPP_EEGHOOOKKJE_OFFSET UNITYSDK_OFFSET(0x1B48B920)
#define GFEKOPLKHPP_EOHPBMHOJME_OFFSET UNITYSDK_OFFSET(0x1B48AFF0)
#define GFEKOPLKHPP_FGLPIJMMOLG_OFFSET UNITYSDK_OFFSET(0x1B48AA30)
#define GFEKOPLKHPP_GCJPIMLBPMI_OFFSET UNITYSDK_OFFSET(0x1B48AEC0)
#define GFEKOPLKHPP_HGNOGNMMLCL_OFFSET UNITYSDK_OFFSET(0x1B48B490)
#define GFEKOPLKHPP_HLDHNMJBBOK_OFFSET UNITYSDK_OFFSET(0x1B48AE70)
#define GFEKOPLKHPP_IPHCNNBGDCN_OFFSET UNITYSDK_OFFSET(0x1B48B6B0)
#define GFEKOPLKHPP_JHJODHHJLAK_OFFSET UNITYSDK_OFFSET(0x1B48B2A0)
#define GFEKOPLKHPP_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x1B48A990)
#define GFEKOPLKHPP_JNPFAEIIOLL_OFFSET UNITYSDK_OFFSET(0x1B48B120)
#define GFEKOPLKHPP_KGPNGPAJPJI_OFFSET UNITYSDK_OFFSET(0x1B48B590)
#define GFEKOPLKHPP_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0x1B48B650)
#define GFEKOPLKHPP_NJKJGICAOJM_OFFSET UNITYSDK_OFFSET(0x1B48B830)
#define GFEKOPLKHPP_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0x1B48A6A0)
#define GFEKOPLKHPP_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0x1B48AAD0)
#define GFEKOPLKHPP__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1B48A6E0)
#define GFEKOPLKHPP__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B48A460)
#define GFEKOPLKHPP__ONTICK_OFFSET UNITYSDK_OFFSET(0x1B48A840)
#define GFEKOPLKHPP__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B48A8A0)

inline static constexpr unsigned int GFEKOPLKHPP_TypeDefinitionIndex = 74436;

	class GFEKOPLKHPP : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* COGOPBJHLME; // 0x60
		::RPG::GameCore::SkillCharacterComponent* ENMHNNNJPPN; // 0x68
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x70
		::RPG::GameCore::SkillData* IMAOAAEJOIE; // 0x78
		::System::Func_1<::System::Boolean>* DKFHMHMPEBL; // 0x80
		::UnityEngine::UI::Image* AJKPFICIIIP; // 0x88
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x90
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x98
		::HBJGBGJENBJ* BFOJPNLIPDC; // 0xA0
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xA8
		::UnityEngine::Transform* FIBLLKEGNKM; // 0xB0
		::System::Boolean FPAHEHPGOIC; // 0xB8
		::System::Boolean AKBPNMEFGAO; // 0xB9
		// static const ::System::String* IIFENECAOBG; // 0x0
		// static const ::System::String* CGNGHKIIGCM; // 0x0
		// static const ::System::Object EJEONLGGNBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEKOPLKHPP__ONBIND_OFFSET))(this);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_OAAOHHINHPH_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEKOPLKHPP__INITVARONCE_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GFEKOPLKHPP__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEKOPLKHPP__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void FGLPIJMMOLG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_FGLPIJMMOLG_OFFSET))(this, a1);
		}

		::System::Void PNFAHABNEMH(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_PNFAHABNEMH_OFFSET))(this, a1, a2);
		}

		::System::Void HLDHNMJBBOK(::System::Func_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_HLDHNMJBBOK_OFFSET))(this, a1);
		}

		::System::Void GCJPIMLBPMI(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_GCJPIMLBPMI_OFFSET))(this, a1);
		}

		::System::Void DIJMGNBGFBD(::HBJGBGJENBJ_ButtonState a1, ::HBJGBGJENBJ_ButtonState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HBJGBGJENBJ_ButtonState, ::HBJGBGJENBJ_ButtonState))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_DIJMGNBGFBD_OFFSET))(this, a1, a2);
		}

		::System::Void JNPFAEIIOLL(::HBJGBGJENBJ_ButtonState a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBJGBGJENBJ_ButtonState))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_JNPFAEIIOLL_OFFSET))(this, a1);
		}

		::System::Void JHJODHHJLAK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_JHJODHHJLAK_OFFSET))(this, a1);
		}

		::System::Void DFGLPGCNBKC(::RPG::GameCore::LevelTurnUltraSkillPrepare* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillPrepare*))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_DFGLPGCNBKC_OFFSET))(this, a1);
		}

		::System::Void HGNOGNMMLCL(::RPG::GameCore::LevelTurnUltraSkillCancel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillCancel*))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_HGNOGNMMLCL_OFFSET))(this, a1);
		}

		::System::Void KGPNGPAJPJI(::DEKDEPEBHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_KGPNGPAJPJI_OFFSET))(this, a1);
		}

		::System::Int32 EOHPBMHOJME()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_EOHPBMHOJME_OFFSET))(this);
		}

		::System::Void DPDOCIHLBOB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_DPDOCIHLBOB_OFFSET))(this, a1);
		}

		::System::Void LACAPACNEPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_LACAPACNEPI_OFFSET))(this);
		}

		::System::Void IPHCNNBGDCN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_IPHCNNBGDCN_OFFSET))(this, a1);
		}

		::System::Void EAMCPPDJIPM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_EAMCPPDJIPM_OFFSET))(this, a1);
		}

		::System::Void NJKJGICAOJM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_NJKJGICAOJM_OFFSET))(this, a1);
		}

		::System::Void EEGHOOOKKJE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_EEGHOOOKKJE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEKOPLKHPP_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
