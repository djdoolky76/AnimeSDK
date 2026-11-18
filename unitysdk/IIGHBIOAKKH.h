#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBACOLPIJFF.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IIGHBIOAKKH_BHFPFAIEDFO_OFFSET UNITYSDK_OFFSET(0x14A23E80)
#define IIGHBIOAKKH_FLKCEKGCMAA_OFFSET UNITYSDK_OFFSET(0x14A242C0)
#define IIGHBIOAKKH_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x14A24000)
#define IIGHBIOAKKH_ICEFELAKHBM_OFFSET UNITYSDK_OFFSET(0x14A24350)
#define IIGHBIOAKKH_KJDFICNBBNK_OFFSET UNITYSDK_OFFSET(0x14A23CD0)
#define IIGHBIOAKKH__CTOR_OFFSET UNITYSDK_OFFSET(0x14A24210)

inline static constexpr unsigned int IIGHBIOAKKH_TypeDefinitionIndex = 40022;

class IIGHBIOAKKH : public ::OBACOLPIJFF
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* DLPCFOKOEDO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHBIOAKKH__CTOR_OFFSET))(this);
	}

	::System::Void KJDFICNBBNK(::MoleMole::Battle::Entity* CGELPKBKHOJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_KJDFICNBBNK_OFFSET))(this, CGELPKBKHOJ);
	}

	::System::Void BHFPFAIEDFO(::MoleMole::Battle::Entity* CGELPKBKHOJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_BHFPFAIEDFO_OFFSET))(this, CGELPKBKHOJ);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void FLKCEKGCMAA(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_FLKCEKGCMAA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ICEFELAKHBM(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_ICEFELAKHBM_OFFSET))(this, MIALFKCCCPI);
	}
};
