#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingTriggerType.h"
#include "unitysdk/System/Object.h"
class BAPEECBHOID;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACALPIDPOOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C877A20)

	class ACALPIDPOOP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType, ::BAPEECBHOID*>* DPHCLHMDFJA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACALPIDPOOP_CTOR_OFFSET))(this);
		}

	};
