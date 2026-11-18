#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class OGKNLFKPKNC;
namespace MoleMole { class TurnBattleUnitBase; }
namespace System { class Object; }

#define OGKNLFKPKNC_ECOGGCCDKPA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x595470)
#define OGKNLFKPKNC_ECOGGCCDKPA_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x595410)
#define OGKNLFKPKNC_ECOGGCCDKPA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5953F0)
#define OGKNLFKPKNC_ECOGGCCDKPA_RESET_OFFSET UNITYSDK_OFFSET(0x595400)
#define OGKNLFKPKNC_ECOGGCCDKPA_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x595420)
#define OGKNLFKPKNC_ECOGGCCDKPA__CTOR_OFFSET UNITYSDK_OFFSET(0x5953C0)

inline static constexpr unsigned int OGKNLFKPKNC_ECOGGCCDKPA_TypeDefinitionIndex = 65271;

struct alignas(8) OGKNLFKPKNC_ECOGGCCDKPA
{
	::System::Int32 GDIDPEIICMF; // 0x10
	::System::Byte _padding0[0x4];
	::OGKNLFKPKNC* HMGBIBEBAHJ; // 0x18
	::MoleMole::TurnBattleUnitBase* JDHAFGDONFN; // 0x20
	::System::Int32 MLNKCNJEOMI; // 0x28

	::System::Void _ctor(::OGKNLFKPKNC* KPBHHCDEKHI)
	{
		return ((::System::Void(*)(::PVOID, ::OGKNLFKPKNC*))((::PBYTE)hIl2Cpp + OGKNLFKPKNC_ECOGGCCDKPA__CTOR_OFFSET))(this, KPBHHCDEKHI);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKNLFKPKNC_ECOGGCCDKPA_MOVENEXT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKNLFKPKNC_ECOGGCCDKPA_RESET_OFFSET))(this);
	}

	::MoleMole::TurnBattleUnitBase* get_Current()
	{
		return ((::MoleMole::TurnBattleUnitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKNLFKPKNC_ECOGGCCDKPA_GET_CURRENT_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKNLFKPKNC_ECOGGCCDKPA_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKNLFKPKNC_ECOGGCCDKPA_DISPOSE_OFFSET))(this);
	}
};
