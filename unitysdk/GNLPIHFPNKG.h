#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OpticalIllusionExitPerformance; }
namespace RPG::GameCore { class TaskContext; }

#define GNLPIHFPNKG_CTOR_OFFSET UNITYSDK_OFFSET(0x15B16670)
#define GNLPIHFPNKG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B166A0)

inline static constexpr unsigned int GNLPIHFPNKG_TypeDefinitionIndex = 53041;

	class GNLPIHFPNKG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpticalIllusionExitPerformance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpticalIllusionExitPerformance*))((::PBYTE)hIl2Cpp + GNLPIHFPNKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLPIHFPNKG_ONTASKBEGIN_OFFSET))(this);
		}

	};
