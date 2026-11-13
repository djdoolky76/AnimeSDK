#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D176BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftUtils___c__DisplayClass12_0_TypeDefinitionIndex = 66532;

	class GridFightEquipCraftUtils___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Boolean includeDressed; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

	};
}
