#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_MONOVALUEEVALUATECONFIGURE_EVALUATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD87F9A0)

namespace RPG::Client
{
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
