#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDICAPPIHDG.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BaseScrollGameConfig; }

#define LIIEEKKHCJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E0DC0)

inline static constexpr unsigned int LIIEEKKHCJI_TypeDefinitionIndex = 43386;

	class LIIEEKKHCJI : public ::System::Object
	{
	public:
		::RPG::GameCore::BaseScrollGameConfig* EABKOHGCHFP; // 0x10
		::JDICAPPIHDG NPAOBGDKLHB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIEEKKHCJI_CTOR_OFFSET))(this);
		}

	};
