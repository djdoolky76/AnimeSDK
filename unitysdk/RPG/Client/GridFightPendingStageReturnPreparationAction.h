#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingStageBaseAction.h"

#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGERETURNPREPARATIONACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xD1D3B60)
#define RPG_CLIENT_GRIDFIGHTPENDINGSTAGERETURNPREPARATIONACTION_HANDLE_OFFSET UNITYSDK_OFFSET(0xD1D3B70)

namespace RPG::Client
{
	class GridFightPendingStageReturnPreparationAction : public ::RPG::Client::GridFightPendingStageBaseAction
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGSTAGERETURNPREPARATIONACTION_CTOR_OFFSET))(this, a1);
		}

		::System::Void Handle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGSTAGERETURNPREPARATIONACTION_HANDLE_OFFSET))(this);
		}

	};
}
