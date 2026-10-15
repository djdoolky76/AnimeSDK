#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnterFlipperLightDeviceControl; }
namespace RPG::GameCore { class TaskContext; }

#define EPLFDNMEPOC_CTOR_OFFSET UNITYSDK_OFFSET(0x155CBB10)
#define EPLFDNMEPOC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155CBB40)

inline static constexpr unsigned int EPLFDNMEPOC_TypeDefinitionIndex = 52760;

	class EPLFDNMEPOC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterFlipperLightDeviceControl* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterFlipperLightDeviceControl*))((::PBYTE)hIl2Cpp + EPLFDNMEPOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLFDNMEPOC_ONTASKBEGIN_OFFSET))(this);
		}

	};
