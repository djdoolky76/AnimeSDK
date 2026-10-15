#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetAliasPrecedence.h"
#include "unitysdk/System/Object.h"
class JBAMLLPFKFF_GMMEADJNPBI;

#define JBAMLLPFKFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1655ED30)

	class JBAMLLPFKFF : public ::System::Object
	{
	public:
		::JBAMLLPFKFF_GMMEADJNPBI* ECHFHBKOMLC; // 0x10
		::JBAMLLPFKFF_GMMEADJNPBI* MMLNGGEKDEN; // 0x18
		::RPG::GameCore::TargetAliasPrecedence BPCGJGFOAGM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAMLLPFKFF_CTOR_OFFSET))(this);
		}

	};
