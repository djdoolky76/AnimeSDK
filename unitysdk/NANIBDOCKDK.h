#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingGameState.h"
#include "unitysdk/System/Object.h"

#define NANIBDOCKDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C934D70)

inline static constexpr unsigned int NANIBDOCKDK_TypeDefinitionIndex = 43745;

	class NANIBDOCKDK : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChenLing::ChenLingGameState MEPFOEEGBEA; // 0x10
		::System::Boolean OEMBNIGPNNA; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANIBDOCKDK_CTOR_OFFSET))(this);
		}

	};
