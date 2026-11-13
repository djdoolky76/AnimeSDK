#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameClientNetMode.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameNetMode.h"
#include "unitysdk/System/Object.h"

#define GHADLBDBHNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA4C150)

inline static constexpr unsigned int GHADLBDBHNA_TypeDefinitionIndex = 37794;

	class GHADLBDBHNA : public ::System::Object
	{
	public:
		::RPG::Client::LittleGameShare::LittleGameNetMode FNDBHCMJIGE; // 0x10
		::RPG::Client::LittleGameShare::LittleGameClientNetMode DIPMNAHIHHM; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHADLBDBHNA_CTOR_OFFSET))(this);
		}

	};
