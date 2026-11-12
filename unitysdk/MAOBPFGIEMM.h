#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetGraphDynamicString; }
namespace RPG::GameCore { class TaskContext; }

#define MAOBPFGIEMM_CTOR_OFFSET UNITYSDK_OFFSET(0xC0B7A80)
#define MAOBPFGIEMM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0B7AB0)

inline static constexpr unsigned int MAOBPFGIEMM_TypeDefinitionIndex = 54401;

	class MAOBPFGIEMM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetGraphDynamicString*))((::PBYTE)hIl2Cpp + MAOBPFGIEMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOBPFGIEMM_ONTASKBEGIN_OFFSET))(this);
		}

	};
