#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IDEGLFHLFPE_EffectType.h"
class JEJLOGJHKFN;
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }

#define IDEGLFHLFPE_AOCANOGJPDC_OFFSET UNITYSDK_OFFSET(0x15EB8160)
#define IDEGLFHLFPE_CTOR_OFFSET UNITYSDK_OFFSET(0x15EB8510)
#define IDEGLFHLFPE_EIMEDLNCNMO_OFFSET UNITYSDK_OFFSET(0x15EB8240)
#define IDEGLFHLFPE_FGFILICHKOH_OFFSET UNITYSDK_OFFSET(0x15EB81E0)
#define IDEGLFHLFPE_FMOLAHJHOMI_OFFSET UNITYSDK_OFFSET(0x15EB7EA0)
#define IDEGLFHLFPE_GJFNGHECENA_OFFSET UNITYSDK_OFFSET(0x15EB7E20)
#define IDEGLFHLFPE_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x15EB7EF0)
#define IDEGLFHLFPE_PKLFICMKCOI_OFFSET UNITYSDK_OFFSET(0x15EB80D0)
#define IDEGLFHLFPE__ONBIND_OFFSET UNITYSDK_OFFSET(0x15EB7CA0)

inline static constexpr unsigned int IDEGLFHLFPE_TypeDefinitionIndex = 72263;

	class IDEGLFHLFPE : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Button* AAFGIHCCPOP; // 0x60
		::JEJLOGJHKFN* HODEFJKEDJD; // 0x68
		::UnityEngine::Animator* APPGGMLEPLN; // 0x70
		::RPG::Client::PrefabLoadMeta* JMJJBJOAEPB; // 0x78
		::UnityEngine::GameObject* PJDPBHBIFFF; // 0x80
		::RPG::Client::GridFightEquipItemConfig* CJMEHHAEPDA; // 0x88
		::System::Boolean BFGEKIHIDAE; // 0x90
		// static const ::System::String* BDACPPLKLGL; // 0x0
		// static const ::System::String* JNHGEEFDKFG; // 0x0
		// static const ::System::String* HJOGMPDEOIL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEGLFHLFPE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEGLFHLFPE__ONBIND_OFFSET))(this);
		}

		::System::Void GJFNGHECENA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IDEGLFHLFPE_GJFNGHECENA_OFFSET))(this, a1);
		}

		::System::Boolean FMOLAHJHOMI(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IDEGLFHLFPE_FMOLAHJHOMI_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::BattleGridFightEquipData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightEquipData*))((::PBYTE)hIl2Cpp + IDEGLFHLFPE_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void PKLFICMKCOI(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + IDEGLFHLFPE_PKLFICMKCOI_OFFSET))(this, a1);
		}

		::System::Void AOCANOGJPDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDEGLFHLFPE_AOCANOGJPDC_OFFSET))(this, a1);
		}

		::System::Void FGFILICHKOH(::IDEGLFHLFPE_EffectType a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDEGLFHLFPE_EffectType))((::PBYTE)hIl2Cpp + IDEGLFHLFPE_FGFILICHKOH_OFFSET))(this, a1);
		}

		::System::Void EIMEDLNCNMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEGLFHLFPE_EIMEDLNCNMO_OFFSET))(this);
		}

	};
