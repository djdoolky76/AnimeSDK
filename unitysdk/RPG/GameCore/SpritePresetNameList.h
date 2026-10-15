#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpritePresetNameList; }
namespace System { class String; }

#define RPG_GAMECORE_SPRITEPRESETNAMELIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB01C30)
#define RPG_GAMECORE_SPRITEPRESETNAMELIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB01B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpritePresetNameList_TypeDefinitionIndex = 24422;

	class SpritePresetNameList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* NameList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESETNAMELIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpritePresetNameList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpritePresetNameList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESETNAMELIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
