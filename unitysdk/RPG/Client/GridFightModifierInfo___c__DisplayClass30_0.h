#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGFNADPCPCE;

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS30_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC360D0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS30_0__ISIGNOREPOPULATION_B__0_OFFSET UNITYSDK_OFFSET(0x1CC36E60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass30_0_TypeDefinitionIndex = 66675;

	class GridFightModifierInfo___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS30_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsIgnorePopulation_b__0(::KGFNADPCPCE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGFNADPCPCE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS30_0__ISIGNOREPOPULATION_B__0_OFFSET))(this, a1);
		}

	};
}
