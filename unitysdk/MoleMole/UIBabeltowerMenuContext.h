#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBABELTOWERMENUCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F21A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerMenuContext_TypeDefinitionIndex = 91546;

	class UIBabeltowerMenuContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 InitOpenTowerID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
