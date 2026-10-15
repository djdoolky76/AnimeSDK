#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddTargetStancePreshowConfig; }
namespace RPG::GameCore { class TaskContext; }

#define PBFJNDGLPAK_CTOR_OFFSET UNITYSDK_OFFSET(0xBFE4E00)
#define PBFJNDGLPAK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFE4E30)

inline static constexpr unsigned int PBFJNDGLPAK_TypeDefinitionIndex = 54823;

	class PBFJNDGLPAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddTargetStancePreshowConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddTargetStancePreshowConfig*))((::PBYTE)hIl2Cpp + PBFJNDGLPAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFJNDGLPAK_ONTASKBEGIN_OFFSET))(this);
		}

	};
