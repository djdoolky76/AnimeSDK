#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ApplySwordTrainingOptionStrategy; }
namespace RPG::GameCore { class TaskContext; }

#define LDLPBOMDJLI_CTOR_OFFSET UNITYSDK_OFFSET(0xB635F40)
#define LDLPBOMDJLI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB635FF0)
#define LDLPBOMDJLI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB635F50)
#define LDLPBOMDJLI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB635FA0)
#define LDLPBOMDJLI_TICK_OFFSET UNITYSDK_OFFSET(0xB636130)

inline static constexpr unsigned int LDLPBOMDJLI_TypeDefinitionIndex = 57934;

	class LDLPBOMDJLI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ApplySwordTrainingOptionStrategy* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ApplySwordTrainingOptionStrategy* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ApplySwordTrainingOptionStrategy*))((::PBYTE)hIl2Cpp + LDLPBOMDJLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLPBOMDJLI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLPBOMDJLI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLPBOMDJLI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LDLPBOMDJLI_TICK_OFFSET))(this, a1);
		}

	};
