#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByContainsParamFlag; }
namespace RPG::GameCore { class TaskContext; }

#define MGIINKFJOJE_CTOR_OFFSET UNITYSDK_OFFSET(0xB920760)
#define MGIINKFJOJE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB920790)

	class MGIINKFJOJE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByContainsParamFlag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByContainsParamFlag*))((::PBYTE)hIl2Cpp + MGIINKFJOJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIINKFJOJE_EVALUATE_OFFSET))(this);
		}

	};
