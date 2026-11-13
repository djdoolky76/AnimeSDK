#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define RPG_GAMECORE_GRIDFIGHTGUIDETALKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x184779A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightGuideTalkConfig_TypeDefinitionIndex = 54752;

	class GridFightGuideTalkConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TalkIDs; // 0x10
		::System::Action* OnFinish; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGUIDETALKCONFIG_CTOR_OFFSET))(this);
		}

	};
}
