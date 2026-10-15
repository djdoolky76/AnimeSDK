#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPCLNJFNJCL.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
namespace RPG::Client { class CharacterRootMotionBakedData; }

#define KLLLADNJBOI_CTOR_OFFSET UNITYSDK_OFFSET(0xB528390)
#define KLLLADNJBOI_KFNNNEBIFLL_OFFSET UNITYSDK_OFFSET(0xB528220)

inline static constexpr unsigned int KLLLADNJBOI_TypeDefinitionIndex = 53623;

	class KLLLADNJBOI : public ::LPCLNJFNJCL
	{
	public:
		::RPG::Client::CharacterRootMotionBakedData* APPIHABBCGK; // 0x48
		::System::Void _ctor(::RPG::GameCore::NPCBodySize a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + KLLLADNJBOI_CTOR_OFFSET))(this, a1);
		}

		::System::Single KFNNNEBIFLL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLLADNJBOI_KFNNNEBIFLL_OFFSET))(this);
		}

	};
