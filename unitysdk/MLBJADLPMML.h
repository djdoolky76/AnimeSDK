#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RecoverAllCharactersHP; }
namespace RPG::GameCore { class TaskContext; }

#define MLBJADLPMML_CTOR_OFFSET UNITYSDK_OFFSET(0x1B914300)
#define MLBJADLPMML_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B914310)
#define MLBJADLPMML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B914350)
#define MLBJADLPMML_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B9147A0)
#define MLBJADLPMML_TICK_OFFSET UNITYSDK_OFFSET(0x1B9147F0)

inline static constexpr unsigned int MLBJADLPMML_TypeDefinitionIndex = 59627;

	class MLBJADLPMML : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RecoverAllCharactersHP* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RecoverAllCharactersHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RecoverAllCharactersHP*))((::PBYTE)hIl2Cpp + MLBJADLPMML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBJADLPMML_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBJADLPMML_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBJADLPMML_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MLBJADLPMML_TICK_OFFSET))(this, a1);
		}

	};
