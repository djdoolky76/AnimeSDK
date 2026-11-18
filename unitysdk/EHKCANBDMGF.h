#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }

#define EHKCANBDMGF_BNLNDILGBLP_OFFSET UNITYSDK_OFFSET(0x1063D080)
#define EHKCANBDMGF_FJEKCLOGANA_OFFSET UNITYSDK_OFFSET(0x1063D070)
#define EHKCANBDMGF_IOEHMBDBPFC_OFFSET UNITYSDK_OFFSET(0x1063D040)
#define EHKCANBDMGF_KKFEDIDEAEN_OFFSET UNITYSDK_OFFSET(0x1063D050)
#define EHKCANBDMGF_MMKHFMJGABG_OFFSET UNITYSDK_OFFSET(0x1063D060)
#define EHKCANBDMGF_OFBNHEDMBNP_OFFSET UNITYSDK_OFFSET(0x1063D090)
#define EHKCANBDMGF__CTOR_OFFSET UNITYSDK_OFFSET(0x1063D030)

inline static constexpr unsigned int EHKCANBDMGF_TypeDefinitionIndex = 66344;

class EHKCANBDMGF : public ::System::Object
{
public:
	::MoleMole::EntityHandle _IPDCGLKJMJB_k__BackingField; // 0x10
	::MoleMole::EntityHandle _EHODGDBAFLK_k__BackingField; // 0x20
	::MoleMole::Cameras::ScopedOverShoulderCamera* _BGBICDGPNLH_k__BackingField; // 0x30
	::System::Boolean JKHNHELJIAG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKCANBDMGF__CTOR_OFFSET))(this);
	}

	::System::Void IOEHMBDBPFC(::MoleMole::EntityHandle EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + EHKCANBDMGF_IOEHMBDBPFC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KKFEDIDEAEN(::MoleMole::EntityHandle EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + EHKCANBDMGF_KKFEDIDEAEN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MMKHFMJGABG(::MoleMole::Cameras::ScopedOverShoulderCamera* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::ScopedOverShoulderCamera*))((::PBYTE)hIl2Cpp + EHKCANBDMGF_MMKHFMJGABG_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Cameras::ScopedOverShoulderCamera* FJEKCLOGANA()
	{
		return ((::MoleMole::Cameras::ScopedOverShoulderCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKCANBDMGF_FJEKCLOGANA_OFFSET))(this);
	}

	::MoleMole::EntityHandle BNLNDILGBLP()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKCANBDMGF_BNLNDILGBLP_OFFSET))(this);
	}

	::MoleMole::EntityHandle OFBNHEDMBNP()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKCANBDMGF_OFBNHEDMBNP_OFFSET))(this);
	}
};
