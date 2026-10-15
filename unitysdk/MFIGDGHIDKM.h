#pragma once
#include "unitysdk/unitysdk.h"
class IANEMJNCHDN;
namespace RPG::GameCore { class TaskContext; }

#define MFIGDGHIDKM_CTOR_OFFSET UNITYSDK_OFFSET(0xB8F8FF0)
#define MFIGDGHIDKM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB8F9020)

inline static constexpr unsigned int MFIGDGHIDKM_TypeDefinitionIndex = 54162;

	class MFIGDGHIDKM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IANEMJNCHDN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IANEMJNCHDN*))((::PBYTE)hIl2Cpp + MFIGDGHIDKM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIGDGHIDKM_EVALUATE_OFFSET))(this);
		}

	};
