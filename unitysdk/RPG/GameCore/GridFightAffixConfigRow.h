#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightAffixRule.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightAffixConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTAFFIXCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x205FADC0)
#define RPG_GAMECORE_GRIDFIGHTAFFIXCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x205FAA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAffixConfigRow_TypeDefinitionIndex = 13470;

	class GridFightAffixConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::System::UInt32>* RuleParamList; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x28
		::RPG::GameCore::GridFightAffixRule AffixRule; // 0x30
		::System::UInt32 ID; // 0x34
		::RPG::Client::TextID AffixName; // 0x38
		::RPG::Client::TextID AffixDesc; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAFFIXCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightAffixConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightAffixConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAFFIXCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
