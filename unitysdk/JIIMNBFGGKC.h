#pragma once
#include "unitysdk/unitysdk.h"
class EFHJJIGLPDL;
class PKBOEALAKCM;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Side_LookAtTarget; }
namespace RPG::GameCore { class TaskContext; }

#define JIIMNBFGGKC_CTOR_OFFSET UNITYSDK_OFFSET(0xB1FB630)
#define JIIMNBFGGKC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1FB780)
#define JIIMNBFGGKC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB1FB8A0)
#define JIIMNBFGGKC_TICK_OFFSET UNITYSDK_OFFSET(0xB1FB7D0)

inline static constexpr unsigned int JIIMNBFGGKC_TypeDefinitionIndex = 52238;

	class JIIMNBFGGKC
	{
	public:
		::EFHJJIGLPDL* AKEHBGMFJIF; // 0x28
		::PKBOEALAKCM* LNCOFKLGDJG; // 0x30
		::RPG::GameCore::GameEntity* PIJPEKHJHHI; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_LookAtTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_LookAtTarget*))((::PBYTE)hIl2Cpp + JIIMNBFGGKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIIMNBFGGKC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JIIMNBFGGKC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIIMNBFGGKC_ONTASKRESET_OFFSET))(this);
		}

	};
