#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADGFFEDNPPO.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/BattleModeType.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtBattlePhase.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/LPBMANAEKFN.h"
class DEEJKBIMHAA;
class EDCEPLBIKIN;
class FDNCLPGAKOA;
class JHFCIOJIONP;
class KANHBPAGDJD;
class LOKEGILJPKG;
class MHLFFIDFHLA;
class MJNGFEGNCOA;
class MNHHAILECIG;
class NMNGHKMHDOK;
class PEMEKELOIFJ;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtDefenceStageConfig; }
namespace RPG::GameCore { class RtDefenceStageRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class BaseFrameSynchor_2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POEGKFEADIE_AJDLKMIELEB_OFFSET UNITYSDK_OFFSET(0x184D4EF0)
#define POEGKFEADIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x184D56C0)
#define POEGKFEADIE_CDPPEFFOCGC_OFFSET UNITYSDK_OFFSET(0x184D3D00)
#define POEGKFEADIE_CGNDFEOKFFP_OFFSET UNITYSDK_OFFSET(0x184D3B50)
#define POEGKFEADIE_CHDJLLHCNEB_OFFSET UNITYSDK_OFFSET(0x184D2030)
#define POEGKFEADIE_CREATEDYINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x184D19C0)
#define POEGKFEADIE_CREATEENTITY_OFFSET UNITYSDK_OFFSET(0x184D33A0)
#define POEGKFEADIE_CREATELEVELENTITY_OFFSET UNITYSDK_OFFSET(0x184D12B0)
#define POEGKFEADIE_CREATETEAMENTITY_OFFSET UNITYSDK_OFFSET(0x184D1670)
#define POEGKFEADIE_CTOR_OFFSET UNITYSDK_OFFSET(0x184D5610)
#define POEGKFEADIE_DGBJIFAGKEO_OFFSET UNITYSDK_OFFSET(0x184D4B10)
#define POEGKFEADIE_DHELBKGCBPL_OFFSET UNITYSDK_OFFSET(0x184D0F30)
#define POEGKFEADIE_DNNKHGLKLIA_OFFSET UNITYSDK_OFFSET(0x184D2270)
#define POEGKFEADIE_DPIIHPNEHJA_OFFSET UNITYSDK_OFFSET(0x184D1D90)
#define POEGKFEADIE_EACACBOKLDG_OFFSET UNITYSDK_OFFSET(0x184D55D0)
#define POEGKFEADIE_EHKHPMIPIIE_OFFSET UNITYSDK_OFFSET(0x184D36C0)
#define POEGKFEADIE_EJDJEFDBNGF_OFFSET UNITYSDK_OFFSET(0x184D5600)
#define POEGKFEADIE_FNCKKHDAACI_OFFSET UNITYSDK_OFFSET(0x184D3E20)
#define POEGKFEADIE_FNMEBKKFLFI_OFFSET UNITYSDK_OFFSET(0x184D3A60)
#define POEGKFEADIE_FPCIHLDLAPH_OFFSET UNITYSDK_OFFSET(0x184D3E60)
#define POEGKFEADIE_GBMMFCGBEJF_OFFSET UNITYSDK_OFFSET(0x184D55C0)
#define POEGKFEADIE_GET_GAMEWORLD_OFFSET UNITYSDK_OFFSET(0x184D55E0)
#define POEGKFEADIE_GET_MODETYPE_OFFSET UNITYSDK_OFFSET(0x184D4390)
#define POEGKFEADIE_GET_PAUSEMONSTERSPAWN_OFFSET UNITYSDK_OFFSET(0x184D4370)
#define POEGKFEADIE_HNGEIJOIIKI_OFFSET UNITYSDK_OFFSET(0x184D55B0)
#define POEGKFEADIE_IJJGICIGDBI_OFFSET UNITYSDK_OFFSET(0x184D3750)
#define POEGKFEADIE_JBPPFNANPMH_OFFSET UNITYSDK_OFFSET(0x184D1160)
#define POEGKFEADIE_JKMBBMEFEAE_OFFSET UNITYSDK_OFFSET(0x184D55F0)
#define POEGKFEADIE_JMLHDGHGPHO_OFFSET UNITYSDK_OFFSET(0x184D39D0)
#define POEGKFEADIE_JPPJBLLDLLB_OFFSET UNITYSDK_OFFSET(0x184D1C40)
#define POEGKFEADIE_KJIHNNABIFE_OFFSET UNITYSDK_OFFSET(0x184D53D0)
#define POEGKFEADIE_KNJAKBOAIAL_OFFSET UNITYSDK_OFFSET(0x184D41F0)
#define POEGKFEADIE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x184D5540)
#define POEGKFEADIE_LBIPCGIFHKH_OFFSET UNITYSDK_OFFSET(0x184D4140)
#define POEGKFEADIE_LJFPGILKFAC_OFFSET UNITYSDK_OFFSET(0x184D1A30)
#define POEGKFEADIE_MGOOKMDDCKM_OFFSET UNITYSDK_OFFSET(0x184D1D30)
#define POEGKFEADIE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x184D5270)
#define POEGKFEADIE_ONINIT_OFFSET UNITYSDK_OFFSET(0x184D4AC0)
#define POEGKFEADIE_ONLOAD_OFFSET UNITYSDK_OFFSET(0x184D5150)
#define POEGKFEADIE_ONPOSTSTEP_OFFSET UNITYSDK_OFFSET(0x184D5340)
#define POEGKFEADIE_ONPREINIT_OFFSET UNITYSDK_OFFSET(0x184D43A0)
#define POEGKFEADIE_ONPRESTEP_OFFSET UNITYSDK_OFFSET(0x184D52B0)
#define POEGKFEADIE_ONSTART_OFFSET UNITYSDK_OFFSET(0x184D51E0)
#define POEGKFEADIE_ONSTOP_OFFSET UNITYSDK_OFFSET(0x184D5230)
#define POEGKFEADIE_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x184D4DC0)
#define POEGKFEADIE_ONUNLOAD_OFFSET UNITYSDK_OFFSET(0x184D51A0)
#define POEGKFEADIE_PGCKFOPLBHH_OFFSET UNITYSDK_OFFSET(0x184D1DE0)
#define POEGKFEADIE_SET_PAUSEMONSTERSPAWN_OFFSET UNITYSDK_OFFSET(0x184D4380)
#define POEGKFEADIE_TICK_OFFSET UNITYSDK_OFFSET(0x184D5440)

inline static constexpr unsigned int POEGKFEADIE_TypeDefinitionIndex = 55475;

	class POEGKFEADIE : public ::ADGFFEDNPPO
	{
	public:
		::MJNGFEGNCOA* APEJEHHMLGE; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* DCEOIPGCLFG; // 0x40
		::DEEJKBIMHAA* DGMGHIEMGCG; // 0x48
		::RPG::GameCore::BaseFrameSynchor_2<::KANHBPAGDJD*, ::PEMEKELOIFJ*>* MDJMPEAJEML; // 0x50
		::MNHHAILECIG* MOFHGHGKAFP; // 0x58
		::RPG::GameCore::RtDefenceStageRow* HIEEEPAGOCI; // 0x60
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x68
		::System::Collections::Generic::List_1<::LOKEGILJPKG*>* PEGOBOIDLBF; // 0x70
		::RPG::GameCore::RtDefenceStageConfig* PPAODDKLMMC; // 0x78
		::System::Int32 NBJDEHHECOF; // 0x80
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint KBHPKGIGALN; // 0x88
		::System::Boolean _PauseMonsterSpawn_k__BackingField; // 0x90
		::System::Byte _padding1[0x3];
		::RPG::GameCore::RtBattlePhase CAIKDGHNECE; // 0x94
		static ::System::String** StaticGet_KIDBHNNDJJO()
		{
			return (::System::String**)UnitySDK::FromName("", "POEGKFEADIE")->GetStaticField(0x73D70);
		}

		static ::System::String** StaticGet_CJHFPOANKAA()
		{
			return (::System::String**)UnitySDK::FromName("", "POEGKFEADIE")->GetStaticField(0x73D78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POEGKFEADIE_CCTOR_OFFSET))();
		}

		::System::Void DHELBKGCBPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_DHELBKGCBPL_OFFSET))(this);
		}

		::System::Void JBPPFNANPMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_JBPPFNANPMH_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CreateLevelEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_CREATELEVELENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CreateTeamEntity(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + POEGKFEADIE_CREATETEAMENTITY_OFFSET))(this, a1);
		}

		::JHFCIOJIONP* CreateDyingInstance()
		{
			return ((::JHFCIOJIONP*(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_CREATEDYINGINSTANCE_OFFSET))(this);
		}

		::System::Void LJFPGILKFAC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + POEGKFEADIE_LJFPGILKFAC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JPPJBLLDLLB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + POEGKFEADIE_JPPJBLLDLLB_OFFSET))(this, a1, a2);
		}

		::System::Void MGOOKMDDCKM(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2, ::NMNGHKMHDOK* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::NMNGHKMHDOK*))((::PBYTE)hIl2Cpp + POEGKFEADIE_MGOOKMDDCKM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DPIIHPNEHJA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + POEGKFEADIE_DPIIHPNEHJA_OFFSET))(this, a1, a2);
		}

		::System::Void PGCKFOPLBHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_PGCKFOPLBHH_OFFSET))(this);
		}

		static ::MHLFFIDFHLA* CHDJLLHCNEB(::LPBMANAEKFN a1, ::RPG::GameCore::RtDefenceStageRow* a2)
		{
			return ((::MHLFFIDFHLA*(*)(::LPBMANAEKFN, ::RPG::GameCore::RtDefenceStageRow*))((::PBYTE)hIl2Cpp + POEGKFEADIE_CHDJLLHCNEB_OFFSET))(a1, a2);
		}

		::RPG::GameCore::GameEntity* DNNKHGLKLIA(::LPBMANAEKFN a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::LPBMANAEKFN))((::PBYTE)hIl2Cpp + POEGKFEADIE_DNNKHGLKLIA_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* CreateEntity(::RPG::GameCore::EntityType a1, ::EDCEPLBIKIN* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::EntityType, ::EDCEPLBIKIN*))((::PBYTE)hIl2Cpp + POEGKFEADIE_CREATEENTITY_OFFSET))(this, a1, a2);
		}

		::System::UInt32 EHKHPMIPIIE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_EHKHPMIPIIE_OFFSET))(this);
		}

		::RPG::PoolList_1<::System::UInt32>* IJJGICIGDBI(::System::Int32 a1)
		{
			return ((::RPG::PoolList_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POEGKFEADIE_IJJGICIGDBI_OFFSET))(this, a1);
		}

		::System::Void JMLHDGHGPHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_JMLHDGHGPHO_OFFSET))(this);
		}

		::System::Void FNMEBKKFLFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_FNMEBKKFLFI_OFFSET))(this);
		}

		::System::Void LBIPCGIFHKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_LBIPCGIFHKH_OFFSET))(this);
		}

		::System::Void CGNDFEOKFFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_CGNDFEOKFFP_OFFSET))(this);
		}

		::System::Void CDPPEFFOCGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_CDPPEFFOCGC_OFFSET))(this);
		}

		::System::Void FNCKKHDAACI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_FNCKKHDAACI_OFFSET))(this);
		}

		::System::Boolean FPCIHLDLAPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_FPCIHLDLAPH_OFFSET))(this);
		}

		::System::Void KNJAKBOAIAL(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + POEGKFEADIE_KNJAKBOAIAL_OFFSET))(this, a1);
		}

		::System::Boolean get_PauseMonsterSpawn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_GET_PAUSEMONSTERSPAWN_OFFSET))(this);
		}

		::System::Void set_PauseMonsterSpawn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + POEGKFEADIE_SET_PAUSEMONSTERSPAWN_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleModeType get_ModeType()
		{
			return ((::RPG::GameCore::BattleModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_GET_MODETYPE_OFFSET))(this);
		}

		::System::Void OnPreInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_ONPREINIT_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_ONUNINIT_OFFSET))(this);
		}

		::System::Void DGBJIFAGKEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_DGBJIFAGKEO_OFFSET))(this);
		}

		::System::Void AJDLKMIELEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_AJDLKMIELEB_OFFSET))(this);
		}

		::System::Void OnLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_ONLOAD_OFFSET))(this);
		}

		::System::Void OnUnload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_ONUNLOAD_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_ONSTART_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_ONSTOP_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_ONFINISH_OFFSET))(this);
		}

		::System::Void OnPreStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_ONPRESTEP_OFFSET))(this);
		}

		::System::Void OnPostStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_ONPOSTSTEP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + POEGKFEADIE_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + POEGKFEADIE_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean KJIHNNABIFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_KJIHNNABIFE_OFFSET))(this);
		}

		::MNHHAILECIG* HNGEIJOIIKI()
		{
			return ((::MNHHAILECIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_HNGEIJOIIKI_OFFSET))(this);
		}

		::RPG::GameCore::RtDefenceStageConfig* GBMMFCGBEJF()
		{
			return ((::RPG::GameCore::RtDefenceStageConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_GBMMFCGBEJF_OFFSET))(this);
		}

		::FDNCLPGAKOA* EACACBOKLDG()
		{
			return ((::FDNCLPGAKOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_EACACBOKLDG_OFFSET))(this);
		}

		::RPG::GameCore::GameWorld* get_GameWorld()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_GET_GAMEWORLD_OFFSET))(this);
		}

		::RPG::GameCore::BaseFrameSynchor_2<::KANHBPAGDJD*, ::PEMEKELOIFJ*>* JKMBBMEFEAE()
		{
			return ((::RPG::GameCore::BaseFrameSynchor_2<::KANHBPAGDJD*, ::PEMEKELOIFJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_JKMBBMEFEAE_OFFSET))(this);
		}

		::RPG::GameCore::RtBattlePhase EJDJEFDBNGF()
		{
			return ((::RPG::GameCore::RtBattlePhase(*)(::PVOID))((::PBYTE)hIl2Cpp + POEGKFEADIE_EJDJEFDBNGF_OFFSET))(this);
		}

	};
