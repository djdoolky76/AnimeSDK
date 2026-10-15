#pragma once
#include "unitysdk/unitysdk.h"
class LKAKGGLAHGA;
namespace RPG::GameCore { class TaskContext; }

#define HIFHDHKKMGF_CTOR_OFFSET UNITYSDK_OFFSET(0x15CE42C0)
#define HIFHDHKKMGF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15CE42F0)

inline static constexpr unsigned int HIFHDHKKMGF_TypeDefinitionIndex = 54661;

	class HIFHDHKKMGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LKAKGGLAHGA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LKAKGGLAHGA*))((::PBYTE)hIl2Cpp + HIFHDHKKMGF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFHDHKKMGF_EVALUATE_OFFSET))(this);
		}

	};
