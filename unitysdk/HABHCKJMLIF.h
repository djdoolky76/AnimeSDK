#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StopCurrentLittleGame; }
namespace RPG::GameCore { class TaskContext; }

#define HABHCKJMLIF_CTOR_OFFSET UNITYSDK_OFFSET(0x15B70A80)
#define HABHCKJMLIF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B70AB0)

inline static constexpr unsigned int HABHCKJMLIF_TypeDefinitionIndex = 52979;

	class HABHCKJMLIF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopCurrentLittleGame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopCurrentLittleGame*))((::PBYTE)hIl2Cpp + HABHCKJMLIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HABHCKJMLIF_ONTASKBEGIN_OFFSET))(this);
		}

	};
