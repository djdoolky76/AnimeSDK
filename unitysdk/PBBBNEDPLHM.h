#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByAvatarBaseType; }
namespace RPG::GameCore { class TaskContext; }

#define PBBBNEDPLHM_CTOR_OFFSET UNITYSDK_OFFSET(0xBFE0FF0)
#define PBBBNEDPLHM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBFE1020)

	class PBBBNEDPLHM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAvatarBaseType*))((::PBYTE)hIl2Cpp + PBBBNEDPLHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBBNEDPLHM_EVALUATE_OFFSET))(this);
		}

	};
