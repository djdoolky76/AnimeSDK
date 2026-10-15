#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsConvertDamage; }
namespace RPG::GameCore { class TaskContext; }

#define CGAMHMILCAF_CTOR_OFFSET UNITYSDK_OFFSET(0xCC5DF90)
#define CGAMHMILCAF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCC5DFC0)

inline static constexpr unsigned int CGAMHMILCAF_TypeDefinitionIndex = 54644;

	class CGAMHMILCAF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsConvertDamage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsConvertDamage*))((::PBYTE)hIl2Cpp + CGAMHMILCAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAMHMILCAF_EVALUATE_OFFSET))(this);
		}

	};
