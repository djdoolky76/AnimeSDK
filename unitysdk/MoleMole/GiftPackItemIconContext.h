#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class NBDLJECLJJO;

#define MOLEMOLE_GIFTPACKITEMICONCONTEXT_GET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0x180EDF20)
#define MOLEMOLE_GIFTPACKITEMICONCONTEXT_SET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0x180EDF30)
#define MOLEMOLE_GIFTPACKITEMICONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180EDF40)

namespace MoleMole
{
	inline static constexpr unsigned int GiftPackItemIconContext_TypeDefinitionIndex = 80092;

	class GiftPackItemIconContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::NBDLJECLJJO* _GoodsData_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GIFTPACKITEMICONCONTEXT__CTOR_OFFSET))(this);
		}

		::NBDLJECLJJO* get_GoodsData()
		{
			return ((::NBDLJECLJJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GIFTPACKITEMICONCONTEXT_GET_GOODSDATA_OFFSET))(this);
		}

		::System::Void set_GoodsData(::NBDLJECLJJO* value)
		{
			return ((::System::Void(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + MOLEMOLE_GIFTPACKITEMICONCONTEXT_SET_GOODSDATA_OFFSET))(this, value);
		}
	};
}
