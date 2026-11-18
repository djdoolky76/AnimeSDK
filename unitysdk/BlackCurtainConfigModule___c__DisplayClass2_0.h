#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBlackCurtains; }

#define BLACKCURTAINCONFIGMODULE___C__DISPLAYCLASS2_0__CREATEOP_B__0_OFFSET UNITYSDK_OFFSET(0x18590480)
#define BLACKCURTAINCONFIGMODULE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18590470)

inline static constexpr unsigned int BlackCurtainConfigModule___c__DisplayClass2_0_TypeDefinitionIndex = 64244;

class BlackCurtainConfigModule___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Foundation::AssetPath configPath; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINCONFIGMODULE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateOp_b__0(::MoleMole::Config::ConfigBlackCurtains* config)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBlackCurtains*))((::PBYTE)hIl2Cpp + BLACKCURTAINCONFIGMODULE___C__DISPLAYCLASS2_0__CREATEOP_B__0_OFFSET))(this, config);
	}
};
