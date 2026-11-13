#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/GridFightChargeType.h"
#include "unitysdk/DMGDLANJGMI.h"
class MKOLBIIIPAI;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define IDNCOAGMGGG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17796E10)
#define IDNCOAGMGGG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17797090)
#define IDNCOAGMGGG_BDDHGAHHMHP_OFFSET UNITYSDK_OFFSET(0x17796B00)
#define IDNCOAGMGGG_CTOR_OFFSET UNITYSDK_OFFSET(0x177972D0)
#define IDNCOAGMGGG_EOOFCDEEKMN_OFFSET UNITYSDK_OFFSET(0x177961F0)
#define IDNCOAGMGGG_FDEDCIGKBKH_OFFSET UNITYSDK_OFFSET(0x17795F30)
#define IDNCOAGMGGG_FJOHMOAKAMO_OFFSET UNITYSDK_OFFSET(0x17795D20)
#define IDNCOAGMGGG_GBMJPJEDFFM_OFFSET UNITYSDK_OFFSET(0x17796A10)
#define IDNCOAGMGGG_GHGPOIFGFLD_OFFSET UNITYSDK_OFFSET(0x17796530)
#define IDNCOAGMGGG_GHOGEOGCIFN_OFFSET UNITYSDK_OFFSET(0x17796140)
#define IDNCOAGMGGG_HFJBIDCJOIG_OFFSET UNITYSDK_OFFSET(0x17796890)
#define IDNCOAGMGGG_IDAOPHJMNEO_OFFSET UNITYSDK_OFFSET(0x177967D0)
#define IDNCOAGMGGG_KBDJNCNCFBE_OFFSET UNITYSDK_OFFSET(0x17795BE0)
#define IDNCOAGMGGG_KFODADCGAME_OFFSET UNITYSDK_OFFSET(0x17795CC0)
#define IDNCOAGMGGG_KJGAJPPLMDP_OFFSET UNITYSDK_OFFSET(0x17796020)
#define IDNCOAGMGGG_KNAGFOEMOAL_OFFSET UNITYSDK_OFFSET(0x17796BC0)
#define IDNCOAGMGGG_KPBPALMLIMO_OFFSET UNITYSDK_OFFSET(0x17796350)
#define IDNCOAGMGGG_LJBBHDAAMKC_OFFSET UNITYSDK_OFFSET(0x17795AC0)
#define IDNCOAGMGGG_NFMNJINANAN_OFFSET UNITYSDK_OFFSET(0x17796C80)
#define IDNCOAGMGGG_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x17795DD0)
#define IDNCOAGMGGG_NPAPILEODPF_OFFSET UNITYSDK_OFFSET(0x177962A0)
#define IDNCOAGMGGG_OJOHGDBGIFL_OFFSET UNITYSDK_OFFSET(0x17795FC0)
#define IDNCOAGMGGG_PHLIIPCKNII_OFFSET UNITYSDK_OFFSET(0x17796710)
#define IDNCOAGMGGG__ONBIND_OFFSET UNITYSDK_OFFSET(0x17795830)

inline static constexpr unsigned int IDNCOAGMGGG_TypeDefinitionIndex = 74317;

	class IDNCOAGMGGG : public ::FMPCODLIOLG
	{
	public:
		::Il2CppArray<::RPG::GameCore::GridFightChargeType>* DHMAHKNDMNL; // 0x60
		::RPG::GameCore::BattleGridFightAvatarData* OAEOLANBFMB; // 0x68
		::UnityEngine::Transform* FBPEIJECHHJ; // 0x70
		::UnityEngine::Transform* EKCFKCLNPPM; // 0x78
		::UnityEngine::Transform* FPDKGPNCACA; // 0x80
		::UnityEngine::Transform* FNMJFBCDOHG; // 0x88
		::RPG::GameCore::GameEntity* NOKBLBCFKBB; // 0x90
		::MKOLBIIIPAI* OFGFMBJJKDB; // 0x98
		::UnityEngine::Transform* MOBOBJJCDDK; // 0xA0
		::RPG::GameCore::GameEntity* JDOAGFALGGA; // 0xA8
		::System::UInt32 EGNADFEBIPB; // 0xB0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG__ONBIND_OFFSET))(this);
		}

		::System::Void LJBBHDAAMKC(::RPG::GameCore::LevelBattleEventCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_LJBBHDAAMKC_OFFSET))(this, a1);
		}

		::System::Void KFODADCGAME(::DMGDLANJGMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMGDLANJGMI))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_KFODADCGAME_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void FJOHMOAKAMO(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_FJOHMOAKAMO_OFFSET))(this, a1, a2);
		}

		::System::Void KBDJNCNCFBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_KBDJNCNCFBE_OFFSET))(this);
		}

		::System::Void GHOGEOGCIFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_GHOGEOGCIFN_OFFSET))(this);
		}

		::System::Void KPBPALMLIMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_KPBPALMLIMO_OFFSET))(this);
		}

		::System::Void GHGPOIFGFLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_GHGPOIFGFLD_OFFSET))(this);
		}

		::System::Void KJGAJPPLMDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_KJGAJPPLMDP_OFFSET))(this);
		}

		::System::Void FDEDCIGKBKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_FDEDCIGKBKH_OFFSET))(this);
		}

		::System::Boolean OJOHGDBGIFL(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_OJOHGDBGIFL_OFFSET))(this, a1);
		}

		::System::Boolean BDDHGAHHMHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_BDDHGAHHMHP_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GBMJPJEDFFM()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_GBMJPJEDFFM_OFFSET))(this);
		}

		::System::Boolean NPAPILEODPF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_NPAPILEODPF_OFFSET))(this);
		}

		::System::Boolean EOOFCDEEKMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_EOOFCDEEKMN_OFFSET))(this);
		}

		::System::Boolean HFJBIDCJOIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_HFJBIDCJOIG_OFFSET))(this);
		}

		::System::Boolean PHLIIPCKNII()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_PHLIIPCKNII_OFFSET))(this);
		}

		::System::Boolean IDAOPHJMNEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_IDAOPHJMNEO_OFFSET))(this);
		}

		::System::Void KNAGFOEMOAL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_KNAGFOEMOAL_OFFSET))(this, a1);
		}

		::System::Void NFMNJINANAN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_NFMNJINANAN_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
