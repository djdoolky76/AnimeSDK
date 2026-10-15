#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BossPhase.h"
#include "unitysdk/System/Object.h"

#define OOMEABJAGJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C972880)

inline static constexpr unsigned int OOMEABJAGJE_TypeDefinitionIndex = 42374;

	class OOMEABJAGJE : public ::System::Object
	{
	public:
		::System::Single EMFGEFNHOIB; // 0x10
		::System::Int32 EHNHBJOJAAB; // 0x14
		::RPG::Client::LittleGame::BossPhase PPOIJHJIMLL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMEABJAGJE_CTOR_OFFSET))(this);
		}

	};
