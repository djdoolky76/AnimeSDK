#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsInElationTime; }
namespace RPG::GameCore { class TaskContext; }

#define HGFKBMJGPPL_CTOR_OFFSET UNITYSDK_OFFSET(0x15C8C600)
#define HGFKBMJGPPL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15C8C630)

inline static constexpr unsigned int HGFKBMJGPPL_TypeDefinitionIndex = 54666;

	class HGFKBMJGPPL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInElationTime* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInElationTime*))((::PBYTE)hIl2Cpp + HGFKBMJGPPL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFKBMJGPPL_EVALUATE_OFFSET))(this);
		}

	};
