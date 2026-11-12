#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class HNDLHMEPDMG;
class KOAOAKKCCPK;
class PJNDEJDPCLP;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define HNDLHMEPDMG_AJINIKFFOEA_OFFSET UNITYSDK_OFFSET(0x16D30EF0)
#define HNDLHMEPDMG_APKHBBHJMMD_OFFSET UNITYSDK_OFFSET(0x16D307A0)
#define HNDLHMEPDMG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16D314C0)
#define HNDLHMEPDMG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16D317E0)
#define HNDLHMEPDMG_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0x16D2FA00)
#define HNDLHMEPDMG_COBPEDKFGFF_OFFSET UNITYSDK_OFFSET(0x16D303C0)
#define HNDLHMEPDMG_CTOR_OFFSET UNITYSDK_OFFSET(0x16D31AC0)
#define HNDLHMEPDMG_DBFEILMEPML_OFFSET UNITYSDK_OFFSET(0x16D31430)
#define HNDLHMEPDMG_DGNMINCINHN_OFFSET UNITYSDK_OFFSET(0x16D2FF60)
#define HNDLHMEPDMG_DIANJEDPDKP_OFFSET UNITYSDK_OFFSET(0x16D2F670)
#define HNDLHMEPDMG_DIKPMMNBPNC_OFFSET UNITYSDK_OFFSET(0x16D2FAC0)
#define HNDLHMEPDMG_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x16D2FE10)
#define HNDLHMEPDMG_DOHBIBDPPIA_OFFSET UNITYSDK_OFFSET(0x16D305B0)
#define HNDLHMEPDMG_EBNHLOOMFEF_OFFSET UNITYSDK_OFFSET(0x16D2F2C0)
#define HNDLHMEPDMG_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x16D2FCB0)
#define HNDLHMEPDMG_EGOMIMBCOHD_OFFSET UNITYSDK_OFFSET(0x16D31100)
#define HNDLHMEPDMG_EIKOAMLCOGP_OFFSET UNITYSDK_OFFSET(0x16D31200)
#define HNDLHMEPDMG_FDIIPLFBFBP_OFFSET UNITYSDK_OFFSET(0x16D2FFD0)
#define HNDLHMEPDMG_GFEBHNKPENL_OFFSET UNITYSDK_OFFSET(0x16D30330)
#define HNDLHMEPDMG_GKMEMJCAADM_OFFSET UNITYSDK_OFFSET(0x16D2FBB0)
#define HNDLHMEPDMG_GPHOGNMMPHO_OFFSET UNITYSDK_OFFSET(0x16D2F090)
#define HNDLHMEPDMG_IDJMGKMCNLP_OFFSET UNITYSDK_OFFSET(0x16D30060)
#define HNDLHMEPDMG_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x16D2F5E0)
#define HNDLHMEPDMG_JICBDKHMBFG_OFFSET UNITYSDK_OFFSET(0x16D30D20)
#define HNDLHMEPDMG_KDBKCKPCNAD_OFFSET UNITYSDK_OFFSET(0x16D2FED0)
#define HNDLHMEPDMG_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0x16D2EFA0)
#define HNDLHMEPDMG_LBFJIOKOJKH_OFFSET UNITYSDK_OFFSET(0x16D30B60)
#define HNDLHMEPDMG_LDDBCLAKIAB_OFFSET UNITYSDK_OFFSET(0x16D30EB0)
#define HNDLHMEPDMG_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0x16D31040)
#define HNDLHMEPDMG_MMFGPCHFDAO_OFFSET UNITYSDK_OFFSET(0x16D31300)
#define HNDLHMEPDMG_NBHCBGCKEIL_OFFSET UNITYSDK_OFFSET(0x16D2F000)
#define HNDLHMEPDMG_NBPNEMGGFKA_OFFSET UNITYSDK_OFFSET(0x16D300B0)
#define HNDLHMEPDMG_NFPHAJMIOIE_OFFSET UNITYSDK_OFFSET(0x16D30AB0)
#define HNDLHMEPDMG_NMIEAEACIIH_OFFSET UNITYSDK_OFFSET(0x16D302E0)
#define HNDLHMEPDMG_PGIJAGHKJLN_OFFSET UNITYSDK_OFFSET(0x16D30AF0)
#define HNDLHMEPDMG__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x16D2F7B0)
#define HNDLHMEPDMG__ONBIND_OFFSET UNITYSDK_OFFSET(0x16D2EBA0)
#define HNDLHMEPDMG__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16D2F6F0)
#define HNDLHMEPDMG__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16D2F990)
#define HNDLHMEPDMG__ONTICK_OFFSET UNITYSDK_OFFSET(0x16D2FB50)
#define HNDLHMEPDMG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16D2FDB0)

inline static constexpr unsigned int HNDLHMEPDMG_TypeDefinitionIndex = 73485;

	class HNDLHMEPDMG : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* PMOJILOJEPE; // 0x60
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x68
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x70
		::UnityEngine::Transform* NBFOOAGLLEP; // 0x78
		::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x80
		::System::Collections::Generic::List_1<::PJNDEJDPCLP*>* DMOBPGBLJJH; // 0x88
		::Il2CppArray<::System::Object*>* DNJLAHPLLFB; // 0x90
		::RPG::Client::BattleGamePhase* NOHNKAIALPJ; // 0x98
		::RPG::UINavigation::UINavigationZone* EHBHIGNPJLB; // 0xA0
		::UnityEngine::Transform* ENHNMFBDAHJ; // 0xA8
		::UnityEngine::Transform* FHEMCAFOIKG; // 0xB0
		::UnityEngine::UI::Button* HNHFBPONCOE; // 0xB8
		::System::Boolean FMNEEONAMNO; // 0xC0
		::System::Boolean KBBBFMBALGO; // 0xC1
		::System::Boolean LKOLLPCCAMO; // 0xC2
		::System::Byte _padding0[0x1];
		::RPG::GameCore::StageType LFJEGJMCEBD; // 0xC4
		// static const ::System::String* EFJMLJCGPCJ; // 0x0
		// static const ::System::String* GDMDLGAAIAK; // 0x0
		// static const ::System::String* HLKCHICNHJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG__ONBIND_OFFSET))(this);
		}

		::System::Void KGDIPFNECJH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_KGDIPFNECJH_OFFSET))(this, a1);
		}

		::System::Void NBHCBGCKEIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_NBHCBGCKEIL_OFFSET))(this);
		}

		::System::Void EBNHLOOMFEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_EBNHLOOMFEF_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HNDLHMEPDMG__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void CAGIAMEFOLL(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_CAGIAMEFOLL_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HNDLHMEPDMG__ONTICK_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void KDBKCKPCNAD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_KDBKCKPCNAD_OFFSET))(this, a1);
		}

		::System::Void FDIIPLFBFBP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_FDIIPLFBFBP_OFFSET))(this, a1);
		}

		::System::Void DGNMINCINHN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_DGNMINCINHN_OFFSET))(this, a1);
		}

		::System::Void IDJMGKMCNLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_IDJMGKMCNLP_OFFSET))(this);
		}

		::System::Void GPHOGNMMPHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_GPHOGNMMPHO_OFFSET))(this);
		}

		::System::Void NBPNEMGGFKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_NBPNEMGGFKA_OFFSET))(this);
		}

		::System::Void NMIEAEACIIH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_NMIEAEACIIH_OFFSET))(this, a1);
		}

		::System::Void GFEBHNKPENL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_GFEBHNKPENL_OFFSET))(this);
		}

		::System::Boolean COBPEDKFGFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_COBPEDKFGFF_OFFSET))(this);
		}

		::System::Void DIKPMMNBPNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_DIKPMMNBPNC_OFFSET))(this);
		}

		::System::Boolean DOHBIBDPPIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_DOHBIBDPPIA_OFFSET))(this);
		}

		::System::Void APKHBBHJMMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_APKHBBHJMMD_OFFSET))(this, a1);
		}

		::System::Void GKMEMJCAADM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_GKMEMJCAADM_OFFSET))(this);
		}

		::System::Void DIANJEDPDKP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_DIANJEDPDKP_OFFSET))(this, a1);
		}

		static ::System::Boolean NFPHAJMIOIE()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HNDLHMEPDMG_NFPHAJMIOIE_OFFSET))();
		}

		static ::PJNDEJDPCLP* PGIJAGHKJLN(::HNDLHMEPDMG* a1)
		{
			return ((::PJNDEJDPCLP*(*)(::HNDLHMEPDMG*))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_PGIJAGHKJLN_OFFSET))(a1);
		}

		static ::System::Boolean LBFJIOKOJKH()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HNDLHMEPDMG_LBFJIOKOJKH_OFFSET))();
		}

		static ::PJNDEJDPCLP* JICBDKHMBFG(::HNDLHMEPDMG* a1)
		{
			return ((::PJNDEJDPCLP*(*)(::HNDLHMEPDMG*))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_JICBDKHMBFG_OFFSET))(a1);
		}

		static ::System::Boolean LDDBCLAKIAB()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HNDLHMEPDMG_LDDBCLAKIAB_OFFSET))();
		}

		static ::PJNDEJDPCLP* AJINIKFFOEA(::HNDLHMEPDMG* a1)
		{
			return ((::PJNDEJDPCLP*(*)(::HNDLHMEPDMG*))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_AJINIKFFOEA_OFFSET))(a1);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void EGOMIMBCOHD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_EGOMIMBCOHD_OFFSET))(this, a1);
		}

		::System::Void EIKOAMLCOGP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_EIKOAMLCOGP_OFFSET))(this, a1);
		}

		::System::Void MMFGPCHFDAO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_MMFGPCHFDAO_OFFSET))(this, a1);
		}

		::System::Void DBFEILMEPML(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_DBFEILMEPML_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLHMEPDMG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
