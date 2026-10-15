#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMoveValidateResult; }

#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PROJECTIONBLOCKCONSTRAIT_CTOR_OFFSET UNITYSDK_OFFSET(0xD194F90)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PROJECTIONBLOCKCONSTRAIT_VALIDATE_OFFSET UNITYSDK_OFFSET(0xD194B30)

namespace RPG::Client
{
	class GridFightGridOperationValidator_ProjectionBlockConstrait : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PROJECTIONBLOCKCONSTRAIT_CTOR_OFFSET))(this);
		}

		::System::Void Validate(::RPG::Client::GridFightGridData* a1, ::RPG::Client::GridFightGridData* a2, ::RPG::Client::GridFightGridMoveValidateResult* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMoveValidateResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PROJECTIONBLOCKCONSTRAIT_VALIDATE_OFFSET))(this, a1, a2, a3);
		}

	};
}
