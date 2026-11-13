#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvSetEnchantFeatureParam; }
namespace RPG::GameCore { class TaskContext; }

#define GLLFFIIDPPC_CTOR_OFFSET UNITYSDK_OFFSET(0x16C687D0)
#define GLLFFIIDPPC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16C68800)

inline static constexpr unsigned int GLLFFIIDPPC_TypeDefinitionIndex = 53600;

	class GLLFFIIDPPC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetEnchantFeatureParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetEnchantFeatureParam*))((::PBYTE)hIl2Cpp + GLLFFIIDPPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLFFIIDPPC_ONTASKBEGIN_OFFSET))(this);
		}

	};
