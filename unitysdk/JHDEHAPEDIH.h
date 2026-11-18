#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraShotData_EKNIALFMDNP.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class CameraShotData; }
namespace System { class Action; }

#define JHDEHAPEDIH_HKIMLJIPNHL_OFFSET UNITYSDK_OFFSET(0x71F680)
#define JHDEHAPEDIH_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x71F6B0)
#define JHDEHAPEDIH_KCLKAHEDIIE_OFFSET UNITYSDK_OFFSET(0x71F670)
#define JHDEHAPEDIH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x71F690)

inline static constexpr unsigned int JHDEHAPEDIH_TypeDefinitionIndex = 48705;

struct alignas(8) JHDEHAPEDIH
{
	::System::Action* EGBBBMAIKNP; // 0x10

	::System::Void KCLKAHEDIIE(::MoleMole::CameraShotData* CNABFFJNFIE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraShotData*))((::PBYTE)hIl2Cpp + JHDEHAPEDIH_KCLKAHEDIIE_OFFSET))(this, CNABFFJNFIE);
	}

	::System::Void HKIMLJIPNHL(::System::UInt32 BKLGNCBNEGM, ::MoleMole::CameraShotData* CNABFFJNFIE, ::MoleMole::CameraShotData_EKNIALFMDNP ELCEKDCDGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::CameraShotData*, ::MoleMole::CameraShotData_EKNIALFMDNP))((::PBYTE)hIl2Cpp + JHDEHAPEDIH_HKIMLJIPNHL_OFFSET))(this, BKLGNCBNEGM, CNABFFJNFIE, ELCEKDCDGOL);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDEHAPEDIH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void JMDEKPONKMF(::System::UInt32 BKLGNCBNEGM, ::MoleMole::CameraShotData* CNABFFJNFIE, ::MoleMole::CameraShotData_EKNIALFMDNP ELCEKDCDGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::CameraShotData*, ::MoleMole::CameraShotData_EKNIALFMDNP))((::PBYTE)hIl2Cpp + JHDEHAPEDIH_JMDEKPONKMF_OFFSET))(this, BKLGNCBNEGM, CNABFFJNFIE, ELCEKDCDGOL);
	}
};
