#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MonopolyGameState.h"
#include "unitysdk/System/Object.h"
class KGMBGMIGHOE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MMKLPBKJMCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92DC00)

	class MMKLPBKJMCI : public ::System::Object
	{
	public:
		::KGMBGMIGHOE* DLGJKBMEFON; // 0x10
		::System::Collections::Generic::List_1<::KGMBGMIGHOE*>* MFJDOHANPFF; // 0x18
		::System::UInt32 HBPECADBGBB; // 0x20
		::RPG::Client::LittleGame::MonopolyGameState ADCPPJNMGJP; // 0x24
		::System::UInt32 DGKGNHLCJKN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKLPBKJMCI_CTOR_OFFSET))(this);
		}

	};
