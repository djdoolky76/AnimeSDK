#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCharacterEffectMaterialBlock; }
namespace System { class String; }

#define RPG_GAMECORE_SETCHARACTEREFFECTMATERIALBLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9A380)
#define RPG_GAMECORE_SETCHARACTEREFFECTMATERIALBLOCK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9A390)
#define RPG_GAMECORE_SETCHARACTEREFFECTMATERIALBLOCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9A350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterEffectMaterialBlock_TypeDefinitionIndex = 23188;

	class SetCharacterEffectMaterialBlock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::System::String* PropertyName; // 0x20
		::System::Single FloatValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTEREFFECTMATERIALBLOCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterEffectMaterialBlock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterEffectMaterialBlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTEREFFECTMATERIALBLOCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterEffectMaterialBlock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterEffectMaterialBlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTEREFFECTMATERIALBLOCK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
