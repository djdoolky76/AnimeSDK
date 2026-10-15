#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/VersusBarQuestStatus.h"
#include "unitysdk/System/Object.h"

#define AGDFMBLEJOP_CTOR_OFFSET UNITYSDK_OFFSET(0xCF26730)

inline static constexpr unsigned int AGDFMBLEJOP_TypeDefinitionIndex = 55588;

	class AGDFMBLEJOP : public ::System::Object
	{
	public:
		::RPG::Client::TextID CFILBELOBAL; // 0x10
		::RPG::GameCore::VersusBarQuestStatus FFEPLIHOFLA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDFMBLEJOP_CTOR_OFFSET))(this);
		}

	};
