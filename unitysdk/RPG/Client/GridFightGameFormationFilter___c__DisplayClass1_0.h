#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameFormation; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDB1C250)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS1_0__APPLY_B__0_OFFSET UNITYSDK_OFFSET(0xDB1E120)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS1_0__APPLY_B__1_OFFSET UNITYSDK_OFFSET(0xDB1E130)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationFilter___c__DisplayClass1_0_TypeDefinitionIndex = 66231;

	class GridFightGameFormationFilter___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameFormation* formation; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Apply_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS1_0__APPLY_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _Apply_b__1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS1_0__APPLY_B__1_OFFSET))(this, a1);
		}

	};
}
