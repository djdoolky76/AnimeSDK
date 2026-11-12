#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/System/Object.h"
class COAHPDIDOHI;
class PEDAPLLONJD;

#define COAHPDIDOHI___C__DISPLAYCLASS39_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE5FBA30)
#define COAHPDIDOHI___C__DISPLAYCLASS39_0___TICKSTOPFACING_B__0_OFFSET UNITYSDK_OFFSET(0xE5FDE20)
#define COAHPDIDOHI___C__DISPLAYCLASS39_0___TICKSTOPFACING_B__1_OFFSET UNITYSDK_OFFSET(0xE5FDE90)

inline static constexpr unsigned int COAHPDIDOHI___c__DisplayClass39_0_TypeDefinitionIndex = 53321;

	class COAHPDIDOHI___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::PEDAPLLONJD* request; // 0x10
		::COAHPDIDOHI* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI___C__DISPLAYCLASS39_0_CTOR_OFFSET))(this);
		}

		::System::Void __TickStopFacing_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI___C__DISPLAYCLASS39_0___TICKSTOPFACING_B__0_OFFSET))(this);
		}

		::System::Void __TickStopFacing_b__1(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + COAHPDIDOHI___C__DISPLAYCLASS39_0___TICKSTOPFACING_B__1_OFFSET))(this, a1);
		}

	};
