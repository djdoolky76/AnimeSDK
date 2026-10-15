#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAAMIAJFOMC;

#define RPG_CLIENT_GRIDFIGHTSTAGE___C__DISPLAYCLASS52_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD2831A0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__DISPLAYCLASS52_0__UPDATEAFFIX_B__0_OFFSET UNITYSDK_OFFSET(0xD287330)

namespace RPG::Client
{
	class GridFightStage___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::LAAMIAJFOMC* affixInfo; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__DISPLAYCLASS52_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateAffix_b__0(::LAAMIAJFOMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAAMIAJFOMC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__DISPLAYCLASS52_0__UPDATEAFFIX_B__0_OFFSET))(this, a1);
		}

	};
}
