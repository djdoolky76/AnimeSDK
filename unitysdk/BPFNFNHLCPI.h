#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DecoupleParentTransform; }
namespace RPG::GameCore { class TaskContext; }

#define BPFNFNHLCPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6015F0)
#define BPFNFNHLCPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B601620)

inline static constexpr unsigned int BPFNFNHLCPI_TypeDefinitionIndex = 56168;

	class BPFNFNHLCPI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DecoupleParentTransform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DecoupleParentTransform*))((::PBYTE)hIl2Cpp + BPFNFNHLCPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFNFNHLCPI_ONTASKBEGIN_OFFSET))(this);
		}

	};
