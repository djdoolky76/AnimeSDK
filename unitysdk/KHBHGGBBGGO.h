#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByIsInRotation; }
namespace RPG::GameCore { class TaskContext; }

#define KHBHGGBBGGO_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F5D10)
#define KHBHGGBBGGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3F5D40)

inline static constexpr unsigned int KHBHGGBBGGO_TypeDefinitionIndex = 54466;

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
