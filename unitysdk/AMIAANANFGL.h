#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DestroyPropTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define AMIAANANFGL_CTOR_OFFSET UNITYSDK_OFFSET(0x15576130)
#define AMIAANANFGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15576160)

inline static constexpr unsigned int AMIAANANFGL_TypeDefinitionIndex = 58078;

	class AMIAANANFGL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyPropTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyPropTrigger*))((::PBYTE)hIl2Cpp + AMIAANANFGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIAANANFGL_ONTASKBEGIN_OFFSET))(this);
		}

	};
