#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CharacterChangePhase; }
namespace RPG::GameCore { class TaskContext; }

#define ENDPJINEMJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1559CE70)
#define ENDPJINEMJM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1559CE80)
#define ENDPJINEMJM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1559CEC0)
#define ENDPJINEMJM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1559D260)
#define ENDPJINEMJM_TICK_OFFSET UNITYSDK_OFFSET(0x1559D2B0)

inline static constexpr unsigned int ENDPJINEMJM_TypeDefinitionIndex = 54935;

	class ENDPJINEMJM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CharacterChangePhase* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterChangePhase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterChangePhase*))((::PBYTE)hIl2Cpp + ENDPJINEMJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDPJINEMJM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDPJINEMJM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDPJINEMJM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENDPJINEMJM_TICK_OFFSET))(this, a1);
		}

	};
