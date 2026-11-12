#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnBindPropsCablelines; }

#define IMOKJNGIAHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB8133F0)
#define IMOKJNGIAHO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB813420)

inline static constexpr unsigned int IMOKJNGIAHO_TypeDefinitionIndex = 60108;

	class IMOKJNGIAHO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnBindPropsCablelines* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnBindPropsCablelines*))((::PBYTE)hIl2Cpp + IMOKJNGIAHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOKJNGIAHO_ONTASKBEGIN_OFFSET))(this);
		}

	};
