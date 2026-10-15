#pragma once
#include "unitysdk/unitysdk.h"
class GPGGGPJOGID;
namespace RPG::GameCore { class TaskContext; }

#define PKCEDBLEKGB_CTOR_OFFSET UNITYSDK_OFFSET(0xC2A97F0)
#define PKCEDBLEKGB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC2A9820)

inline static constexpr unsigned int PKCEDBLEKGB_TypeDefinitionIndex = 53872;

	class PKCEDBLEKGB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GPGGGPJOGID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GPGGGPJOGID*))((::PBYTE)hIl2Cpp + PKCEDBLEKGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCEDBLEKGB_EVALUATE_OFFSET))(this);
		}

	};
