#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowPropSceneObjClickHint; }
namespace RPG::GameCore { class TaskContext; }

#define PDPOOGPDLDC_CTOR_OFFSET UNITYSDK_OFFSET(0xC01C660)
#define PDPOOGPDLDC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC01C690)

inline static constexpr unsigned int PDPOOGPDLDC_TypeDefinitionIndex = 53284;

	class PDPOOGPDLDC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowPropSceneObjClickHint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowPropSceneObjClickHint*))((::PBYTE)hIl2Cpp + PDPOOGPDLDC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPOOGPDLDC_ONTASKBEGIN_OFFSET))(this);
		}

	};
