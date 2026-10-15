#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class SignalCurvePoolEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SIGNALCURVEPOOLMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE0C2DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int SignalCurvePoolMonoPlugin_TypeDefinitionIndex = 70962;

	class SignalCurvePoolMonoPlugin
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>* _curves; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
