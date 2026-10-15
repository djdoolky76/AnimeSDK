#pragma once
#include "unitysdk/unitysdk.h"
class KOFKLJILCOE;
namespace RPG::GameCore { class TaskContext; }

#define LGKKMIPGGFH_CTOR_OFFSET UNITYSDK_OFFSET(0xB693670)
#define LGKKMIPGGFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6936A0)

inline static constexpr unsigned int LGKKMIPGGFH_TypeDefinitionIndex = 55719;

	class LGKKMIPGGFH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KOFKLJILCOE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KOFKLJILCOE*))((::PBYTE)hIl2Cpp + LGKKMIPGGFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKKMIPGGFH_ONTASKBEGIN_OFFSET))(this);
		}

	};
