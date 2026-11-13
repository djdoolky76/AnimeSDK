#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODFCAHKLCJN.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MiniGameFlappyBirdConfig; }

#define HFLGMNENECK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DAA1170)
#define HFLGMNENECK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA11C0)

inline static constexpr unsigned int HFLGMNENECK_TypeDefinitionIndex = 44370;

	class HFLGMNENECK : public ::System::Object
	{
	public:
		::RPG::GameCore::MiniGameFlappyBirdConfig* EABKOHGCHFP; // 0x10
		::ODFCAHKLCJN NPAOBGDKLHB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLGMNENECK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLGMNENECK_CLEAR_OFFSET))(this);
		}

	};
