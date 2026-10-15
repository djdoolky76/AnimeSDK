#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyCurvePropGroupObjectState; }
namespace RPG::GameCore { class TaskContext; }

#define JEKMCICEIIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1662A0C0)
#define JEKMCICEIIB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1662A0F0)
#define JEKMCICEIIB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1662A130)

inline static constexpr unsigned int JEKMCICEIIB_TypeDefinitionIndex = 58214;

	class JEKMCICEIIB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyCurvePropGroupObjectState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyCurvePropGroupObjectState*))((::PBYTE)hIl2Cpp + JEKMCICEIIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKMCICEIIB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKMCICEIIB_ONTASKBEGIN_OFFSET))(this);
		}

	};
