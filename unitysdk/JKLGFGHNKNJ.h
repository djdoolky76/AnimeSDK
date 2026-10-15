#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJOFNOCMMKL.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define JKLGFGHNKNJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB219EB0)
#define JKLGFGHNKNJ_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB219CF0)
#define JKLGFGHNKNJ_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB219E00)

inline static constexpr unsigned int JKLGFGHNKNJ_TypeDefinitionIndex = 77098;

	class JKLGFGHNKNJ : public ::GJOFNOCMMKL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLGFGHNKNJ_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLGFGHNKNJ_KIGBILLGNOH_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimEvilSmileState LJOLGCNKIEH(::System::Single a1)
		{
			return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JKLGFGHNKNJ_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
