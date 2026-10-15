#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsAutoBattle; }
namespace RPG::GameCore { class TaskContext; }

#define OAGLDOFPCEO_CTOR_OFFSET UNITYSDK_OFFSET(0xBD19F20)
#define OAGLDOFPCEO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBD19F50)

inline static constexpr unsigned int OAGLDOFPCEO_TypeDefinitionIndex = 54634;

	class OAGLDOFPCEO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsAutoBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsAutoBattle*))((::PBYTE)hIl2Cpp + OAGLDOFPCEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAGLDOFPCEO_EVALUATE_OFFSET))(this);
		}

	};
