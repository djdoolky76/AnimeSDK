#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerHandler.h"

#define AKDRAGDROPTRIGGERHANDLER_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x2915CC0)
#define AKDRAGDROPTRIGGERHANDLER_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x2915CD0)
#define AKDRAGDROPTRIGGERHANDLER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2915CB0)
#define AKDRAGDROPTRIGGERHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x2915D40)

inline static constexpr unsigned int AkDragDropTriggerHandler_TypeDefinitionIndex = 20477;

class AkDragDropTriggerHandler : public ::AkTriggerHandler
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDRAGDROPTRIGGERHANDLER__CTOR_OFFSET))(this);
	}

	::System::Void F328E4D8818B1E12()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDRAGDROPTRIGGERHANDLER_F328E4D8818B1E12_OFFSET))(this);
	}

	::System::Void AB36E0EE549986E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDRAGDROPTRIGGERHANDLER_AB36E0EE549986E5_OFFSET))(this);
	}

	::System::Void FDBCDBBFE02CD51A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDRAGDROPTRIGGERHANDLER_FDBCDBBFE02CD51A_OFFSET))(this);
	}
};
