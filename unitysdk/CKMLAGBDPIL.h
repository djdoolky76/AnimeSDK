#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GANBGJGFHCN.h"
#include "unitysdk/System/Object.h"
class CENEFPOMFKG;
namespace RPG::GameCore { class GameEntity; }

#define CKMLAGBDPIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD4C020)

inline static constexpr unsigned int CKMLAGBDPIL_TypeDefinitionIndex = 55215;

	class CKMLAGBDPIL : public ::System::Object
	{
	public:
		::GANBGJGFHCN MKGKHBCAFLL; // 0x10
		::CENEFPOMFKG* IJGAPCNDIAG; // 0x30
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMLAGBDPIL_CTOR_OFFSET))(this);
		}

	};
