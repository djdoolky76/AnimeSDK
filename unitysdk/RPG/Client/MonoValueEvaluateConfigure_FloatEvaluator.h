#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoValueEvaluateConfigure_Evaluator.h"

#define RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_FLOATEVALUATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD87F9B0)

namespace RPG::Client
{
	class MonoValueEvaluateConfigure_FloatEvaluator : public ::RPG::Client::MonoValueEvaluateConfigure_Evaluator
	{
	public:
		::System::Single MaxValue; // 0x18
		::System::Single MinValue; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_FLOATEVALUATOR_CTOR_OFFSET))(this);
		}

	};
}
