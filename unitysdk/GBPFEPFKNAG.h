#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OpticalIllusionSetFinalPoint; }
namespace RPG::GameCore { class TaskContext; }

#define GBPFEPFKNAG_CTOR_OFFSET UNITYSDK_OFFSET(0x15959420)
#define GBPFEPFKNAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15959790)

inline static constexpr unsigned int GBPFEPFKNAG_TypeDefinitionIndex = 53043;

	class GBPFEPFKNAG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpticalIllusionSetFinalPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpticalIllusionSetFinalPoint*))((::PBYTE)hIl2Cpp + GBPFEPFKNAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPFEPFKNAG_ONTASKBEGIN_OFFSET))(this);
		}

	};
