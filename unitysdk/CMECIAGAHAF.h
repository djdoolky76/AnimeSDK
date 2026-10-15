#pragma once
#include "unitysdk/unitysdk.h"
class AFONHNKGNLD;
namespace RPG::GameCore { class TaskContext; }

#define CMECIAGAHAF_CTOR_OFFSET UNITYSDK_OFFSET(0xDA29630)
#define CMECIAGAHAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA29660)

	class CMECIAGAHAF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AFONHNKGNLD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AFONHNKGNLD*))((::PBYTE)hIl2Cpp + CMECIAGAHAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMECIAGAHAF_ONTASKBEGIN_OFFSET))(this);
		}

	};
