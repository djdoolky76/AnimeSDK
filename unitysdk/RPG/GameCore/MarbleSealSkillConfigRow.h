#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSealSkillConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLESEALSKILLCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81A6B0)
#define RPG_GAMECORE_MARBLESEALSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D81A340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealSkillConfigRow_TypeDefinitionIndex = 11853;

	class MarbleSealSkillConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillParamList; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID SkillDesc; // 0x28
		::System::UInt32 Level; // 0x38
		::System::UInt32 SkillHintType; // 0x3C
		::RPG::Client::TextID SkillName; // 0x40
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
