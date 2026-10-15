#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlagEventType.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;

#define DJJBLMHHLDL_CTOR_OFFSET UNITYSDK_OFFSET(0xF235DD0)

inline static constexpr unsigned int DJJBLMHHLDL_TypeDefinitionIndex = 55842;

	class DJJBLMHHLDL : public ::System::Object
	{
	public:
		::KFELGAIGHAP* OGDBCFBPOAH; // 0x10
		::RPG::GameCore::ModifierBehaviorFlag FNPGDNFLMPC; // 0x18
		::RPG::GameCore::ModifierBehaviorFlagEventType GMPGDEINODK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJBLMHHLDL_CTOR_OFFSET))(this);
		}

	};
