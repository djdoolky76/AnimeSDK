#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvEntitySetExtAnimLayerEnable; }
namespace RPG::GameCore { class TaskContext; }

#define EMLFLBBDLPG_CTOR_OFFSET UNITYSDK_OFFSET(0x155524D0)
#define EMLFLBBDLPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15552500)

inline static constexpr unsigned int EMLFLBBDLPG_TypeDefinitionIndex = 52369;

	class EMLFLBBDLPG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntitySetExtAnimLayerEnable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntitySetExtAnimLayerEnable*))((::PBYTE)hIl2Cpp + EMLFLBBDLPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLFLBBDLPG_ONTASKBEGIN_OFFSET))(this);
		}

	};
