#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPECLFAEAHB.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"

#define DILAPIKNJIG_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x12BB3820)
#define DILAPIKNJIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB3900)

inline static constexpr unsigned int DILAPIKNJIG_TypeDefinitionIndex = 60972;

class DILAPIKNJIG : public ::EPECLFAEAHB
{
public:
	::System::Single FPHIDCEHLGG; // 0x10
	::System::Single BNCOIIPHKFD; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILAPIKNJIG__CTOR_OFFSET))(this);
	}

	::MoleMole::NAPInput::IMUData GIAOBHOJCDP(::MoleMole::NAPInput::IMUData BPIKCCNLPBD)
	{
		return ((::MoleMole::NAPInput::IMUData(*)(::PVOID, ::MoleMole::NAPInput::IMUData))((::PBYTE)hIl2Cpp + DILAPIKNJIG_GIAOBHOJCDP_OFFSET))(this, BPIKCCNLPBD);
	}
};
