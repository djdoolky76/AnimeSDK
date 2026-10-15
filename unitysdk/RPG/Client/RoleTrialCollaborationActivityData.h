#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoleTrialActivityData.h"

#define RPG_CLIENT_ROLETRIALCOLLABORATIONACTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE067E50)

namespace RPG::Client
{
	class RoleTrialCollaborationActivityData : public ::RPG::Client::RoleTrialActivityData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALCOLLABORATIONACTIVITYDATA_CTOR_OFFSET))(this, a1);
		}

	};
}
