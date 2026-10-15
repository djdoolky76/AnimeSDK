#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDPHMDDGGGL_StoryCharacterType.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CreateCharacter; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define EDPHMDDGGGL_DCAACLCHDMP_CTOR_OFFSET UNITYSDK_OFFSET(0x13336910)

inline static constexpr unsigned int EDPHMDDGGGL_DCAACLCHDMP_TypeDefinitionIndex = 60717;

	class EDPHMDDGGGL_DCAACLCHDMP : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::String* EPGBFPKDFNF; // 0x18
		::System::String* LIGGALJGCFH; // 0x20
		::RPG::GameCore::CreateCharacter* LPLGFNAGHON; // 0x28
		::System::String* OJDMHBKCEEM; // 0x30
		::RPG::GameCore::NPCSubType KCEMHIBMNGH; // 0x38
		::EDPHMDDGGGL_StoryCharacterType FMCILNHKMNO; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPHMDDGGGL_DCAACLCHDMP_CTOR_OFFSET))(this);
		}

	};
