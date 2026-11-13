#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearRecordEntityFormation; }
namespace RPG::GameCore { class TaskContext; }

#define KKKNIOCFOLO_CTOR_OFFSET UNITYSDK_OFFSET(0x17358A10)
#define KKKNIOCFOLO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17358A40)

inline static constexpr unsigned int KKKNIOCFOLO_TypeDefinitionIndex = 56466;

	class KKKNIOCFOLO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearRecordEntityFormation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearRecordEntityFormation*))((::PBYTE)hIl2Cpp + KKKNIOCFOLO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKNIOCFOLO_ONTASKBEGIN_OFFSET))(this);
		}

	};
