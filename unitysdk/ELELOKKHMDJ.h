#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPECLFAEAHB.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"

#define ELELOKKHMDJ_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x14AA6E80)
#define ELELOKKHMDJ_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x14AA6F40)
#define ELELOKKHMDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA6E20)

inline static constexpr unsigned int ELELOKKHMDJ_TypeDefinitionIndex = 51479;

class ELELOKKHMDJ : public ::EPECLFAEAHB
{
public:
	::UnityEngine::Vector3 DMNKDODPMOA; // 0x10
	::UnityEngine::Vector3 PNPJHDEHNFP; // 0x1C
	::UnityEngine::Vector3 LBHIMKKELAB; // 0x28
	::UnityEngine::Vector3 PGCODIHKJDP; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELELOKKHMDJ__CTOR_OFFSET))(this);
	}

	::MoleMole::NAPInput::IMUData GIAOBHOJCDP(::MoleMole::NAPInput::IMUData BPIKCCNLPBD)
	{
		return ((::MoleMole::NAPInput::IMUData(*)(::PVOID, ::MoleMole::NAPInput::IMUData))((::PBYTE)hIl2Cpp + ELELOKKHMDJ_GIAOBHOJCDP_OFFSET))(this, BPIKCCNLPBD);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELELOKKHMDJ_NPOLNFDBOOD_OFFSET))(this);
	}
};
