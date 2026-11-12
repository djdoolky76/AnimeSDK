#pragma once
#include "unitysdk/unitysdk.h"
class LGHLMBMEOOJ;
namespace RPG::GameCore { class TaskContext; }

#define FFGBFLFHFEI_CTOR_OFFSET UNITYSDK_OFFSET(0x16653480)
#define FFGBFLFHFEI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x166534B0)

inline static constexpr unsigned int FFGBFLFHFEI_TypeDefinitionIndex = 55076;

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
