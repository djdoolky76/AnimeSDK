#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BILMMJGHFGD;
class IPDLAKOLBFA;
class JIKBJMHEJNN;
class NMNIJNNFPGP;
class NPECNJDLMFD;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterCreate; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define JGNCIONCKNN_APCGPKFOPBI_OFFSET UNITYSDK_OFFSET(0xB199540)
#define JGNCIONCKNN_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB19C910)
#define JGNCIONCKNN_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB19CB60)
#define JGNCIONCKNN_CBHGEGECCDH_1_OFFSET UNITYSDK_OFFSET(0xB1997C0)
#define JGNCIONCKNN_CBHGEGECCDH_OFFSET UNITYSDK_OFFSET(0xB199730)
#define JGNCIONCKNN_CCTOR_OFFSET UNITYSDK_OFFSET(0xB19CE80)
#define JGNCIONCKNN_CMPPIKPEDAC_OFFSET UNITYSDK_OFFSET(0xB19C850)
#define JGNCIONCKNN_COLJKILBNEI_OFFSET UNITYSDK_OFFSET(0xB19B690)
#define JGNCIONCKNN_CTOR_OFFSET UNITYSDK_OFFSET(0xB19CD80)
#define JGNCIONCKNN_DDFLHGEECJP_OFFSET UNITYSDK_OFFSET(0xB19C790)
#define JGNCIONCKNN_DEOCMNCJOEJ_1_OFFSET UNITYSDK_OFFSET(0xB19A630)
#define JGNCIONCKNN_DEOCMNCJOEJ_OFFSET UNITYSDK_OFFSET(0xB199E30)
#define JGNCIONCKNN_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB198DE0)
#define JGNCIONCKNN_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB1994F0)
#define JGNCIONCKNN_FEJLJHOGAFO_OFFSET UNITYSDK_OFFSET(0xB19B850)
#define JGNCIONCKNN_HCFEFLLHOJF_OFFSET UNITYSDK_OFFSET(0xB19C560)
#define JGNCIONCKNN_IMGLAKJNHHC_OFFSET UNITYSDK_OFFSET(0xB19C460)
#define JGNCIONCKNN_INEGHNCOLFI_OFFSET UNITYSDK_OFFSET(0xB19B9A0)
#define JGNCIONCKNN_JBOLPCLPGOD_OFFSET UNITYSDK_OFFSET(0xB19C510)
#define JGNCIONCKNN_JEKDCJPGKOL_OFFSET UNITYSDK_OFFSET(0xB19BA40)
#define JGNCIONCKNN_KCOCHHDLPHA_OFFSET UNITYSDK_OFFSET(0xB199850)
#define JGNCIONCKNN_LKFHNJLEMBN_OFFSET UNITYSDK_OFFSET(0xB19A010)
#define JGNCIONCKNN_MNAOANGHHCM_OFFSET UNITYSDK_OFFSET(0xB19C180)
#define JGNCIONCKNN_NMBCMKGNDIL_OFFSET UNITYSDK_OFFSET(0xB198EE0)
#define JGNCIONCKNN_OBAKIMAJDKE_OFFSET UNITYSDK_OFFSET(0xB19C700)
#define JGNCIONCKNN_PNJKFOILFOB_OFFSET UNITYSDK_OFFSET(0xB19B700)
#define JGNCIONCKNN__ONBIND_OFFSET UNITYSDK_OFFSET(0xB198E70)

inline static constexpr unsigned int JGNCIONCKNN_TypeDefinitionIndex = 71959;

	class JGNCIONCKNN : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IPDLAKOLBFA*>* HAAAODHMLMF; // 0x60
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpecialSkillButtonGroupType, ::IPDLAKOLBFA*>* CIFIFFIIMOM; // 0x70
		::RPG::GameCore::EntityManager* LPILDKDAGDP; // 0x78
		::RPG::Client::PrefabLoadMeta* EKNBMKIEFDM; // 0x80
		static ::JIKBJMHEJNN** StaticGet_KGBIHFFCBFF()
		{
			return (::JIKBJMHEJNN**)UnitySDK::FromName("", "JGNCIONCKNN")->GetStaticField(0x10F00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGNCIONCKNN_CCTOR_OFFSET))();
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + JGNCIONCKNN_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>* CBHGEGECCDH(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>*(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + JGNCIONCKNN_CBHGEGECCDH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>* CBHGEGECCDH_1()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN_CBHGEGECCDH_1_OFFSET))(this);
		}

		::NMNIJNNFPGP* KCOCHHDLPHA(::RPG::GameCore::GameEntity* a1, ::RPG::Client::UISkillIndex a2)
		{
			return ((::NMNIJNNFPGP*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + JGNCIONCKNN_KCOCHHDLPHA_OFFSET))(this, a1, a2);
		}

		::System::Void LKFHNJLEMBN(::RPG::Client::UISkillIndex a1, ::System::Boolean a2, ::NMNIJNNFPGP* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean, ::NMNIJNNFPGP*))((::PBYTE)hIl2Cpp + JGNCIONCKNN_LKFHNJLEMBN_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::UISkillIndex PNJKFOILFOB(::RPG::GameCore::GameEntity* a1, ::RPG::Client::UISkillIndex a2)
		{
			return ((::RPG::Client::UISkillIndex(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + JGNCIONCKNN_PNJKFOILFOB_OFFSET))(this, a1, a2);
		}

		::System::Void NMBCMKGNDIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN_NMBCMKGNDIL_OFFSET))(this);
		}

		::IPDLAKOLBFA* FEJLJHOGAFO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::IPDLAKOLBFA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JGNCIONCKNN_FEJLJHOGAFO_OFFSET))(this, a1);
		}

		::NPECNJDLMFD* DEOCMNCJOEJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::NPECNJDLMFD*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JGNCIONCKNN_DEOCMNCJOEJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::NPECNJDLMFD*>* COLJKILBNEI()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NPECNJDLMFD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN_COLJKILBNEI_OFFSET))(this);
		}

		::NPECNJDLMFD* JEKDCJPGKOL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::NPECNJDLMFD*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JGNCIONCKNN_JEKDCJPGKOL_OFFSET))(this, a1);
		}

		::NPECNJDLMFD* DEOCMNCJOEJ_1(::RPG::Client::UISkillIndex a1, ::NMNIJNNFPGP* a2)
		{
			return ((::NPECNJDLMFD*(*)(::PVOID, ::RPG::Client::UISkillIndex, ::NMNIJNNFPGP*))((::PBYTE)hIl2Cpp + JGNCIONCKNN_DEOCMNCJOEJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void APCGPKFOPBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN_APCGPKFOPBI_OFFSET))(this);
		}

		::System::Void JBOLPCLPGOD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JGNCIONCKNN_JBOLPCLPGOD_OFFSET))(this, a1);
		}

		::RPG::GameCore::SpecialSkillButtonGroupType INEGHNCOLFI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::SpecialSkillButtonGroupType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JGNCIONCKNN_INEGHNCOLFI_OFFSET))(this, a1);
		}

		::System::Void MNAOANGHHCM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JGNCIONCKNN_MNAOANGHHCM_OFFSET))(this, a1);
		}

		::System::Void HCFEFLLHOJF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JGNCIONCKNN_HCFEFLLHOJF_OFFSET))(this, a1);
		}

		::System::Void OBAKIMAJDKE(::RPG::GameCore::LevelCharacterCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterCreate*))((::PBYTE)hIl2Cpp + JGNCIONCKNN_OBAKIMAJDKE_OFFSET))(this, a1);
		}

		::BILMMJGHFGD* IMGLAKJNHHC()
		{
			return ((::BILMMJGHFGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN_IMGLAKJNHHC_OFFSET))(this);
		}

		::System::Void DDFLHGEECJP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGNCIONCKNN_DDFLHGEECJP_OFFSET))(this, a1);
		}

		::System::Void CMPPIKPEDAC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGNCIONCKNN_CMPPIKPEDAC_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
