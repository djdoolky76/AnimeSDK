#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class MBHOGLGMFEM;
class NHPPHFMEHCK;

#define MOLEMOLE_UIGROCERYCHILDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x184D6DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryChildContext_TypeDefinitionIndex = 51285;

	class UIGroceryChildContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::NHPPHFMEHCK* ShopEntity; // 0x28
		::MBHOGLGMFEM* StoreData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
