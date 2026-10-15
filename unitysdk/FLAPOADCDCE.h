#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IActivityQuestRewardTabInfo; }

#define FLAPOADCDCE_CREATE_OFFSET UNITYSDK_OFFSET(0x158277E0)
#define FLAPOADCDCE_CTOR_OFFSET UNITYSDK_OFFSET(0x158278A0)

	class FLAPOADCDCE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLAPOADCDCE_CTOR_OFFSET))(this);
		}

		::RPG::Client::IActivityQuestRewardTabInfo* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::IActivityQuestRewardTabInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLAPOADCDCE_CREATE_OFFSET))(this, a1);
		}

	};
