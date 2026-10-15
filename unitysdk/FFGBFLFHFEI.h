#pragma once
#include "unitysdk/unitysdk.h"
class LGHLMBMEOOJ;
namespace RPG::GameCore { class TaskContext; }

#define FFGBFLFHFEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1572BC60)
#define FFGBFLFHFEI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1572BC90)

inline static constexpr unsigned int FFGBFLFHFEI_TypeDefinitionIndex = 53912;

	class FFGBFLFHFEI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LGHLMBMEOOJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LGHLMBMEOOJ*))((::PBYTE)hIl2Cpp + FFGBFLFHFEI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGBFLFHFEI_ONTASKBEGIN_OFFSET))(this);
		}

	};
