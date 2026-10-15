#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_GAMECORE_TALKTRIGGER_SHOWTALKBTNPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xE773E30)
#define RPG_GAMECORE_TALKTRIGGER_SHOWTALKBTNPARAM_RESET_OFFSET UNITYSDK_OFFSET(0xE7764C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkTrigger_ShowTalkBtnParam_TypeDefinitionIndex = 57533;

	class TalkTrigger_ShowTalkBtnParam : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* DialogueGroupInfos; // 0x10
		::System::UInt32 HostRuntimeID; // 0x18
		::System::UInt32 GuestRuntimeID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_SHOWTALKBTNPARAM_CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_SHOWTALKBTNPARAM_RESET_OFFSET))(this);
		}

	};
}
