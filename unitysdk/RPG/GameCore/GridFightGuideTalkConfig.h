#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define RPG_GAMECORE_GRIDFIGHTGUIDETALKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE6C9760)

namespace RPG::GameCore
{
	class GridFightGuideTalkConfig : public ::System::Object
	{
	public:
		::System::Action* OnFinish; // 0x10
		::Il2CppArray<::System::UInt32>* TalkIDs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGUIDETALKCONFIG_CTOR_OFFSET))(this);
		}

	};
}
