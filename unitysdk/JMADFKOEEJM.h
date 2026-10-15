#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PreReleaseScheduleState.h"
#include "unitysdk/System/Object.h"

#define JMADFKOEEJM_KHJNHDOJDDP_OFFSET UNITYSDK_OFFSET(0xB258AF0)

	class JMADFKOEEJM : public ::System::Object
	{
	public:
		static ::RPG::Client::PreReleaseScheduleState KHJNHDOJDDP(::System::UInt32 a1)
		{
			return ((::RPG::Client::PreReleaseScheduleState(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JMADFKOEEJM_KHJNHDOJDDP_OFFSET))(a1);
		}

	};
