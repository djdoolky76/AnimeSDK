#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTraitConfig; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS14_3_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD3430)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS14_3__GETEXTRATRAITCONFIGS_B__3_OFFSET UNITYSDK_OFFSET(0xDCD5770)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS14_3__GETEXTRATRAITCONFIGS_B__4_OFFSET UNITYSDK_OFFSET(0xDCD5780)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c__DisplayClass14_3_TypeDefinitionIndex = 67337;

	template <typename T1, typename T2, typename T3>
	class GridFightTraitComponent___c__DisplayClass14_3 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS14_3_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetExtraTraitConfigs_b__3(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS14_3__GETEXTRATRAITCONFIGS_B__3_OFFSET))(this, a1);
		}

		::System::Boolean _GetExtraTraitConfigs_b__4(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS14_3__GETEXTRATRAITCONFIGS_B__4_OFFSET))(this, a1);
		}

	};
}
