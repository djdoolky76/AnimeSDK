#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class InfiniteWaveSortByActivity340; }
namespace RPG::GameCore { class TaskContext; }

#define NJONBPFHKNF_CTOR_OFFSET UNITYSDK_OFFSET(0xC50D530)
#define NJONBPFHKNF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC50D560)

inline static constexpr unsigned int NJONBPFHKNF_TypeDefinitionIndex = 56303;

	class NJONBPFHKNF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InfiniteWaveSortByActivity340* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InfiniteWaveSortByActivity340*))((::PBYTE)hIl2Cpp + NJONBPFHKNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJONBPFHKNF_ONTASKBEGIN_OFFSET))(this);
		}

	};
