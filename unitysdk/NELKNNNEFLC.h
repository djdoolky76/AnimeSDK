#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NihiluxElationUIType.h"
#include "unitysdk/System/Object.h"

#define NELKNNNEFLC_JCHIPKKOKAD_OFFSET UNITYSDK_OFFSET(0x16FEB000)

inline static constexpr unsigned int NELKNNNEFLC_TypeDefinitionIndex = 73442;

	class NELKNNNEFLC : public ::System::Object
	{
	public:
		static ::System::Boolean JCHIPKKOKAD(::RPG::GameCore::NihiluxElationUIType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::NihiluxElationUIType))((::PBYTE)hIl2Cpp + NELKNNNEFLC_JCHIPKKOKAD_OFFSET))(a1);
		}

	};
