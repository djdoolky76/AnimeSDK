#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraConfigChange; }

#define PMCCDNCDGJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCC44980)

inline static constexpr unsigned int PMCCDNCDGJJ_TypeDefinitionIndex = 71520;

	class PMCCDNCDGJJ : public ::System::Object
	{
	public:
		::RPG::GameCore::VCameraConfigChange* FABCCDICDLO; // 0x10
		::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCCDNCDGJJ_CTOR_OFFSET))(this);
		}

	};
