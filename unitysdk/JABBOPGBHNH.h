#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/EntityTag.h"
#include "unitysdk/System/Object.h"

#define JABBOPGBHNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8AA40)

inline static constexpr unsigned int JABBOPGBHNH_TypeDefinitionIndex = 43275;

	class JABBOPGBHNH : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::FiveDim::EntityTag IGGAFLCFBGC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JABBOPGBHNH_CTOR_OFFSET))(this);
		}

	};
