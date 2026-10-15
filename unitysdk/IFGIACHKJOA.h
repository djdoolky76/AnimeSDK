#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirPlaneType.h"
#include "unitysdk/System/Object.h"

#define IFGIACHKJOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB0CCC0)

inline static constexpr unsigned int IFGIACHKJOA_TypeDefinitionIndex = 43688;

	class IFGIACHKJOA : public ::System::Object
	{
	public:
		::System::Int32 NJIOMOHBILM; // 0x10
		::RPG::Client::LittleGame::PixAir::PixAirPlaneType HMNDHAFDNAH; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGIACHKJOA_CTOR_OFFSET))(this);
		}

	};
