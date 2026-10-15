#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicatedCondition.h"
#include "unitysdk/System/Attribute.h"

#define BDNJOEHHEID_CTOR_OFFSET UNITYSDK_OFFSET(0x1C575870)

inline static constexpr unsigned int BDNJOEHHEID_TypeDefinitionIndex = 36880;

	class BDNJOEHHEID : public ::System::Attribute
	{
	public:
		::System::Boolean HIDDBHPPPJI; // 0x10
		::RPG::Client::LittleGameShare::ReplicatedCondition EKIJFPIPCKF; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNJOEHHEID_CTOR_OFFSET))(this);
		}

	};
