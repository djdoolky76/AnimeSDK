#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingStageBaseAction.h"

#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGEROUNDBEGINACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xD1D3C60)
#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGEROUNDBEGINACTION_HANDLE_OFFSET UNITYSDK_OFFSET(0xD1D3C70)

namespace RPG::Client
{
	class GridFightPendingStageRoundBeginAction : public ::RPG::Client::GridFightPendingStageBaseAction
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGSTAGEROUNDBEGINACTION_CTOR_OFFSET))(this, a1);
		}

		::System::Void Handle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGSTAGEROUNDBEGINACTION_HANDLE_OFFSET))(this);
		}

	};
}
