#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHaveUniqueNameEffect; }
namespace RPG::GameCore { class TaskContext; }

#define DOEBIKPKLBF_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE14D0)
#define DOEBIKPKLBF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11FE1500)

inline static constexpr unsigned int DOEBIKPKLBF_TypeDefinitionIndex = 52598;

	class DOEBIKPKLBF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHaveUniqueNameEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHaveUniqueNameEffect*))((::PBYTE)hIl2Cpp + DOEBIKPKLBF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEBIKPKLBF_EVALUATE_OFFSET))(this);
		}

	};
