#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class AFMMAIKKACF;
class ALGKMLLALFG;
class LBKLJGOMMAJ;
class NKHMNIEAHIB;

#define MOLEMOLE_UIHOLLOWSHOPWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x183BD490)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowShopWidgetContext_TypeDefinitionIndex = 54004;

	class UIHollowShopWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::LBKLJGOMMAJ* shopInfo; // 0x28
		::NKHMNIEAHIB* shopNode; // 0x30
		::AFMMAIKKACF* scriptContext; // 0x38
		::ALGKMLLALFG* graph; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
