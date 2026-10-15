#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class ByAnimatorParam; }
namespace RPG::GameCore { class TaskContext; }

#define AABPIKKDEEM_CMIKPABDNLD_OFFSET UNITYSDK_OFFSET(0xB0BFCF0)
#define AABPIKKDEEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB0BF8E0)
#define AABPIKKDEEM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB0BF910)

inline static constexpr unsigned int AABPIKKDEEM_TypeDefinitionIndex = 54482;

	class AABPIKKDEEM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAnimatorParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAnimatorParam*))((::PBYTE)hIl2Cpp + AABPIKKDEEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AABPIKKDEEM_EVALUATE_OFFSET))(this);
		}

		::System::Boolean CMIKPABDNLD(::RPG::Client::MockAnimator* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + AABPIKKDEEM_CMIKPABDNLD_OFFSET))(this, a1);
		}

	};
