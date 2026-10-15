#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIOAHMPNJCH;
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define BIOAHMPNJCH___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB78FAA0)
#define BIOAHMPNJCH___C__DISPLAYCLASS4_0__OPENENTRANCEWINDOWPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0xB790730)

inline static constexpr unsigned int BIOAHMPNJCH___c__DisplayClass4_0_TypeDefinitionIndex = 82074;

	class BIOAHMPNJCH___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>* promise; // 0x10
		::BIOAHMPNJCH* __4__this; // 0x18
		::System::UInt32 initSelectLevelGroupID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOAHMPNJCH___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _OpenEntranceWindowPromised_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIOAHMPNJCH___C__DISPLAYCLASS4_0__OPENENTRANCEWINDOWPROMISED_B__0_OFFSET))(this);
		}

	};
