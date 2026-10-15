#pragma once
#include "unitysdk/unitysdk.h"
class EOCOMGDMJBD;
namespace RPG::GameCore { class TaskContext; }

#define AAEKGPILKFL_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C5510)
#define AAEKGPILKFL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0C5540)

	class AAEKGPILKFL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EOCOMGDMJBD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EOCOMGDMJBD*))((::PBYTE)hIl2Cpp + AAEKGPILKFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEKGPILKFL_ONTASKBEGIN_OFFSET))(this);
		}

	};
