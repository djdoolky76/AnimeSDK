#pragma once
#include "unitysdk/unitysdk.h"
class MDPECFMPBMH;
namespace RPG::GameCore { class TaskContext; }

#define PNNFCILFPFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x184C6F20)
#define PNNFCILFPFJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x184C6F50)

inline static constexpr unsigned int PNNFCILFPFJ_TypeDefinitionIndex = 55328;

	class PNNFCILFPFJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MDPECFMPBMH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MDPECFMPBMH*))((::PBYTE)hIl2Cpp + PNNFCILFPFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNFCILFPFJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
