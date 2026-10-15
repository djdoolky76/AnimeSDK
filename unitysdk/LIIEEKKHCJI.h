#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDICAPPIHDG.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BaseScrollGameConfig; }

#define LIIEEKKHCJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90F0A0)

	class LIIEEKKHCJI : public ::System::Object
	{
	public:
		::JDICAPPIHDG NPAOBGDKLHB; // 0x10
		::RPG::GameCore::BaseScrollGameConfig* EABKOHGCHFP; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIEEKKHCJI_CTOR_OFFSET))(this);
		}

	};
