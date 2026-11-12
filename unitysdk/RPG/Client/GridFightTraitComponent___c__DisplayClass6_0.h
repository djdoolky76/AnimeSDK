#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOPFFFHHEKG;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfig; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD0930)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS6_0__GETTRAITCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0xDCD58A0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS6_0__GETTRAITCOUNT_B__1_OFFSET UNITYSDK_OFFSET(0xDCD58D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS6_0__GETTRAITCOUNT_B__2_OFFSET UNITYSDK_OFFSET(0xDCD5930)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS6_0__GETTRAITCOUNT_B__3_OFFSET UNITYSDK_OFFSET(0xDCD5940)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c__DisplayClass6_0_TypeDefinitionIndex = 67341;

	class GridFightTraitComponent___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* role; // 0x10
		::System::UInt32 traitID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTraitCount_b__0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS6_0__GETTRAITCOUNT_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _GetTraitCount_b__1(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS6_0__GETTRAITCOUNT_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _GetTraitCount_b__2(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS6_0__GETTRAITCOUNT_B__2_OFFSET))(this, a1);
		}

		::System::Boolean _GetTraitCount_b__3(::EOPFFFHHEKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EOPFFFHHEKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS6_0__GETTRAITCOUNT_B__3_OFFSET))(this, a1);
		}

	};
}
