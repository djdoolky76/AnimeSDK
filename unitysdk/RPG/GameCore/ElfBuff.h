#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfTargetType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfBuff; }
namespace RPG::GameCore { class ElfPropertyModifier; }
namespace System { class String; }

#define RPG_GAMECORE_ELFBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D606BF0)
#define RPG_GAMECORE_ELFBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D606960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfBuff_TypeDefinitionIndex = 18485;

	class ElfBuff : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ElfTargetType TargetType; // 0x10
		::RPG::GameCore::LittleGameEntityType LittleGameEntityType; // 0x14
		::System::Single Duration; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::ElfPropertyModifier*>* PropertyModifiers; // 0x20
		::Il2CppArray<::System::String*>* BuffEffects; // 0x28
		::Il2CppArray<::System::String*>* AudioEffects; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
