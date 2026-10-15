#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyFateContentParam; }
namespace RPG::GameCore { class TaskContext; }

#define NNKCLJAHCEH_CTOR_OFFSET UNITYSDK_OFFSET(0xBCB6460)
#define NNKCLJAHCEH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCB6490)

inline static constexpr unsigned int NNKCLJAHCEH_TypeDefinitionIndex = 55201;

	class NNKCLJAHCEH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyFateContentParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyFateContentParam*))((::PBYTE)hIl2Cpp + NNKCLJAHCEH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKCLJAHCEH_ONTASKBEGIN_OFFSET))(this);
		}

	};
