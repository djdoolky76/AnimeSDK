#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

#define RPG_CLIENT_CHARACTERARTMODELEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xC9C4610)

namespace RPG::Client
{
	class CharacterArtModelEffect
	{
	public:
		::Il2CppArray<::System::Object*>* ModelEffectFollows; // 0x30
		::Il2CppArray<::System::Object*>* ModelEffectAnimators; // 0x38
		::System::Boolean SyncAnimatorSpeed; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single TimeScale; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERARTMODELEFFECT_CTOR_OFFSET))(this);
		}

	};
}
