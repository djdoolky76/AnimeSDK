#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class String; }

#define KGIBAGMFENA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C9A60)

inline static constexpr unsigned int KGIBAGMFENA_TypeDefinitionIndex = 44182;

	class KGIBAGMFENA : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelTriggerInfo* BIBDONOMAHG; // 0x10
		::System::String* BOJDIGAHJPL; // 0x18
		::RPG::GameCore::PropButtonConfig* MMGFJOCJGDE; // 0x20
		::System::UInt32 IGFOEDHAHNM; // 0x28
		::System::Boolean POHEIGDPBBO; // 0x2C
		::System::Boolean CKECINOEDKI; // 0x2D
		::System::Boolean HHOGEGIGHPM; // 0x2E
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGIBAGMFENA_CTOR_OFFSET))(this);
		}

	};
