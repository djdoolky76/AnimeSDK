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

#define JGNCIONCKNN_APCGPKFOPBI_OFFSET UNITYSDK_OFFSET(0x19354480)
#define JGNCIONCKNN_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x19357860)
#define JGNCIONCKNN_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x19357AC0)
#define JGNCIONCKNN_CBHGEGECCDH_1_OFFSET UNITYSDK_OFFSET(0x19354700)
#define JGNCIONCKNN_CBHGEGECCDH_OFFSET UNITYSDK_OFFSET(0x19354670)
#define JGNCIONCKNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x19357DF0)
#define JGNCIONCKNN_CMPPIKPEDAC_OFFSET UNITYSDK_OFFSET(0x193577A0)
#define JGNCIONCKNN_COLJKILBNEI_OFFSET UNITYSDK_OFFSET(0x193565E0)
#define JGNCIONCKNN_CTOR_OFFSET UNITYSDK_OFFSET(0x19357CE0)
#define JGNCIONCKNN_DDFLHGEECJP_OFFSET UNITYSDK_OFFSET(0x193576E0)
#define JGNCIONCKNN_DEOCMNCJOEJ_1_OFFSET UNITYSDK_OFFSET(0x19355580)
#define JGNCIONCKNN_DEOCMNCJOEJ_OFFSET UNITYSDK_OFFSET(0x19354D70)
#define JGNCIONCKNN_FEJLJHOGAFO_OFFSET UNITYSDK_OFFSET(0x193567A0)
#define JGNCIONCKNN_HCFEFLLHOJF_OFFSET UNITYSDK_OFFSET(0x193574B0)
#define JGNCIONCKNN_IMGLAKJNHHC_OFFSET UNITYSDK_OFFSET(0x193573B0)
#define JGNCIONCKNN_INEGHNCOLFI_OFFSET UNITYSDK_OFFSET(0x193568F0)
#define JGNCIONCKNN_JBOLPCLPGOD_OFFSET UNITYSDK_OFFSET(0x19357460)
#define JGNCIONCKNN_JEKDCJPGKOL_OFFSET UNITYSDK_OFFSET(0x19356990)
#define JGNCIONCKNN_KCOCHHDLPHA_OFFSET UNITYSDK_OFFSET(0x19354790)
#define JGNCIONCKNN_LKFHNJLEMBN_OFFSET UNITYSDK_OFFSET(0x19354F60)
#define JGNCIONCKNN_MNAOANGHHCM_OFFSET UNITYSDK_OFFSET(0x193570D0)
#define JGNCIONCKNN_NMBCMKGNDIL_OFFSET UNITYSDK_OFFSET(0x19353CC0)
#define JGNCIONCKNN_OBAKIMAJDKE_OFFSET UNITYSDK_OFFSET(0x19357650)
#define JGNCIONCKNN_PNJKFOILFOB_OFFSET UNITYSDK_OFFSET(0x19356650)
#define JGNCIONCKNN__ONBIND_OFFSET UNITYSDK_OFFSET(0x19353C00)
#define JGNCIONCKNN__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x19353B70)
#define JGNCIONCKNN__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19354430)

inline static constexpr unsigned int JGNCIONCKNN_TypeDefinitionIndex = 73983;

	class JGNCIONCKNN : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x60
		::RPG::Client::PrefabLoadMeta* EKNBMKIEFDM; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpecialSkillButtonGroupType, ::IPDLAKOLBFA*>* CIFIFFIIMOM; // 0x70
		::RPG::GameCore::EntityManager* LPILDKDAGDP; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IPDLAKOLBFA*>* HAAAODHMLMF; // 0x80
		static ::JIKBJMHEJNN** StaticGet_KGBIHFFCBFF()
		{
			return (::JIKBJMHEJNN**)UnitySDK::FromName("", "JGNCIONCKNN")->GetStaticField(0x6EE80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGNCIONCKNN_CCTOR_OFFSET))();
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + JGNCIONCKNN__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN__SETUPVIEW_OFFSET))(this);
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
