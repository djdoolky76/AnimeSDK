#pragma once
#include "unitysdk/unitysdk.h"
class CNICIOEOIKB;
namespace RPG::GameCore { class TaskContext; }

#define JCHKLOCPFHC_CTOR_OFFSET UNITYSDK_OFFSET(0x16585000)
#define JCHKLOCPFHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16585030)

inline static constexpr unsigned int JCHKLOCPFHC_TypeDefinitionIndex = 52830;

	class JCHKLOCPFHC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CNICIOEOIKB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CNICIOEOIKB*))((::PBYTE)hIl2Cpp + JCHKLOCPFHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHKLOCPFHC_ONTASKBEGIN_OFFSET))(this);
		}

	};
