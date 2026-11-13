#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/VersusBarQuestStatus.h"
#include "unitysdk/System/Object.h"

#define AGDFMBLEJOP_CTOR_OFFSET UNITYSDK_OFFSET(0x18DCF8F0)

inline static constexpr unsigned int AGDFMBLEJOP_TypeDefinitionIndex = 56784;

	class AGDFMBLEJOP : public ::System::Object
	{
	public:
		::RPG::GameCore::VersusBarQuestStatus FFEPLIHOFLA; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID CFILBELOBAL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDFMBLEJOP_CTOR_OFFSET))(this);
		}

	};
