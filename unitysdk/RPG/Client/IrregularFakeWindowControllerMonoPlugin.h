#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xD36DB40)

namespace RPG::Client
{
	inline static constexpr unsigned int IrregularFakeWindowControllerMonoPlugin_TypeDefinitionIndex = 70862;

	class IrregularFakeWindowControllerMonoPlugin
	{
	public:
		::System::Int32 ExampleProperty; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::Renderer* targetRenderer; // 0x38
		::System::Boolean applyOnEnable; // 0x40
		::System::Boolean verboseLog; // 0x41
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRREGULARFAKEWINDOWCONTROLLERMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
