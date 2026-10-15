#pragma once
#include "unitysdk/unitysdk.h"
class ECAGMOOFEAI;
namespace RPG::GameCore { class TaskContext; }

#define CBDDNNMLHPI_CTOR_OFFSET UNITYSDK_OFFSET(0xC498230)
#define CBDDNNMLHPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC498260)

inline static constexpr unsigned int CBDDNNMLHPI_TypeDefinitionIndex = 53830;

	class CBDDNNMLHPI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ECAGMOOFEAI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ECAGMOOFEAI*))((::PBYTE)hIl2Cpp + CBDDNNMLHPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDNNMLHPI_ONTASKBEGIN_OFFSET))(this);
		}

	};
