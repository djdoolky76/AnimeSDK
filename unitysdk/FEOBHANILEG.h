#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class InitIsometricRoadLinker; }
namespace RPG::GameCore { class TaskContext; }

#define FEOBHANILEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1572CA50)
#define FEOBHANILEG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1572CA80)

inline static constexpr unsigned int FEOBHANILEG_TypeDefinitionIndex = 52928;

	class FEOBHANILEG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitIsometricRoadLinker* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitIsometricRoadLinker*))((::PBYTE)hIl2Cpp + FEOBHANILEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEOBHANILEG_ONTASKBEGIN_OFFSET))(this);
		}

	};
