#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TraceEntityMappingInfo; }

#define MMNNJGFBPHK_CTOR_OFFSET UNITYSDK_OFFSET(0xB9DE630)
#define MMNNJGFBPHK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9DE660)

	class MMNNJGFBPHK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TraceEntityMappingInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TraceEntityMappingInfo*))((::PBYTE)hIl2Cpp + MMNNJGFBPHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNNJGFBPHK_ONTASKBEGIN_OFFSET))(this);
		}

	};
