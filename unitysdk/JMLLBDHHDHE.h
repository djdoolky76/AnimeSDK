#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleEventType.h"
#include "unitysdk/System/Object.h"

#define JMLLBDHHDHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD74B30)

inline static constexpr unsigned int JMLLBDHHDHE_TypeDefinitionIndex = 44039;

	class JMLLBDHHDHE : public ::System::Object
	{
	public:
		::System::Boolean CLIIGEPCNDE; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGame::Marble::MarbleEventType LAOACNPDOLD; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLLBDHHDHE_CTOR_OFFSET))(this);
		}

	};
