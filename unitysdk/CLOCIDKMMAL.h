#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICCLDNDNHPD;
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace System { class Action; }

#define CLOCIDKMMAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B184770)
#define CLOCIDKMMAL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B184780)
#define CLOCIDKMMAL_TICK_OFFSET UNITYSDK_OFFSET(0x1B184830)

inline static constexpr unsigned int CLOCIDKMMAL_TypeDefinitionIndex = 81083;

	class CLOCIDKMMAL : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelGameSessionChimera* NOKJFPPOHKM; // 0x10
		::System::Void _ctor(::RPG::Client::ChimeraDuelGameSessionChimera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + CLOCIDKMMAL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + CLOCIDKMMAL_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLOCIDKMMAL_TICK_OFFSET))(this, a1);
		}

	};
