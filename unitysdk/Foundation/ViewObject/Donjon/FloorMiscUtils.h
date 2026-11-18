#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JADCEDBCKAB.h"
#include "unitysdk/LBIHODCHCPC.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORMISCUTILS_GETMISCCTRLENABLED_OFFSET UNITYSDK_OFFSET(0x10ED7650)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORMISCUTILS_GETMISCTIMECTRLENABLED_OFFSET UNITYSDK_OFFSET(0x10ED73D0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorMiscUtils_TypeDefinitionIndex = 89293;

	class FloorMiscUtils : public ::System::Object
	{
	public:
		static ::System::Boolean GetMiscTimeCtrlEnabled(::JADCEDBCKAB ctrlType)
		{
			return ((::System::Boolean(*)(::JADCEDBCKAB))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORMISCUTILS_GETMISCTIMECTRLENABLED_OFFSET))(ctrlType);
		}

		static ::System::Boolean GetMiscCtrlEnabled(::LBIHODCHCPC ctrlType)
		{
			return ((::System::Boolean(*)(::LBIHODCHCPC))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORMISCUTILS_GETMISCCTRLENABLED_OFFSET))(ctrlType);
		}
	};
}
