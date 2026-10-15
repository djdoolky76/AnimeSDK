#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SwitchPhotographDragMode; }
namespace RPG::GameCore { class TaskContext; }

#define JJJDCOODOAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB200F30)
#define JJJDCOODOAK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB200F60)

inline static constexpr unsigned int JJJDCOODOAK_TypeDefinitionIndex = 53323;

	class JJJDCOODOAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchPhotographDragMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchPhotographDragMode*))((::PBYTE)hIl2Cpp + JJJDCOODOAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJDCOODOAK_ONTASKBEGIN_OFFSET))(this);
		}

	};
