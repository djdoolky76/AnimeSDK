#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EMFGJGFIAEA;
class NBDLJECLJJO;

#define MOLEMOLE_GROCERYITEMICONV2CONTEXT_GET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0x10D230D0)
#define MOLEMOLE_GROCERYITEMICONV2CONTEXT_SET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0x10D230E0)
#define MOLEMOLE_GROCERYITEMICONV2CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D230F0)

namespace MoleMole
{
	inline static constexpr unsigned int GroceryItemIconV2Context_TypeDefinitionIndex = 39300;

	class GroceryItemIconV2Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::EMFGJGFIAEA* IconStyleV2; // 0x28
		::NBDLJECLJJO* _GoodsData_k__BackingField; // 0x30

		::System::Void _ctor(::EMFGJGFIAEA* iconStyleV2)
		{
			return ((::System::Void(*)(::PVOID, ::EMFGJGFIAEA*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROCERYITEMICONV2CONTEXT__CTOR_OFFSET))(this, iconStyleV2);
		}

		::NBDLJECLJJO* get_GoodsData()
		{
			return ((::NBDLJECLJJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROCERYITEMICONV2CONTEXT_GET_GOODSDATA_OFFSET))(this);
		}

		::System::Void set_GoodsData(::NBDLJECLJJO* value)
		{
			return ((::System::Void(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROCERYITEMICONV2CONTEXT_SET_GOODSDATA_OFFSET))(this, value);
		}
	};
}
