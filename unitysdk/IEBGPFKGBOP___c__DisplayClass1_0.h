#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterVisibleComponent; }

#define IEBGPFKGBOP___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15EDBE00)
#define IEBGPFKGBOP___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x15EDBE10)

inline static constexpr unsigned int IEBGPFKGBOP___c__DisplayClass1_0_TypeDefinitionIndex = 58553;

	class IEBGPFKGBOP___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterVisibleComponent* pCharVisibleComponent; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBGPFKGBOP___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBGPFKGBOP___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this);
		}

	};
