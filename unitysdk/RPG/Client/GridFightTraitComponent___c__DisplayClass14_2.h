#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTraitConfig; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS14_2_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD3420)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS14_2__GETEXTRATRAITCONFIGS_B__2_OFFSET UNITYSDK_OFFSET(0xDCD5710)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c__DisplayClass14_2_TypeDefinitionIndex = 67336;

	template <typename T1, typename T2>
	class GridFightTraitComponent___c__DisplayClass14_2 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS14_2_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetExtraTraitConfigs_b__2(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS14_2__GETEXTRATRAITCONFIGS_B__2_OFFSET))(this, a1);
		}

	};
}
