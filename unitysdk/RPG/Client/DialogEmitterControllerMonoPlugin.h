#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DIALOGEMITTERCONTROLLERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCBF3940)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogEmitterControllerMonoPlugin_TypeDefinitionIndex = 70891;

	class DialogEmitterControllerMonoPlugin
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* DialogDataGroups; // 0x30
		::System::Single SwitchInterval; // 0x38
		::System::Boolean IfDynamicUpdatePosition; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGEMITTERCONTROLLERMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
