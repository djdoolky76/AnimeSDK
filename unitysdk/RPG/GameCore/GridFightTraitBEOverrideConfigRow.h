#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class GridFightTraitBEOverrideConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTTRAITBEOVERRIDECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D746580)
#define RPG_GAMECORE_GRIDFIGHTTRAITBEOVERRIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D746170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitBEOverrideConfigRow_TypeDefinitionIndex = 13707;

	class GridFightTraitBEOverrideConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* OverrideSkillIDList; // 0x10
		::System::String* AbilityName; // 0x18
		::System::String* SpecialIconPath; // 0x20
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* OverrideBEProperty; // 0x28
		::RPG::Client::TextID OneWordDesc; // 0x30
		::RPG::Client::TextID TraitTitleDesc; // 0x40
		::System::UInt32 TraitID; // 0x50
		::System::UInt32 TraitLayer; // 0x54
		::RPG::Client::TextID OneWordDescSimple; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBEOVERRIDECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTraitBEOverrideConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTraitBEOverrideConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBEOVERRIDECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
