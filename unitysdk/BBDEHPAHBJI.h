#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class NBAJIOGLNNL;
namespace RPG::GameCore { class AdventureSkillCharacterComponent; }
namespace RPG::GameCore { class TaskContext; }

#define BBDEHPAHBJI_CTOR_OFFSET UNITYSDK_OFFSET(0x15E85170)
#define BBDEHPAHBJI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E85180)
#define BBDEHPAHBJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E851C0)
#define BBDEHPAHBJI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E85480)
#define BBDEHPAHBJI_PEKPIPMDBKP_OFFSET UNITYSDK_OFFSET(0x15E85380)
#define BBDEHPAHBJI_TICK_OFFSET UNITYSDK_OFFSET(0x15E853D0)

inline static constexpr unsigned int BBDEHPAHBJI_TypeDefinitionIndex = 52527;

	class BBDEHPAHBJI : public ::GELIALJDFBL
	{
	public:
		::NBAJIOGLNNL* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::AdventureSkillCharacterComponent* JLCCNPCBKCL; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NBAJIOGLNNL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NBAJIOGLNNL*))((::PBYTE)hIl2Cpp + BBDEHPAHBJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDEHPAHBJI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDEHPAHBJI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BBDEHPAHBJI_TICK_OFFSET))(this, a1);
		}

		::System::Void PEKPIPMDBKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDEHPAHBJI_PEKPIPMDBKP_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDEHPAHBJI_ONTASKRESET_OFFSET))(this);
		}

	};
