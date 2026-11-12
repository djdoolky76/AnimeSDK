#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceCatRow; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACECATROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7600F0)
#define RPG_GAMECORE_CAKERACECATROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E75F900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCatRow_TypeDefinitionIndex = 11011;

	class CakeRaceCatRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StartPerformanceIDList; // 0x10
		::System::String* CatAbilityJson; // 0x18
		::Il2CppArray<::System::UInt32>* RunnerupPerformanceIDList; // 0x20
		::System::String* CatPrefabPath; // 0x28
		::Il2CppArray<::System::UInt32>* BetPerformanceIDList; // 0x30
		::System::String* CatMatPath; // 0x38
		::System::String* CatIcon; // 0x40
		::Il2CppArray<::System::UInt32>* ChampionPerformanceIDList; // 0x48
		::System::String* CatMiddleIcon; // 0x50
		::System::String* CatMiniIcon; // 0x58
		::System::String* CatAIJson; // 0x60
		::Il2CppArray<::System::UInt32>* TitlePerformanceIDList; // 0x68
		::RPG::Client::TextID CakeTips; // 0x70
		::RPG::Client::TextID CatName; // 0x80
		::RPG::Client::TextID CatPersonalityTitle; // 0x90
		::RPG::Client::TextID CatSkillTitle; // 0xA0
		::RPG::Client::TextID CatPersonalityDesc; // 0xB0
		::System::UInt32 CatID; // 0xC0
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID CatSkillDesc; // 0xC8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceCatRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceCatRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
