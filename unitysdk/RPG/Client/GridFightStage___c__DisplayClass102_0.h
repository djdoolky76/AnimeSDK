#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAAMIAJFOMC;

#define RPG_CLIENT_GRIDFIGHTSTAGE___C__DISPLAYCLASS102_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD285CE0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__DISPLAYCLASS102_0__ISAFFIXREMOVED_B__0_OFFSET UNITYSDK_OFFSET(0xD287310)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStage___c__DisplayClass102_0_TypeDefinitionIndex = 65245;

	class GridFightStage___c__DisplayClass102_0 : public ::System::Object
	{
	public:
		::System::UInt32 affixID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__DISPLAYCLASS102_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAffixRemoved_b__0(::LAAMIAJFOMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAAMIAJFOMC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__DISPLAYCLASS102_0__ISAFFIXREMOVED_B__0_OFFSET))(this, a1);
		}

	};
}
