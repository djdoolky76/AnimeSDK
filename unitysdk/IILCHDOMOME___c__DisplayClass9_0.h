#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class PlayScreenTransfer; }

#define IILCHDOMOME___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x193DE350)
#define IILCHDOMOME___C__DISPLAYCLASS9_0___UIOPENLOBBYPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x193DEA70)

inline static constexpr unsigned int IILCHDOMOME___c__DisplayClass9_0_TypeDefinitionIndex = 67978;

	class IILCHDOMOME___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::PlayScreenTransfer* screenTransfer; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCHDOMOME___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void __UiOpenLobbyPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCHDOMOME___C__DISPLAYCLASS9_0___UIOPENLOBBYPAGE_B__0_OFFSET))(this);
		}

	};
