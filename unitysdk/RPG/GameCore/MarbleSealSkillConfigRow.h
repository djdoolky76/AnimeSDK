#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSealSkillConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLESEALSKILLCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4EB20)
#define RPG_GAMECORE_MARBLESEALSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB4E7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealSkillConfigRow_TypeDefinitionIndex = 11910;

	class MarbleSealSkillConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillParamList; // 0x10
		::System::String* IconPath; // 0x18
		::RPG::Client::TextID SkillDesc; // 0x20
		::System::UInt32 Level; // 0x30
		::System::UInt32 GroupID; // 0x34
		::RPG::Client::TextID SkillName; // 0x38
		::System::UInt32 ID; // 0x48
		::System::UInt32 SkillHintType; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALSKILLCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSealSkillConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSealSkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALSKILLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
