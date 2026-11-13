#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/IceMachineState.h"
#include "unitysdk/System/Object.h"

#define FIGIFGEDBOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C20A980)

inline static constexpr unsigned int FIGIFGEDBOG_TypeDefinitionIndex = 44742;

	class FIGIFGEDBOG : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::IceMachineState MEPFOEEGBEA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIGIFGEDBOG_CTOR_OFFSET))(this);
		}

	};
