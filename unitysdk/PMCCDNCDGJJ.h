#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraConfigChange; }

#define PMCCDNCDGJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC30E3A0)

inline static constexpr unsigned int PMCCDNCDGJJ_TypeDefinitionIndex = 69563;

	class PMCCDNCDGJJ : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x10
		::RPG::GameCore::VCameraConfigChange* FABCCDICDLO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCCDNCDGJJ_CTOR_OFFSET))(this);
		}

	};
