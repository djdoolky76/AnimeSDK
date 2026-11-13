#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJOFNOCMMKL.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define ECJPEEFJNCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3DD210)
#define ECJPEEFJNCG_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x1C3DCF50)
#define ECJPEEFJNCG_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x1C3DD0A0)

inline static constexpr unsigned int ECJPEEFJNCG_TypeDefinitionIndex = 79437;

	class ECJPEEFJNCG : public ::GJOFNOCMMKL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJPEEFJNCG_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJPEEFJNCG_KIGBILLGNOH_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimEvilSmileState LJOLGCNKIEH(::System::Single a1)
		{
			return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECJPEEFJNCG_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
