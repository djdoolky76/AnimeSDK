#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareParamString; }
namespace RPG::GameCore { class TaskContext; }

#define KGFHDFBAKKH_CTOR_OFFSET UNITYSDK_OFFSET(0xB3DDA90)
#define KGFHDFBAKKH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB3DDAC0)

	class KGFHDFBAKKH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareParamString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareParamString*))((::PBYTE)hIl2Cpp + KGFHDFBAKKH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFHDFBAKKH_EVALUATE_OFFSET))(this);
		}

	};
