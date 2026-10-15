#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareHP; }
namespace RPG::GameCore { class TaskContext; }

#define OJAAEJFAAHB_CTOR_OFFSET UNITYSDK_OFFSET(0xBE9CE20)
#define OJAAEJFAAHB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBE9CE50)

inline static constexpr unsigned int OJAAEJFAAHB_TypeDefinitionIndex = 54536;

	class OJAAEJFAAHB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareHP*))((::PBYTE)hIl2Cpp + OJAAEJFAAHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJAAEJFAAHB_EVALUATE_OFFSET))(this);
		}

	};
