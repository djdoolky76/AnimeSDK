#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class IKBAMHGDEJC;
namespace RPG::Client { class BattleAvatarNihiluxCustomUIData; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define GAEFEBMGIPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1686D810)
#define GAEFEBMGIPF_EMCJMNCKELO_OFFSET UNITYSDK_OFFSET(0x1686D5F0)
#define GAEFEBMGIPF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1686D660)
#define GAEFEBMGIPF__ONBIND_OFFSET UNITYSDK_OFFSET(0x1686D430)
#define GAEFEBMGIPF__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1686D560)
#define GAEFEBMGIPF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1686D4E0)

inline static constexpr unsigned int GAEFEBMGIPF_TypeDefinitionIndex = 74097;

	class GAEFEBMGIPF : public ::FMPCODLIOLG
	{
	public:
		::System::String* NHJNLPKCEIE; // 0x60
		::UnityEngine::GameObject* PACHDCGDDLF; // 0x68
		::RPG::Client::BattleAvatarNihiluxCustomUIData* EHNOGCBHACN; // 0x70
		::RPG::Client::PrefabLoadMeta* OGJJJANDJMP; // 0x78
		::IKBAMHGDEJC* PICMKGJOBLH; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEFEBMGIPF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEFEBMGIPF__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GAEFEBMGIPF__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEFEBMGIPF__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAEFEBMGIPF_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void EMCJMNCKELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEFEBMGIPF_EMCJMNCKELO_OFFSET))(this);
		}

	};
