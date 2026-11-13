#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IDEGLFHLFPE_EffectType.h"
class JEJLOGJHKFN;
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }

#define IDEGLFHLFPE_AOCANOGJPDC_OFFSET UNITYSDK_OFFSET(0x1777BF10)
#define IDEGLFHLFPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1777C2B0)
#define IDEGLFHLFPE_EIMEDLNCNMO_OFFSET UNITYSDK_OFFSET(0x1777BFE0)
#define IDEGLFHLFPE_FGFILICHKOH_OFFSET UNITYSDK_OFFSET(0x1777BF80)
#define IDEGLFHLFPE_FMOLAHJHOMI_OFFSET UNITYSDK_OFFSET(0x1777BC10)
#define IDEGLFHLFPE_GJFNGHECENA_OFFSET UNITYSDK_OFFSET(0x1777BB90)
#define IDEGLFHLFPE_NKPPGDENJAE_1_OFFSET UNITYSDK_OFFSET(0x1777BE70)
#define IDEGLFHLFPE_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1777BC60)
#define IDEGLFHLFPE__ONBIND_OFFSET UNITYSDK_OFFSET(0x1777B900)

inline static constexpr unsigned int IDEGLFHLFPE_TypeDefinitionIndex = 74338;

	class IDEGLFHLFPE : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::GameObject* PJDPBHBIFFF; // 0x60
		::JEJLOGJHKFN* HODEFJKEDJD; // 0x68
		::RPG::Client::PrefabLoadMeta* JMJJBJOAEPB; // 0x70
		::RPG::Client::GridFightEquipItemData* CICAEADOHLJ; // 0x78
		::RPG::Client::GridFightEquipItemConfig* CJMEHHAEPDA; // 0x80
		::UnityEngine::Animator* APPGGMLEPLN; // 0x88
		::UnityEngine::UI::Button* AAFGIHCCPOP; // 0x90
		::System::Boolean BFGEKIHIDAE; // 0x98
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

		::System::Void NKPPGDENJAE_1(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + IDEGLFHLFPE_NKPPGDENJAE_1_OFFSET))(this, a1);
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
