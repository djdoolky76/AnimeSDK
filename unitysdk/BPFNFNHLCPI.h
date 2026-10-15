#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DecoupleParentTransform; }
namespace RPG::GameCore { class TaskContext; }

#define BPFNFNHLCPI_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A46F0)
#define BPFNFNHLCPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1A4720)

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
