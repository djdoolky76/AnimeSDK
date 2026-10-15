#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinActionIntentType.h"
#include "unitysdk/System/Object.h"

#define PCGGALGFNPM_CTOR_OFFSET UNITYSDK_OFFSET(0xBFFF610)

	class PCGGALGFNPM : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>* ACJEBIJEHOK; // 0x10
		::System::UInt32 CEGOPEIKDLA; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>*))((::PBYTE)hIl2Cpp + PCGGALGFNPM_CTOR_OFFSET))(this, a1, a2);
		}

	};
