#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCHBFEIOIHA;
class PKBOFOOJCGL;
namespace RPG::GameCore { class HipplenIncidentRandomStepConfig; }
namespace RPG::GameCore { class HipplenIncidentStepConfig; }

#define IBGLNMIFFJI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15E32450)
#define IBGLNMIFFJI_ODHGGOOEIAC_OFFSET UNITYSDK_OFFSET(0x15E326D0)

inline static constexpr unsigned int IBGLNMIFFJI_TypeDefinitionIndex = 75555;

	class IBGLNMIFFJI : public ::System::Object
	{
	public:
		static ::JCHBFEIOIHA* BPLPBPMEODA(::RPG::GameCore::HipplenIncidentStepConfig* a1, ::PKBOFOOJCGL* a2)
		{
			return ((::JCHBFEIOIHA*(*)(::RPG::GameCore::HipplenIncidentStepConfig*, ::PKBOFOOJCGL*))((::PBYTE)hIl2Cpp + IBGLNMIFFJI_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::JCHBFEIOIHA* ODHGGOOEIAC(::RPG::GameCore::HipplenIncidentRandomStepConfig* a1, ::PKBOFOOJCGL* a2)
		{
			return ((::JCHBFEIOIHA*(*)(::RPG::GameCore::HipplenIncidentRandomStepConfig*, ::PKBOFOOJCGL*))((::PBYTE)hIl2Cpp + IBGLNMIFFJI_ODHGGOOEIAC_OFFSET))(a1, a2);
		}

	};
