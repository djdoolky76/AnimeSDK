#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlanetFesSkill; }
namespace RPG::Client { class PlanetFesSkillPhase; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define IFNHPAKOANE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15F26F10)
#define IFNHPAKOANE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15F26F40)
#define IFNHPAKOANE___C__CREATEPHASESKILLS_B__1_0_OFFSET UNITYSDK_OFFSET(0x15F26F80)
#define IFNHPAKOANE___C__CREATEPHASES_B__0_0_OFFSET UNITYSDK_OFFSET(0x15F26F50)

inline static constexpr unsigned int IFNHPAKOANE___c_TypeDefinitionIndex = 66636;

	class IFNHPAKOANE___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::PlanetFesSkill*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::PlanetFesSkill*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58240);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58248);
		}

		static ::System::Comparison_1<::RPG::Client::PlanetFesSkillPhase*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::RPG::Client::PlanetFesSkillPhase*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFNHPAKOANE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNHPAKOANE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _CreatePhases_b__0_0(::RPG::Client::PlanetFesSkillPhase* a1, ::RPG::Client::PlanetFesSkillPhase* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + IFNHPAKOANE___C__CREATEPHASES_B__0_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _CreatePhaseSkills_b__1_0(::RPG::Client::PlanetFesSkill* a1, ::RPG::Client::PlanetFesSkill* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesSkill*, ::RPG::Client::PlanetFesSkill*))((::PBYTE)hIl2Cpp + IFNHPAKOANE___C__CREATEPHASESKILLS_B__1_0_OFFSET))(this, a1, a2);
		}

	};
