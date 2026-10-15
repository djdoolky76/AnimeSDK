#pragma once
#include "unitysdk/unitysdk.h"
class AKNGLJOKHJN;
namespace RPG::GameCore { class TaskContext; }

#define CAPLPBFKMHF_CTOR_OFFSET UNITYSDK_OFFSET(0xC495B70)
#define CAPLPBFKMHF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC495BA0)

inline static constexpr unsigned int CAPLPBFKMHF_TypeDefinitionIndex = 55893;

	class CAPLPBFKMHF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AKNGLJOKHJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AKNGLJOKHJN*))((::PBYTE)hIl2Cpp + CAPLPBFKMHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPLPBFKMHF_ONTASKBEGIN_OFFSET))(this);
		}

	};
