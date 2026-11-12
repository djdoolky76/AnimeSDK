#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ListenTargetUseSkill; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define LHDAJCCPGNA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF40840)
#define LHDAJCCPGNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF40A30)
#define LHDAJCCPGNA_HHAJFDLEKCE_OFFSET UNITYSDK_OFFSET(0xBF40C30)
#define LHDAJCCPGNA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF408C0)
#define LHDAJCCPGNA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF409B0)
#define LHDAJCCPGNA_TICK_OFFSET UNITYSDK_OFFSET(0xBF40B90)

inline static constexpr unsigned int LHDAJCCPGNA_TypeDefinitionIndex = 54114;

	class LHDAJCCPGNA : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* HFOFIODMFGB; // 0x18
		::RPG::GameCore::ListenTargetUseSkill* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ListenTargetUseSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ListenTargetUseSkill*))((::PBYTE)hIl2Cpp + LHDAJCCPGNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDAJCCPGNA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDAJCCPGNA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDAJCCPGNA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHDAJCCPGNA_TICK_OFFSET))(this, a1);
		}

		::System::Void HHAJFDLEKCE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHDAJCCPGNA_HHAJFDLEKCE_OFFSET))(this, a1);
		}

	};
