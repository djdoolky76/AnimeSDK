#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GANBGJGFHCN.h"
#include "unitysdk/System/Object.h"
class CENEFPOMFKG;
namespace RPG::GameCore { class GameEntity; }

#define CKMLAGBDPIL_CTOR_OFFSET UNITYSDK_OFFSET(0xE0A45F0)

inline static constexpr unsigned int CKMLAGBDPIL_TypeDefinitionIndex = 55215;

	class CKMLAGBDPIL : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::GANBGJGFHCN MKGKHBCAFLL; // 0x18
		::CENEFPOMFKG* IJGAPCNDIAG; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMLAGBDPIL_CTOR_OFFSET))(this);
		}

	};
