#pragma once
#include "unitysdk/unitysdk.h"
class EGAMINIBAKN;
namespace RPG::GameCore { class TaskContext; }

#define DENAMJEOABK_CTOR_OFFSET UNITYSDK_OFFSET(0xE51BF40)
#define DENAMJEOABK_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE51BF70)

	class DENAMJEOABK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EGAMINIBAKN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EGAMINIBAKN*))((::PBYTE)hIl2Cpp + DENAMJEOABK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DENAMJEOABK_EVALUATE_OFFSET))(this);
		}

	};
