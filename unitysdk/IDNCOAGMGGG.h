#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/GridFightChargeType.h"
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define IDNCOAGMGGG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15EDEA50)
#define IDNCOAGMGGG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15EDEC90)
#define IDNCOAGMGGG_CTOR_OFFSET UNITYSDK_OFFSET(0x15EDEE90)
#define IDNCOAGMGGG_EOOFCDEEKMN_OFFSET UNITYSDK_OFFSET(0x15EDE160)
#define IDNCOAGMGGG_GHGPOIFGFLD_OFFSET UNITYSDK_OFFSET(0x15EDE4A0)
#define IDNCOAGMGGG_GHOGEOGCIFN_OFFSET UNITYSDK_OFFSET(0x15EDE0B0)
#define IDNCOAGMGGG_HFJBIDCJOIG_OFFSET UNITYSDK_OFFSET(0x15EDE8E0)
#define IDNCOAGMGGG_IDAOPHJMNEO_OFFSET UNITYSDK_OFFSET(0x15EDE820)
#define IDNCOAGMGGG_KBDJNCNCFBE_OFFSET UNITYSDK_OFFSET(0x15EDDE50)
#define IDNCOAGMGGG_KJGAJPPLMDP_OFFSET UNITYSDK_OFFSET(0x15EDE680)
#define IDNCOAGMGGG_KNAGFOEMOAL_OFFSET UNITYSDK_OFFSET(0x15EDE990)
#define IDNCOAGMGGG_KPBPALMLIMO_OFFSET UNITYSDK_OFFSET(0x15EDE2C0)
#define IDNCOAGMGGG_LJBBHDAAMKC_OFFSET UNITYSDK_OFFSET(0x15EDDD30)
#define IDNCOAGMGGG_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x15EDDF20)
#define IDNCOAGMGGG_NPAPILEODPF_OFFSET UNITYSDK_OFFSET(0x15EDE210)
#define IDNCOAGMGGG_PHLIIPCKNII_OFFSET UNITYSDK_OFFSET(0x15EDE760)
#define IDNCOAGMGGG__ONBIND_OFFSET UNITYSDK_OFFSET(0x15EDDAA0)

inline static constexpr unsigned int IDNCOAGMGGG_TypeDefinitionIndex = 72248;

	class IDNCOAGMGGG : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* FNMJFBCDOHG; // 0x60
		::UnityEngine::Transform* EKCFKCLNPPM; // 0x68
		::RPG::GameCore::GameEntity* JDOAGFALGGA; // 0x70
		::UnityEngine::Transform* MOBOBJJCDDK; // 0x78
		::UnityEngine::Transform* FBPEIJECHHJ; // 0x80
		::RPG::GameCore::BattleGridFightAvatarData* OAEOLANBFMB; // 0x88
		::Il2CppArray<::RPG::GameCore::GridFightChargeType>* DHMAHKNDMNL; // 0x90
		::UnityEngine::Transform* FPDKGPNCACA; // 0x98
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
