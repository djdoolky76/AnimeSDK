#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesSkillTreePhaseRow; }

#define RPG_GAMECORE_PLANETFESSKILLTREEPHASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92B370)
#define RPG_GAMECORE_PLANETFESSKILLTREEPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D92B1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesSkillTreePhaseRow_TypeDefinitionIndex = 12205;

	class PlanetFesSkillTreePhaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 Phase; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESSKILLTREEPHASEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesSkillTreePhaseRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesSkillTreePhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESSKILLTREEPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
