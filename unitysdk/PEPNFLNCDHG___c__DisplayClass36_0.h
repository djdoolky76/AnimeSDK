#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterEmoConfig; }
namespace System { class String; }

#define PEPNFLNCDHG___C__DISPLAYCLASS36_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC1FCAA0)
#define PEPNFLNCDHG___C__DISPLAYCLASS36_0__REPLACECHARACTEREMOTION_B__0_OFFSET UNITYSDK_OFFSET(0xC2000F0)

inline static constexpr unsigned int PEPNFLNCDHG___c__DisplayClass36_0_TypeDefinitionIndex = 57246;

	class PEPNFLNCDHG___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::String* uniqueName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG___C__DISPLAYCLASS36_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ReplaceCharacterEmotion_b__0(::RPG::GameCore::CharacterEmoConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterEmoConfig*))((::PBYTE)hIl2Cpp + PEPNFLNCDHG___C__DISPLAYCLASS36_0__REPLACECHARACTEREMOTION_B__0_OFFSET))(this, a1);
		}

	};
