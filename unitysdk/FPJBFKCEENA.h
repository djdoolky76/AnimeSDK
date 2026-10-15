#pragma once
#include "unitysdk/unitysdk.h"
class CEGJADNLKED;
namespace RPG::GameCore { class ST_ByFoundSmartObject; }
namespace RPG::GameCore { class TaskContext; }

#define FPJBFKCEENA_CTOR_OFFSET UNITYSDK_OFFSET(0x1591AF80)
#define FPJBFKCEENA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1591B040)

	class FPJBFKCEENA
	{
	public:
		::CEGJADNLKED* DFMOOFNKPOG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByFoundSmartObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByFoundSmartObject*))((::PBYTE)hIl2Cpp + FPJBFKCEENA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJBFKCEENA_EVALUATE_OFFSET))(this);
		}

	};
