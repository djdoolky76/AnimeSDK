#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GANBGJGFHCN.h"
#include "unitysdk/System/Object.h"
class CENEFPOMFKG;
namespace RPG::GameCore { class GameEntity; }

#define CKMLAGBDPIL_CTOR_OFFSET UNITYSDK_OFFSET(0xD76A270)

inline static constexpr unsigned int CKMLAGBDPIL_TypeDefinitionIndex = 54051;

	class CKMLAGBDPIL : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::CENEFPOMFKG* IJGAPCNDIAG; // 0x18
		::GANBGJGFHCN MKGKHBCAFLL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMLAGBDPIL_CTOR_OFFSET))(this);
		}

	};
