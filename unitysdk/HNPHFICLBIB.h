#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BACCOPOCMPC;
namespace RPG::GameCore { class GameEntity; }

#define HNPHFICLBIB_CTOR_OFFSET UNITYSDK_OFFSET(0x15DA6BA0)

inline static constexpr unsigned int HNPHFICLBIB_TypeDefinitionIndex = 57076;

	class HNPHFICLBIB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::BACCOPOCMPC* GMFMGOKJCKP; // 0x18
		::System::UInt32 PCCCKLNCLHB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPHFICLBIB_CTOR_OFFSET))(this);
		}

	};
