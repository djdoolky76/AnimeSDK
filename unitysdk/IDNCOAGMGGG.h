#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/GridFightChargeType.h"
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define IDNCOAGMGGG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15ED2B20)
#define IDNCOAGMGGG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15ED2D60)
#define IDNCOAGMGGG_CTOR_OFFSET UNITYSDK_OFFSET(0x15ED2F60)
#define IDNCOAGMGGG_EOOFCDEEKMN_OFFSET UNITYSDK_OFFSET(0x15ED2230)
#define IDNCOAGMGGG_GHGPOIFGFLD_OFFSET UNITYSDK_OFFSET(0x15ED2570)
#define IDNCOAGMGGG_GHOGEOGCIFN_OFFSET UNITYSDK_OFFSET(0x15ED2180)
#define IDNCOAGMGGG_HFJBIDCJOIG_OFFSET UNITYSDK_OFFSET(0x15ED29B0)
#define IDNCOAGMGGG_IDAOPHJMNEO_OFFSET UNITYSDK_OFFSET(0x15ED28F0)
#define IDNCOAGMGGG_KBDJNCNCFBE_OFFSET UNITYSDK_OFFSET(0x15ED1F20)
#define IDNCOAGMGGG_KJGAJPPLMDP_OFFSET UNITYSDK_OFFSET(0x15ED2750)
#define IDNCOAGMGGG_KNAGFOEMOAL_OFFSET UNITYSDK_OFFSET(0x15ED2A60)
#define IDNCOAGMGGG_KPBPALMLIMO_OFFSET UNITYSDK_OFFSET(0x15ED2390)
#define IDNCOAGMGGG_LJBBHDAAMKC_OFFSET UNITYSDK_OFFSET(0x15ED1E10)
#define IDNCOAGMGGG_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x15ED1FF0)
#define IDNCOAGMGGG_NPAPILEODPF_OFFSET UNITYSDK_OFFSET(0x15ED22E0)
#define IDNCOAGMGGG_PHLIIPCKNII_OFFSET UNITYSDK_OFFSET(0x15ED2830)
#define IDNCOAGMGGG__ONBIND_OFFSET UNITYSDK_OFFSET(0x15ED1B80)

inline static constexpr unsigned int IDNCOAGMGGG_TypeDefinitionIndex = 72247;

	class IDNCOAGMGGG : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleGridFightAvatarData* OAEOLANBFMB; // 0x60
		::UnityEngine::Transform* EKCFKCLNPPM; // 0x68
		::UnityEngine::Transform* FNMJFBCDOHG; // 0x70
		::RPG::GameCore::GameEntity* JDOAGFALGGA; // 0x78
		::UnityEngine::Transform* MOBOBJJCDDK; // 0x80
		::UnityEngine::Transform* FBPEIJECHHJ; // 0x88
		::UnityEngine::Transform* FPDKGPNCACA; // 0x90
		::Il2CppArray<::RPG::GameCore::GridFightChargeType>* DHMAHKNDMNL; // 0x98
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

		::System::Void NKPPGDENJAE(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_NKPPGDENJAE_OFFSET))(this, a1);
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

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNCOAGMGGG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
