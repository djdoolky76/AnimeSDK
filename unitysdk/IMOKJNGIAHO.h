#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnBindPropsCablelines; }

#define IMOKJNGIAHO_CTOR_OFFSET UNITYSDK_OFFSET(0x164D5A50)
#define IMOKJNGIAHO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164D5A80)

inline static constexpr unsigned int IMOKJNGIAHO_TypeDefinitionIndex = 58840;

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
