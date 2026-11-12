#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTraitConfig; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS14_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD3410)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS14_1__GETEXTRATRAITCONFIGS_B__1_OFFSET UNITYSDK_OFFSET(0xDCD56B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c__DisplayClass14_1_TypeDefinitionIndex = 67335;

	template <typename T>
	class GridFightTraitComponent___c__DisplayClass14_1 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS14_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetExtraTraitConfigs_b__1(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS14_1__GETEXTRATRAITCONFIGS_B__1_OFFSET))(this, a1);
		}

	};
}
