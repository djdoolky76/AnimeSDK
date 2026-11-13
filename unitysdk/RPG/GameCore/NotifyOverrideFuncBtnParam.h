#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_GAMECORE_NOTIFYOVERRIDEFUNCBTNPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1926BFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NotifyOverrideFuncBtnParam_TypeDefinitionIndex = 54398;

	class NotifyOverrideFuncBtnParam : public ::System::Object
	{
	public:
		::System::String* CustomEvent; // 0x10
		::System::String* IconPath; // 0x18
		::System::Boolean ShowBtnEffect; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYOVERRIDEFUNCBTNPARAM_CTOR_OFFSET))(this);
		}

	};
}
