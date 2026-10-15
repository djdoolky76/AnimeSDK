#pragma once
#include "unitysdk/unitysdk.h"
class DNILHDGHLGL;
namespace RPG::GameCore { class TaskContext; }

#define FNAGIAHLKDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1585C200)
#define FNAGIAHLKDG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1585C230)

inline static constexpr unsigned int FNAGIAHLKDG_TypeDefinitionIndex = 54702;

	class FNAGIAHLKDG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DNILHDGHLGL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DNILHDGHLGL*))((::PBYTE)hIl2Cpp + FNAGIAHLKDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAGIAHLKDG_EVALUATE_OFFSET))(this);
		}

	};
