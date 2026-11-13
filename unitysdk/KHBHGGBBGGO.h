#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByIsInRotation; }
namespace RPG::GameCore { class TaskContext; }

#define KHBHGGBBGGO_CTOR_OFFSET UNITYSDK_OFFSET(0x19785770)
#define KHBHGGBBGGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x197857A0)

inline static constexpr unsigned int KHBHGGBBGGO_TypeDefinitionIndex = 55630;

	class KHBHGGBBGGO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByIsInRotation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByIsInRotation*))((::PBYTE)hIl2Cpp + KHBHGGBBGGO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBHGGBBGGO_ONTASKBEGIN_OFFSET))(this);
		}

	};
