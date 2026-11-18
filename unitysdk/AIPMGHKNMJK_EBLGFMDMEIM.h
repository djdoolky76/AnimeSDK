#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLevelResultPerforms; }

#define AIPMGHKNMJK_EBLGFMDMEIM_HOLMEPGEFBO_OFFSET UNITYSDK_OFFSET(0x134D3CE0)
#define AIPMGHKNMJK_EBLGFMDMEIM__CTOR_OFFSET UNITYSDK_OFFSET(0x134D3CD0)

inline static constexpr unsigned int AIPMGHKNMJK_EBLGFMDMEIM_TypeDefinitionIndex = 63291;

class AIPMGHKNMJK_EBLGFMDMEIM : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPMGHKNMJK_EBLGFMDMEIM__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigLevelResultPerforms* HOLMEPGEFBO()
	{
		return ((::MoleMole::Config::ConfigLevelResultPerforms*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPMGHKNMJK_EBLGFMDMEIM_HOLMEPGEFBO_OFFSET))(this);
	}
};
