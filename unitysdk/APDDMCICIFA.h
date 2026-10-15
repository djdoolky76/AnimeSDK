#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class CharacterChangeModel; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define APDDMCICIFA_CTOR_OFFSET UNITYSDK_OFFSET(0x15B99380)
#define APDDMCICIFA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B99410)
#define APDDMCICIFA_FJDKOFADIOF_OFFSET UNITYSDK_OFFSET(0x15B994F0)
#define APDDMCICIFA_LHKAHDPDIAK_OFFSET UNITYSDK_OFFSET(0x15B99660)
#define APDDMCICIFA_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x15B9A2A0)
#define APDDMCICIFA_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x15B9A200)
#define APDDMCICIFA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B99610)
#define APDDMCICIFA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B9A0F0)
#define APDDMCICIFA_TICK_OFFSET UNITYSDK_OFFSET(0x15B9A140)
#define APDDMCICIFA_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x15B9A300)

inline static constexpr unsigned int APDDMCICIFA_TypeDefinitionIndex = 54934;

	class APDDMCICIFA : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* MACKGFGJMLE; // 0x18
		::System::String* CGBLGAHEEKJ; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::UnityEngine::GameObject* PEEGKDBDBNO; // 0x30
		::RPG::GameCore::CharacterChangeModel* OFKGLJOAMLD; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterChangeModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterChangeModel*))((::PBYTE)hIl2Cpp + APDDMCICIFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDDMCICIFA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDDMCICIFA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDDMCICIFA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APDDMCICIFA_TICK_OFFSET))(this, a1);
		}

		::System::Void LHKAHDPDIAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDDMCICIFA_LHKAHDPDIAK_OFFSET))(this);
		}

		::System::Void FJDKOFADIOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDDMCICIFA_FJDKOFADIOF_OFFSET))(this);
		}

		::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + APDDMCICIFA_ONSPAWNASYNC_OFFSET))(this, a1);
		}

		::System::Void OnCancelSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDDMCICIFA_ONCANCELSPAWN_OFFSET))(this);
		}

		::System::Boolean UseLightWeightDeactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APDDMCICIFA_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

	};
