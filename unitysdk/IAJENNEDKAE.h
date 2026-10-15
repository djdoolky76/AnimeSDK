#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class AdvFilterNearbyMonsters; }
namespace RPG::GameCore { class TaskContext; }

#define IAJENNEDKAE_CTOR_OFFSET UNITYSDK_OFFSET(0x15E03780)
#define IAJENNEDKAE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E03E50)
#define IAJENNEDKAE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E037B0)

inline static constexpr unsigned int IAJENNEDKAE_TypeDefinitionIndex = 52373;

	class IAJENNEDKAE
	{
	public:
		::GELIALJDFBL* PAEHDGLDOMH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvFilterNearbyMonsters* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvFilterNearbyMonsters*))((::PBYTE)hIl2Cpp + IAJENNEDKAE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJENNEDKAE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJENNEDKAE_DISPOSE_OFFSET))(this);
		}

	};
