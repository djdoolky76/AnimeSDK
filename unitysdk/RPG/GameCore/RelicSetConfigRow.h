#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicSetConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_RELICSETCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB994D0)
#define RPG_GAMECORE_RELICSETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB98C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSetConfigRow_TypeDefinitionIndex = 14796;

	class RelicSetConfigRow : public ::System::Object
	{
	public:
		::System::String* ReleaseVersion; // 0x10
		::Il2CppArray<::System::UInt32>* SetSkillList; // 0x18
		::System::String* SetIconPath; // 0x20
		::System::String* SetIconFigurePath; // 0x28
		::RPG::Client::TextID SetName; // 0x30
		::System::UInt32 SetID; // 0x40
		::System::Boolean IsPlanarSuit; // 0x44
		::System::Boolean Release; // 0x45
		::System::Byte _padding0[0x2];
		::System::UInt32 DisplayItemID; // 0x48
		::System::UInt32 DisplayItemIDRarity4; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RelicSetConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RelicSetConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
