#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropSetSceneTVMenu; }
namespace RPG::GameCore { class TaskContext; }

#define MAHPPKKICCF_CTOR_OFFSET UNITYSDK_OFFSET(0xB84E940)
#define MAHPPKKICCF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB84E970)

inline static constexpr unsigned int MAHPPKKICCF_TypeDefinitionIndex = 58348;

	class MAHPPKKICCF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetSceneTVMenu* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetSceneTVMenu*))((::PBYTE)hIl2Cpp + MAHPPKKICCF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAHPPKKICCF_ONTASKBEGIN_OFFSET))(this);
		}

	};
