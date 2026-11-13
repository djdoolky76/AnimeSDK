#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DriveCurvePropGroupObject; }
namespace RPG::GameCore { class TaskContext; }

#define BMKDKFADJAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A750780)
#define BMKDKFADJAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7507B0)
#define BMKDKFADJAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7507F0)

inline static constexpr unsigned int BMKDKFADJAC_TypeDefinitionIndex = 59329;

	class BMKDKFADJAC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DriveCurvePropGroupObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DriveCurvePropGroupObject*))((::PBYTE)hIl2Cpp + BMKDKFADJAC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKDKFADJAC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKDKFADJAC_ONTASKBEGIN_OFFSET))(this);
		}

	};
