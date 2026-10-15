#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CENEFPOMFKG;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }

#define MIELDKPBNMB_CTOR_OFFSET UNITYSDK_OFFSET(0xB952AB0)

inline static constexpr unsigned int MIELDKPBNMB_TypeDefinitionIndex = 54138;

	class MIELDKPBNMB : public ::System::Object
	{
	public:
		::KFELGAIGHAP* BEEAIJDOAAA; // 0x10
		::CENEFPOMFKG* IJGAPCNDIAG; // 0x18
		::RPG::GameCore::GameEntity* NGIJFAEONCK; // 0x20
		::System::Int32 NALMBOOCCIN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIELDKPBNMB_CTOR_OFFSET))(this);
		}

	};
