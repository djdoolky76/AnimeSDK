#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAFFMDBPCGJ;
class INMMPMDELKE;
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }

#define FAFFMDBPCGJ___C__DISPLAYCLASS22_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15667370)
#define FAFFMDBPCGJ___C__DISPLAYCLASS22_0__SETUPFINISHPOINTREWARDINTERACT_B__0_OFFSET UNITYSDK_OFFSET(0x1566D640)

inline static constexpr unsigned int FAFFMDBPCGJ___c__DisplayClass22_0_TypeDefinitionIndex = 76738;

	class FAFFMDBPCGJ___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::FAFFMDBPCGJ* __4__this; // 0x10
		::RPG::GameCore::FourRotateVoxelFinishPointConfig* finishPropConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ___C__DISPLAYCLASS22_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetupFinishPointRewardInteract_b__0(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ___C__DISPLAYCLASS22_0__SETUPFINISHPOINTREWARDINTERACT_B__0_OFFSET))(this, a1);
		}

	};
