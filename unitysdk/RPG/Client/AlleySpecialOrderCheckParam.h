#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityAlley { class AlleyPackShipData; }

#define RPG_CLIENT_ALLEYSPECIALORDERCHECKPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xC677EC0)

namespace RPG::Client
{
	class AlleySpecialOrderCheckParam : public ::System::Object
	{
	public:
		::RPG::Client::ActivityAlley::AlleyPackShipData* PackShipData; // 0x10
		::System::Int32 Profit; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERCHECKPARAM_CTOR_OFFSET))(this);
		}

	};
}
