#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/BangbooPlayType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BFLPANDDGHG;
namespace MoleMole::Battle { class Entity; }

#define APNCODNOFLH_MLONIMIKEDP_GECLIEPPGKC_OFFSET UNITYSDK_OFFSET(0x14237030)
#define APNCODNOFLH_MLONIMIKEDP__CTOR_OFFSET UNITYSDK_OFFSET(0x14237020)

inline static constexpr unsigned int APNCODNOFLH_MLONIMIKEDP_TypeDefinitionIndex = 80730;

class APNCODNOFLH_MLONIMIKEDP : public ::System::Object
{
public:
	::BFLPANDDGHG* NOBKPCEHGPE; // 0x10
	::MoleMole::Battle::Entity* MICBCIFJKMG; // 0x18
	::MoleMole::Level::BangbooPlayType MAOCFFFKJCF; // 0x20
	::System::Int32 FFJGPKNMBBP; // 0x24
	::System::Boolean FCJGGAHKECL; // 0x28
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x2C
	::System::Single DCEOBAPNGIK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNCODNOFLH_MLONIMIKEDP__CTOR_OFFSET))(this);
	}

	::System::Void GECLIEPPGKC(::MoleMole::Battle::Entity* HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + APNCODNOFLH_MLONIMIKEDP_GECLIEPPGKC_OFFSET))(this, HAAEBCOBKFF);
	}
};
