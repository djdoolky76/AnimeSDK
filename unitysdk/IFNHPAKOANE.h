#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlanetFesSkill; }
namespace RPG::Client { class PlanetFesSkillPhase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFNHPAKOANE_CIOEDCPDEPA_OFFSET UNITYSDK_OFFSET(0x15F1A320)
#define IFNHPAKOANE_CTOR_OFFSET UNITYSDK_OFFSET(0x15F1AFA0)
#define IFNHPAKOANE_IOKIHHEAJLL_OFFSET UNITYSDK_OFFSET(0x15F1AAC0)

inline static constexpr unsigned int IFNHPAKOANE_TypeDefinitionIndex = 66635;

	class IFNHPAKOANE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesSkill*>* JIILNFBDFDK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNHPAKOANE_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkillPhase*>* CIOEDCPDEPA()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkillPhase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNHPAKOANE_CIOEDCPDEPA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkill*>* IOKIHHEAJLL(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkill*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFNHPAKOANE_IOKIHHEAJLL_OFFSET))(this, a1);
		}

	};
