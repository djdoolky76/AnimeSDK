#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropSetupOptionsTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define PHFGKKBLHGL_CTOR_OFFSET UNITYSDK_OFFSET(0xC243E60)
#define PHFGKKBLHGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC243E90)

inline static constexpr unsigned int PHFGKKBLHGL_TypeDefinitionIndex = 53183;

	class PHFGKKBLHGL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetupOptionsTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetupOptionsTrigger*))((::PBYTE)hIl2Cpp + PHFGKKBLHGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFGKKBLHGL_ONTASKBEGIN_OFFSET))(this);
		}

	};
