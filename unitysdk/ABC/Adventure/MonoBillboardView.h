#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/View/MonoView.h"

#define ABC_ADVENTURE_MONOBILLBOARDVIEW_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x17083B0)
#define ABC_ADVENTURE_MONOBILLBOARDVIEW_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x1708360)
#define ABC_ADVENTURE_MONOBILLBOARDVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1708400)

namespace ABC::Adventure
{
	inline static constexpr unsigned int MonoBillboardView_TypeDefinitionIndex = 623;

	class MonoBillboardView : public ::ABC::View::MonoView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ADVENTURE_MONOBILLBOARDVIEW__CTOR_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ADVENTURE_MONOBILLBOARDVIEW_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ADVENTURE_MONOBILLBOARDVIEW_FDBCDBBFE02CD51A_OFFSET))(this);
		}
	};
}
