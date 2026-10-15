#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/KIONMEOPGFF_ButtonState.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FMPCODLIOLG;
class KFEEHFMJOKD;
class OBGPJKCJIEC;
class PBLNMBHCNLJ;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilityMaxHPChange; }
namespace RPG::GameCore { class AbilityMaxSPChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelTurnStateChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define KIONMEOPGFF_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0xB4314B0)
#define KIONMEOPGFF_AKMGALBKAGP_OFFSET UNITYSDK_OFFSET(0xB430970)
#define KIONMEOPGFF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB432830)
#define KIONMEOPGFF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB432B70)
#define KIONMEOPGFF_BGLCJHDKMMD_OFFSET UNITYSDK_OFFSET(0xB4319F0)
#define KIONMEOPGFF_BIHNFBEKBJJ_OFFSET UNITYSDK_OFFSET(0xB431BB0)
#define KIONMEOPGFF_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0xB431060)
#define KIONMEOPGFF_CLLJFELLOBF_OFFSET UNITYSDK_OFFSET(0xB431670)
#define KIONMEOPGFF_CTOR_OFFSET UNITYSDK_OFFSET(0xB432E70)
#define KIONMEOPGFF_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB430370)
#define KIONMEOPGFF_DICPMEJINGC_OFFSET UNITYSDK_OFFSET(0xB430A30)
#define KIONMEOPGFF_DPDOCIHLBOB_OFFSET UNITYSDK_OFFSET(0xB431300)
#define KIONMEOPGFF_EAOGLDEIMJO_OFFSET UNITYSDK_OFFSET(0xB432770)
#define KIONMEOPGFF_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB4305E0)
#define KIONMEOPGFF_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0xB431C00)
#define KIONMEOPGFF_EHFEKJGMMPG_OFFSET UNITYSDK_OFFSET(0xB430CA0)
#define KIONMEOPGFF_EJIDIMAJPHO_OFFSET UNITYSDK_OFFSET(0xB4320F0)
#define KIONMEOPGFF_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB430910)
#define KIONMEOPGFF_FAPEGMMCIBM_OFFSET UNITYSDK_OFFSET(0xB4313A0)
#define KIONMEOPGFF_FGLPIJMMOLG_OFFSET UNITYSDK_OFFSET(0xB431170)
#define KIONMEOPGFF_FHEBAMAAGPD_OFFSET UNITYSDK_OFFSET(0xB4325F0)
#define KIONMEOPGFF_FHLFDJMAOMA_OFFSET UNITYSDK_OFFSET(0xB432070)
#define KIONMEOPGFF_IFIKIKJCKFK_OFFSET UNITYSDK_OFFSET(0xB4313F0)
#define KIONMEOPGFF_IHJCDKFFJLF_OFFSET UNITYSDK_OFFSET(0xB4326B0)
#define KIONMEOPGFF_JEDFAMDCGDN_OFFSET UNITYSDK_OFFSET(0xB430E50)
#define KIONMEOPGFF_JLDMMLNLEAC_OFFSET UNITYSDK_OFFSET(0xB431100)
#define KIONMEOPGFF_JPAKNOFIKEI_OFFSET UNITYSDK_OFFSET(0xB431CA0)
#define KIONMEOPGFF_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0xB432530)
#define KIONMEOPGFF_LHPGDKAEPPI_OFFSET UNITYSDK_OFFSET(0xB432450)
#define KIONMEOPGFF_LMPEFJNCKBE_OFFSET UNITYSDK_OFFSET(0xB4323A0)
#define KIONMEOPGFF_MNLFPHAOAGP_OFFSET UNITYSDK_OFFSET(0xB431830)
#define KIONMEOPGFF_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB430410)
#define KIONMEOPGFF_NJDMJODMLFF_OFFSET UNITYSDK_OFFSET(0xB432400)
#define KIONMEOPGFF_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0xB430330)
#define KIONMEOPGFF_ODHBBFCDGJB_OFFSET UNITYSDK_OFFSET(0xB432170)
#define KIONMEOPGFF_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0xB431240)
#define KIONMEOPGFF__ONBIND_OFFSET UNITYSDK_OFFSET(0xB430160)
#define KIONMEOPGFF__ONTICK_OFFSET UNITYSDK_OFFSET(0xB4308B0)

inline static constexpr unsigned int KIONMEOPGFF_TypeDefinitionIndex = 71557;

	class KIONMEOPGFF : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* JPJBEIHKHKH; // 0x60
		::RPG::Client::LongPressEvent* BDGDKFKOBIM; // 0x68
		::UnityEngine::UI::Image* AFJIGEDHIPO; // 0x70
		::UnityEngine::UI::Image* HGKAOBOKDPF; // 0x78
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x80
		::UnityEngine::Transform* GHGAKNDLKGM; // 0x88
		::RPG::Client::MonoInControlButton* OKPAHCBDGKF; // 0x90
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x98
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0xA0
		::PBLNMBHCNLJ* KCNKJOMCAHN; // 0xA8
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0xB0
		::KFEEHFMJOKD* INONCCKFAEH; // 0xB8
		::UnityEngine::UI::Image* AKKDFIICPDP; // 0xC0
		::OBGPJKCJIEC* KEINGFPKBBK; // 0xC8
		::System::Int32 FFNBLDFFMCN; // 0xD0
		::KIONMEOPGFF_ButtonState DLNIGFGLPLJ; // 0xD4
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF__ONBIND_OFFSET))(this);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_OAAOHHINHPH_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KIONMEOPGFF_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIONMEOPGFF__ONTICK_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void CAGIAMEFOLL(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + KIONMEOPGFF_CAGIAMEFOLL_OFFSET))(this, a1);
		}

		::System::Void FGLPIJMMOLG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KIONMEOPGFF_FGLPIJMMOLG_OFFSET))(this, a1);
		}

		::System::Void PNFAHABNEMH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KIONMEOPGFF_PNFAHABNEMH_OFFSET))(this, a1);
		}

		::System::Void FAPEGMMCIBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_FAPEGMMCIBM_OFFSET))(this);
		}

		::System::Void IFIKIKJCKFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_IFIKIKJCKFK_OFFSET))(this);
		}

		::System::Void AGIJFEPDKMM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + KIONMEOPGFF_AGIJFEPDKMM_OFFSET))(this, a1);
		}

		::System::Void CLLJFELLOBF(::RPG::GameCore::AbilityMaxHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxHPChange*))((::PBYTE)hIl2Cpp + KIONMEOPGFF_CLLJFELLOBF_OFFSET))(this, a1);
		}

		::System::Void MNLFPHAOAGP(::RPG::GameCore::AbilityCurrentSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + KIONMEOPGFF_MNLFPHAOAGP_OFFSET))(this, a1);
		}

		::System::Void BGLCJHDKMMD(::RPG::GameCore::AbilityMaxSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxSPChange*))((::PBYTE)hIl2Cpp + KIONMEOPGFF_BGLCJHDKMMD_OFFSET))(this, a1);
		}

		::System::Void BIHNFBEKBJJ(::RPG::GameCore::LevelTurnStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnStateChanged*))((::PBYTE)hIl2Cpp + KIONMEOPGFF_BIHNFBEKBJJ_OFFSET))(this, a1);
		}

		::System::Void EDFDIAKEGIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIONMEOPGFF_EDFDIAKEGIK_OFFSET))(this, a1);
		}

		::System::Void JLDMMLNLEAC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KIONMEOPGFF_JLDMMLNLEAC_OFFSET))(this, a1);
		}

		::System::Void DPDOCIHLBOB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KIONMEOPGFF_DPDOCIHLBOB_OFFSET))(this, a1);
		}

		::System::Void JPAKNOFIKEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_JPAKNOFIKEI_OFFSET))(this);
		}

		::System::Void FHLFDJMAOMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_FHLFDJMAOMA_OFFSET))(this);
		}

		::System::Void EJIDIMAJPHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_EJIDIMAJPHO_OFFSET))(this);
		}

		::System::Void ODHBBFCDGJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_ODHBBFCDGJB_OFFSET))(this);
		}

		::System::Void JEDFAMDCGDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_JEDFAMDCGDN_OFFSET))(this);
		}

		::System::Void LMPEFJNCKBE(::KIONMEOPGFF_ButtonState a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIONMEOPGFF_ButtonState))((::PBYTE)hIl2Cpp + KIONMEOPGFF_LMPEFJNCKBE_OFFSET))(this, a1);
		}

		::System::Void AKMGALBKAGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_AKMGALBKAGP_OFFSET))(this);
		}

		::System::Void EHFEKJGMMPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_EHFEKJGMMPG_OFFSET))(this);
		}

		::System::Void DICPMEJINGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_DICPMEJINGC_OFFSET))(this);
		}

		::KIONMEOPGFF_ButtonState NJDMJODMLFF()
		{
			return ((::KIONMEOPGFF_ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_NJDMJODMLFF_OFFSET))(this);
		}

		::System::Void LHPGDKAEPPI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIONMEOPGFF_LHPGDKAEPPI_OFFSET))(this, a1);
		}

		::System::Void KCJPBICKMIA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIONMEOPGFF_KCJPBICKMIA_OFFSET))(this, a1);
		}

		::System::Void FHEBAMAAGPD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIONMEOPGFF_FHEBAMAAGPD_OFFSET))(this, a1);
		}

		::System::Void IHJCDKFFJLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIONMEOPGFF_IHJCDKFFJLF_OFFSET))(this, a1);
		}

		::System::Void EAOGLDEIMJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIONMEOPGFF_EAOGLDEIMJO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIONMEOPGFF_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
