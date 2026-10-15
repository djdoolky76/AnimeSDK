#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridMoveValidateResultType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGRIDMOVEVALIDATERESULT_CTOR_OFFSET UNITYSDK_OFFSET(0xD1921A0)

namespace RPG::Client
{
	class GridFightGridMoveValidateResult : public ::System::Object
	{
	public:
		::System::String* Reason; // 0x10
		::System::Boolean IsSuccess; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::Client::GridFightGridMoveValidateResultType Type; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMOVEVALIDATERESULT_CTOR_OFFSET))(this);
		}

	};
}
