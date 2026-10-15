#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LightConeRecommendType.h"
#include "unitysdk/System/Object.h"

#define FJIFFMGIAHL_CTOR_OFFSET UNITYSDK_OFFSET(0x157CF410)

inline static constexpr unsigned int FJIFFMGIAHL_TypeDefinitionIndex = 66810;

	class FJIFFMGIAHL : public ::System::Object
	{
	public:
		::System::Single MMJGJILMACM; // 0x10
		::RPG::Client::LightConeRecommendType GMPGDEINODK; // 0x14
		::System::UInt32 NJEJLFDJIGD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIFFMGIAHL_CTOR_OFFSET))(this);
		}

	};
