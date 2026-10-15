#pragma once
#include "unitysdk/unitysdk.h"
class PEKCDLDLGJI;
namespace RPG::GameCore { class TaskContext; }

#define IBEGMHAJPNH_CTOR_OFFSET UNITYSDK_OFFSET(0x15E2C970)
#define IBEGMHAJPNH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E2C9A0)

inline static constexpr unsigned int IBEGMHAJPNH_TypeDefinitionIndex = 55200;

	class IBEGMHAJPNH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PEKCDLDLGJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PEKCDLDLGJI*))((::PBYTE)hIl2Cpp + IBEGMHAJPNH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEGMHAJPNH_ONTASKBEGIN_OFFSET))(this);
		}

	};
