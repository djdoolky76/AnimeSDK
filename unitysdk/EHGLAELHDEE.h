#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/System/Object.h"
class IIDHAJDAMDE;

#define EHGLAELHDEE_CTOR_OFFSET UNITYSDK_OFFSET(0x163A4B10)
#define EHGLAELHDEE_PNHAMFBHDCN_OFFSET UNITYSDK_OFFSET(0x163A4B00)

inline static constexpr unsigned int EHGLAELHDEE_TypeDefinitionIndex = 80050;

	class EHGLAELHDEE : public ::System::Object
	{
	public:
		::IIDHAJDAMDE* PAKJHBKAKPB; // 0x10
		::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason EHNMMBNIOGA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGLAELHDEE_CTOR_OFFSET))(this);
		}

		::System::Boolean PNHAMFBHDCN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGLAELHDEE_PNHAMFBHDCN_OFFSET))(this);
		}

	};
