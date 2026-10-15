#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareEntityAuthoritySide; }
namespace RPG::GameCore { class TaskContext; }

#define GPNFKDJIDBE_CTOR_OFFSET UNITYSDK_OFFSET(0x15B61660)
#define GPNFKDJIDBE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15B61690)

	class GPNFKDJIDBE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareEntityAuthoritySide*))((::PBYTE)hIl2Cpp + GPNFKDJIDBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNFKDJIDBE_EVALUATE_OFFSET))(this);
		}

	};
