#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class InitFlipperLightDevice; }
namespace RPG::GameCore { class TaskContext; }

#define BLIILGPDPPI_CTOR_OFFSET UNITYSDK_OFFSET(0xC409B60)
#define BLIILGPDPPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC409B90)

inline static constexpr unsigned int BLIILGPDPPI_TypeDefinitionIndex = 53910;

	class BLIILGPDPPI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitFlipperLightDevice* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitFlipperLightDevice*))((::PBYTE)hIl2Cpp + BLIILGPDPPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIILGPDPPI_ONTASKBEGIN_OFFSET))(this);
		}

	};
