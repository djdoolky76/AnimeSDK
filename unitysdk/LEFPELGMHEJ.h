#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MonopolySwitchState.h"
#include "unitysdk/System/Object.h"

#define LEFPELGMHEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90D3D0)

inline static constexpr unsigned int LEFPELGMHEJ_TypeDefinitionIndex = 42555;

	class LEFPELGMHEJ : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::MonopolySwitchState MEPFOEEGBEA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFPELGMHEJ_CTOR_OFFSET))(this);
		}

	};
