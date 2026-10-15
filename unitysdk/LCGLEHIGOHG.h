#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class ByNot; }
namespace RPG::GameCore { class TaskContext; }

#define LCGLEHIGOHG_CTOR_OFFSET UNITYSDK_OFFSET(0xB614CB0)
#define LCGLEHIGOHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB614DF0)
#define LCGLEHIGOHG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB614D80)

inline static constexpr unsigned int LCGLEHIGOHG_TypeDefinitionIndex = 54704;

	class LCGLEHIGOHG
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByNot* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByNot*))((::PBYTE)hIl2Cpp + LCGLEHIGOHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGLEHIGOHG_EVALUATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGLEHIGOHG_DISPOSE_OFFSET))(this);
		}

	};
