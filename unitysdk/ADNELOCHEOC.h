#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

#define ADNELOCHEOC_ADBAHILIPIH_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define ADNELOCHEOC_BGCCFFLCKJB_OFFSET UNITYSDK_OFFSET(0x57AAC0)
#define ADNELOCHEOC_CLDIDBIFCNE_OFFSET UNITYSDK_OFFSET(0x363D60)
#define ADNELOCHEOC_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x359320)
#define ADNELOCHEOC_FBCKINGAOFO_OFFSET UNITYSDK_OFFSET(0x3D0180)
#define ADNELOCHEOC_GKFPABOPCBD_OFFSET UNITYSDK_OFFSET(0x359150)
#define ADNELOCHEOC_HGJHKJINFKJ_OFFSET UNITYSDK_OFFSET(0x52D8C0)
#define ADNELOCHEOC_HNDPCFOBLBF_OFFSET UNITYSDK_OFFSET(0x3A45D0)
#define ADNELOCHEOC_IODHKNFEHNH_OFFSET UNITYSDK_OFFSET(0x6F1DC0)
#define ADNELOCHEOC_KADIOKOICEL_OFFSET UNITYSDK_OFFSET(0x3668E0)
#define ADNELOCHEOC_LALINCEEHCA_OFFSET UNITYSDK_OFFSET(0x359B10)
#define ADNELOCHEOC_OAJEIDFGCII_OFFSET UNITYSDK_OFFSET(0x5E6980)
#define ADNELOCHEOC_PAGJKBAJOLO_OFFSET UNITYSDK_OFFSET(0x5D0520)

inline static constexpr unsigned int ADNELOCHEOC_TypeDefinitionIndex = 79503;

struct alignas(4) ADNELOCHEOC
{
	::System::Int32 _DDIENHMKJKO_k__BackingField; // 0x10
	::System::Int32 _LEJKFDMNPKF_k__BackingField; // 0x14
	::System::Int32 _PDPHPHALJPG_k__BackingField; // 0x18
	::System::Int32 _GIMHLCJEHLG_k__BackingField; // 0x1C
	::System::Int32 _OHHHILJAHIF_k__BackingField; // 0x20
	::System::Byte _padding0[0x4];
	::MoleMole::EntityHandle _EEJBJJPHNKB_k__BackingField; // 0x28

	::System::Void BGCCFFLCKJB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ADNELOCHEOC_BGCCFFLCKJB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNELOCHEOC_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Void PAGJKBAJOLO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ADNELOCHEOC_PAGJKBAJOLO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ADBAHILIPIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNELOCHEOC_ADBAHILIPIH_OFFSET))(this);
	}

	::System::Int32 CLDIDBIFCNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNELOCHEOC_CLDIDBIFCNE_OFFSET))(this);
	}

	::System::Int32 KADIOKOICEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNELOCHEOC_KADIOKOICEL_OFFSET))(this);
	}

	::System::Int32 LALINCEEHCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNELOCHEOC_LALINCEEHCA_OFFSET))(this);
	}

	::System::Boolean OAJEIDFGCII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNELOCHEOC_OAJEIDFGCII_OFFSET))(this);
	}

	::System::Void GKFPABOPCBD(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ADNELOCHEOC_GKFPABOPCBD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HNDPCFOBLBF(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ADNELOCHEOC_HNDPCFOBLBF_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::EntityHandle FBCKINGAOFO()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNELOCHEOC_FBCKINGAOFO_OFFSET))(this);
	}

	::System::Void HGJHKJINFKJ(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ADNELOCHEOC_HGJHKJINFKJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IODHKNFEHNH(::MoleMole::EntityHandle EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + ADNELOCHEOC_IODHKNFEHNH_OFFSET))(this, EGEGIMGMJHN);
	}
};
