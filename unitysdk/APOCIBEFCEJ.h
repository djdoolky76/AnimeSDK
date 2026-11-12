#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BossTransitionReason.h"
#include "unitysdk/System/Object.h"

#define APOCIBEFCEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2E1C0)

inline static constexpr unsigned int APOCIBEFCEJ_TypeDefinitionIndex = 43350;

	class APOCIBEFCEJ : public ::System::Object
	{
	public:
		::System::Single HMBJNEIEIJK; // 0x10
		::RPG::Client::LittleGame::BossTransitionReason KDHPKOFLNFM; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOCIBEFCEJ_CTOR_OFFSET))(this);
		}

	};
