#pragma once
#include "unitysdk/unitysdk.h"
class MABKFJCEPFH;
namespace RPG::GameCore { class TaskContext; }

#define ILHJDOHCJCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1B597A00)
#define ILHJDOHCJCJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B597A30)

inline static constexpr unsigned int ILHJDOHCJCJ_TypeDefinitionIndex = 56127;

	class ILHJDOHCJCJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MABKFJCEPFH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MABKFJCEPFH*))((::PBYTE)hIl2Cpp + ILHJDOHCJCJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHJDOHCJCJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
