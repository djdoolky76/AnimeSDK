#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGAAFLAALBF;

#define IGEGNAJFAJE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1640A600)
#define IGEGNAJFAJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1640A700)

inline static constexpr unsigned int IGEGNAJFAJE_TypeDefinitionIndex = 63863;

	class IGEGNAJFAJE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEGNAJFAJE_CTOR_OFFSET))(this);
		}

		::FGAAFLAALBF* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::FGAAFLAALBF*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGEGNAJFAJE_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
