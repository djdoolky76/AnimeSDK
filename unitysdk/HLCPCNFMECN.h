#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOIKMFOGHAO.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define HLCPCNFMECN_CTOR_OFFSET UNITYSDK_OFFSET(0x1989D870)
#define HLCPCNFMECN_FHLALJENMHB_OFFSET UNITYSDK_OFFSET(0x1989C8B0)
#define HLCPCNFMECN_FJDKOFADIOF_OFFSET UNITYSDK_OFFSET(0x1989C9A0)
#define HLCPCNFMECN_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1989D6B0)
#define HLCPCNFMECN_LEHKGLNGAGF_OFFSET UNITYSDK_OFFSET(0x1989D860)
#define HLCPCNFMECN_LHKAHDPDIAK_OFFSET UNITYSDK_OFFSET(0x1989CAC0)
#define HLCPCNFMECN_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x1989D7B0)
#define HLCPCNFMECN_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x1989D700)
#define HLCPCNFMECN_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x1989D840)
#define HLCPCNFMECN_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1989D800)

inline static constexpr unsigned int HLCPCNFMECN_TypeDefinitionIndex = 59057;

	class HLCPCNFMECN : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* PEEGKDBDBNO; // 0x10
		::System::String* CGBLGAHEEKJ; // 0x18
		::MOIKMFOGHAO HBKCICMELMM; // 0x20
		::System::Action* CHOOMNGLJHI; // 0x40
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x48
		::System::Boolean CNHKFIINEBD; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCPCNFMECN_CTOR_OFFSET))(this);
		}

		::System::Void FHLALJENMHB(::RPG::GameCore::GameEntity* a1, ::MOIKMFOGHAO a2, ::System::Boolean a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::MOIKMFOGHAO, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HLCPCNFMECN_FHLALJENMHB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCPCNFMECN_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void LHKAHDPDIAK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLCPCNFMECN_LHKAHDPDIAK_OFFSET))(this, a1);
		}

		::System::Void FJDKOFADIOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCPCNFMECN_FJDKOFADIOF_OFFSET))(this);
		}

		::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HLCPCNFMECN_ONSPAWNASYNC_OFFSET))(this, a1);
		}

		::System::Void OnCancelSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCPCNFMECN_ONCANCELSPAWN_OFFSET))(this);
		}

		::System::Boolean UseLightWeightDeactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCPCNFMECN_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::MOIKMFOGHAO PEFLJDOKOIL()
		{
			return ((::MOIKMFOGHAO(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCPCNFMECN_PEFLJDOKOIL_OFFSET))(this);
		}

		::System::Boolean LEHKGLNGAGF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCPCNFMECN_LEHKGLNGAGF_OFFSET))(this);
		}

	};
