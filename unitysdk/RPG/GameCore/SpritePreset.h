#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SpritePresetStrategyType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpritePreset; }
namespace RPG::GameCore { class SpritePresetRecord; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPRITEPRESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD4280)
#define RPG_GAMECORE_SPRITEPRESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD40A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpritePreset_TypeDefinitionIndex = 24421;

	class SpritePreset : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* FolderPath; // 0x18
		::RPG::GameCore::SpritePresetStrategyType StrategyType; // 0x20
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SpritePresetRecord*>* SpriteRecords; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpritePreset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpritePreset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
