#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define IGCPGEBDHPE_CTOR_OFFSET UNITYSDK_OFFSET(0x163F40A0)

inline static constexpr unsigned int IGCPGEBDHPE_TypeDefinitionIndex = 56365;

	class IGCPGEBDHPE : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JLCBFBENLEC; // 0x10
		::System::Boolean HELJNHNDCJP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCPGEBDHPE_CTOR_OFFSET))(this);
		}

	};
