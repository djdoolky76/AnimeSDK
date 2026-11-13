#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_EVALUATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D296670)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoValueEvaluateConfigure_Evaluator_TypeDefinitionIndex = 70576;

	class MonoValueEvaluateConfigure_Evaluator : public ::System::Object
	{
	public:
		::System::String* ConfigName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_EVALUATOR_CTOR_OFFSET))(this);
		}

	};
}
