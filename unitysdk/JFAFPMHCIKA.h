#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DisableSelectionProp; }
namespace RPG::GameCore { class TaskContext; }

#define JFAFPMHCIKA_CTOR_OFFSET UNITYSDK_OFFSET(0x16643500)
#define JFAFPMHCIKA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16643530)

inline static constexpr unsigned int JFAFPMHCIKA_TypeDefinitionIndex = 58085;

	class JFAFPMHCIKA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableSelectionProp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableSelectionProp*))((::PBYTE)hIl2Cpp + JFAFPMHCIKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAFPMHCIKA_ONTASKBEGIN_OFFSET))(this);
		}

	};
