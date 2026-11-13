#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirGameState.h"
#include "unitysdk/System/Object.h"

#define DAMFACEJGPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB17D30)

inline static constexpr unsigned int DAMFACEJGPJ_TypeDefinitionIndex = 44663;

	class DAMFACEJGPJ : public ::System::Object
	{
	public:
		::System::Boolean KBEJHKAFIIF; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGame::PixAir::PixAirGameState MEPFOEEGBEA; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMFACEJGPJ_CTOR_OFFSET))(this);
		}

	};
