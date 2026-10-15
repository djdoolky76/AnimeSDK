#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByGridFightCompareRoleExtInfo; }
namespace RPG::GameCore { class TaskContext; }

#define GLNGIMDCEJA_CTOR_OFFSET UNITYSDK_OFFSET(0x15AB2220)
#define GLNGIMDCEJA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15AB2250)

inline static constexpr unsigned int GLNGIMDCEJA_TypeDefinitionIndex = 54606;

	class GLNGIMDCEJA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*))((::PBYTE)hIl2Cpp + GLNGIMDCEJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNGIMDCEJA_EVALUATE_OFFSET))(this);
		}

	};
