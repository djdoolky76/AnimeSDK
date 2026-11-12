#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PhotoGraphAimTarget; }
namespace RPG::GameCore { class TaskContext; }

#define MJLIPBLAJJE_CTOR_OFFSET UNITYSDK_OFFSET(0xC228640)
#define MJLIPBLAJJE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC228670)

inline static constexpr unsigned int MJLIPBLAJJE_TypeDefinitionIndex = 54253;

	class MJLIPBLAJJE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimTarget*))((::PBYTE)hIl2Cpp + MJLIPBLAJJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLIPBLAJJE_ONTASKBEGIN_OFFSET))(this);
		}

	};
