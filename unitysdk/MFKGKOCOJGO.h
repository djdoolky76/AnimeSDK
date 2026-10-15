#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroGunPlayPuzzleModifyEnergy; }

#define MFKGKOCOJGO_CTOR_OFFSET UNITYSDK_OFFSET(0xB8FF020)
#define MFKGKOCOJGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8FF050)

inline static constexpr unsigned int MFKGKOCOJGO_TypeDefinitionIndex = 58956;

	class MFKGKOCOJGO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleModifyEnergy* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroGunPlayPuzzleModifyEnergy*))((::PBYTE)hIl2Cpp + MFKGKOCOJGO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKGKOCOJGO_ONTASKBEGIN_OFFSET))(this);
		}

	};
