#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }

#define HFIKHAIPIAB_AMKOBKOHDDK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C7BAB0)
#define HFIKHAIPIAB_AMKOBKOHDDK_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15C7BAC0)

	class HFIKHAIPIAB_AMKOBKOHDDK : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x10
		::System::UInt32 LCMKJNBPGAA; // 0x18
		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_AMKOBKOHDDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_AMKOBKOHDDK_HKKFFCBJOKM_OFFSET))(this);
		}

	};
