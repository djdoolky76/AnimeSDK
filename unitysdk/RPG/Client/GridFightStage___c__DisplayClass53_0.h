#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAAMIAJFOMC;

#define RPG_CLIENT_GRIDFIGHTSTAGE___C__DISPLAYCLASS53_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC92400)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__DISPLAYCLASS53_0__UPDATEAFFIX_B__0_OFFSET UNITYSDK_OFFSET(0xDC96650)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStage___c__DisplayClass53_0_TypeDefinitionIndex = 66996;

	class GridFightStage___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::LAAMIAJFOMC* affixInfo; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__DISPLAYCLASS53_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateAffix_b__0(::LAAMIAJFOMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAAMIAJFOMC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__DISPLAYCLASS53_0__UPDATEAFFIX_B__0_OFFSET))(this, a1);
		}

	};
}
