#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPECLFAEAHB.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"

class KMKIDBCCJAJ;

#define KLGKGCHEHKB_BEOFENDIOEO_OFFSET UNITYSDK_OFFSET(0x1681D0A0)
#define KLGKGCHEHKB_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x1681CF10)
#define KLGKGCHEHKB_KFFILAICEFE_OFFSET UNITYSDK_OFFSET(0x1681D030)
#define KLGKGCHEHKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1681CEB0)

inline static constexpr unsigned int KLGKGCHEHKB_TypeDefinitionIndex = 78115;

class KLGKGCHEHKB : public ::EPECLFAEAHB
{
public:
	::KMKIDBCCJAJ* MPAGBEOBFGD; // 0x10
	::System::Single NHKFNGBAONG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGKGCHEHKB__CTOR_OFFSET))(this);
	}

	::MoleMole::NAPInput::IMUData GIAOBHOJCDP(::MoleMole::NAPInput::IMUData BPIKCCNLPBD)
	{
		return ((::MoleMole::NAPInput::IMUData(*)(::PVOID, ::MoleMole::NAPInput::IMUData))((::PBYTE)hIl2Cpp + KLGKGCHEHKB_GIAOBHOJCDP_OFFSET))(this, BPIKCCNLPBD);
	}

	::System::Void KFFILAICEFE(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLGKGCHEHKB_KFFILAICEFE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single BEOFENDIOEO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGKGCHEHKB_BEOFENDIOEO_OFFSET))(this);
	}
};
