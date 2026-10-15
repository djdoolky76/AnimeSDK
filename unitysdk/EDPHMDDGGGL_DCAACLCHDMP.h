#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDPHMDDGGGL_StoryCharacterType.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CreateCharacter; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define EDPHMDDGGGL_DCAACLCHDMP_CTOR_OFFSET UNITYSDK_OFFSET(0x13331C40)

inline static constexpr unsigned int EDPHMDDGGGL_DCAACLCHDMP_TypeDefinitionIndex = 60717;

	class EDPHMDDGGGL_DCAACLCHDMP : public ::System::Object
	{
	public:
		::System::String* LIGGALJGCFH; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::RPG::GameCore::CreateCharacter* LPLGFNAGHON; // 0x20
		::System::String* OJDMHBKCEEM; // 0x28
		::System::String* EPGBFPKDFNF; // 0x30
		::EDPHMDDGGGL_StoryCharacterType FMCILNHKMNO; // 0x38
		::RPG::GameCore::NPCSubType KCEMHIBMNGH; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPHMDDGGGL_DCAACLCHDMP_CTOR_OFFSET))(this);
		}

	};
