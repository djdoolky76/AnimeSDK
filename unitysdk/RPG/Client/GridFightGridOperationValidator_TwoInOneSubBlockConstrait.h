#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMoveValidateResult; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_TWOINONESUBBLOCKCONSTRAIT_CTOR_OFFSET UNITYSDK_OFFSET(0xDB61520)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_TWOINONESUBBLOCKCONSTRAIT_VALIDATE_OFFSET UNITYSDK_OFFSET(0xDB63910)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_TWOINONESUBBLOCKCONSTRAIT__GETREASON_OFFSET UNITYSDK_OFFSET(0xDB63D30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridOperationValidator_TwoInOneSubBlockConstrait_TypeDefinitionIndex = 66402;

	class GridFightGridOperationValidator_TwoInOneSubBlockConstrait : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_TWOINONESUBBLOCKCONSTRAIT_CTOR_OFFSET))(this);
		}

		::System::Void Validate(::RPG::Client::GridFightGridData* a1, ::RPG::Client::GridFightGridData* a2, ::RPG::Client::GridFightGridMoveValidateResult* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMoveValidateResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_TWOINONESUBBLOCKCONSTRAIT_VALIDATE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::String* _GetReason(::RPG::Client::GridFightGridData* a1)
		{
			return ((::System::String*(*)(::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_TWOINONESUBBLOCKCONSTRAIT__GETREASON_OFFSET))(a1);
		}

	};
}
