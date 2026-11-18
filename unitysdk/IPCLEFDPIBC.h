#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKCNKNCLOLO.h"

#define IPCLEFDPIBC_CGMIGCFDDGN_OFFSET UNITYSDK_OFFSET(0x1F724A30)
#define IPCLEFDPIBC_HFJKKGKPANC_OFFSET UNITYSDK_OFFSET(0x1F7249D0)
#define IPCLEFDPIBC_KKKLGGOKNGO_OFFSET UNITYSDK_OFFSET(0x1F724A40)
#define IPCLEFDPIBC_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1F724980)
#define IPCLEFDPIBC_OEJCNHJDPPO_OFFSET UNITYSDK_OFFSET(0x1F7249E0)
#define IPCLEFDPIBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F724970)

inline static constexpr unsigned int IPCLEFDPIBC_TypeDefinitionIndex = 96479;

class IPCLEFDPIBC : public ::NKCNKNCLOLO
{
public:
	::System::Int32 _DCDEDLHJKCP_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCLEFDPIBC__CTOR_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCLEFDPIBC_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Void HFJKKGKPANC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCLEFDPIBC_HFJKKGKPANC_OFFSET))(this);
	}

	::System::Void OEJCNHJDPPO(::System::Int32 ODIBMNFFMHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IPCLEFDPIBC_OEJCNHJDPPO_OFFSET))(this, ODIBMNFFMHI);
	}

	::System::Int32 CGMIGCFDDGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCLEFDPIBC_CGMIGCFDDGN_OFFSET))(this);
	}

	::System::Void KKKLGGOKNGO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IPCLEFDPIBC_KKKLGGOKNGO_OFFSET))(this, EGEGIMGMJHN);
	}
};
