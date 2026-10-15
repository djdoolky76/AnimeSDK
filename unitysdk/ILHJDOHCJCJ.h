#pragma once
#include "unitysdk/unitysdk.h"
class MABKFJCEPFH;
namespace RPG::GameCore { class TaskContext; }

#define ILHJDOHCJCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x164A67E0)
#define ILHJDOHCJCJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164A6810)

inline static constexpr unsigned int ILHJDOHCJCJ_TypeDefinitionIndex = 54953;

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
