#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJOFNOCMMKL.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define JKLGFGHNKNJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB21FC60)
#define JKLGFGHNKNJ_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB21FAA0)
#define JKLGFGHNKNJ_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB21FBB0)

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
