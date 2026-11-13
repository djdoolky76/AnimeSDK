#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJOFNOCMMKL.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define DJJAKKAKFNK_CTOR_OFFSET UNITYSDK_OFFSET(0x18BE9F00)
#define DJJAKKAKFNK_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x18BE9C60)
#define DJJAKKAKFNK_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x18BE9D70)

inline static constexpr unsigned int DJJAKKAKFNK_TypeDefinitionIndex = 79434;

	class DJJAKKAKFNK : public ::GJOFNOCMMKL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJAKKAKFNK_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJAKKAKFNK_KIGBILLGNOH_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimEvilSmileState LJOLGCNKIEH(::System::Single a1)
		{
			return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DJJAKKAKFNK_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
