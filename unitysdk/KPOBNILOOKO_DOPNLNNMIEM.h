#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }

#define KPOBNILOOKO_DOPNLNNMIEM_CLEAR_OFFSET UNITYSDK_OFFSET(0xB5CFC30)
#define KPOBNILOOKO_DOPNLNNMIEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB5CFC90)

inline static constexpr unsigned int KPOBNILOOKO_DOPNLNNMIEM_TypeDefinitionIndex = 73340;

	class KPOBNILOOKO_DOPNLNNMIEM : public ::System::Object
	{
	public:
		::RPG::Client::BaseShaderPropertyTransition* LGNNAOLPNIP; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::Int32 DOPGIAJMFFO; // 0x20
		::System::Single IEHPFADHJFD; // 0x24
		::System::Int32 OJIPAAEFANF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOBNILOOKO_DOPNLNNMIEM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOBNILOOKO_DOPNLNNMIEM_CLEAR_OFFSET))(this);
		}

	};
