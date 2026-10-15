#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareCountOfBaseType; }
namespace RPG::GameCore { class TaskContext; }

#define COOPBJKJKGC_CTOR_OFFSET UNITYSDK_OFFSET(0xDCC5EE0)
#define COOPBJKJKGC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDCC5F10)

	class COOPBJKJKGC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCountOfBaseType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCountOfBaseType*))((::PBYTE)hIl2Cpp + COOPBJKJKGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COOPBJKJKGC_EVALUATE_OFFSET))(this);
		}

	};
