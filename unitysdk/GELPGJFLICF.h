#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKHLHKLKGLK.h"
#include "unitysdk/MoleMole/GalGame/GalArgueGoalMode.h"
#include "unitysdk/MoleMole/GalGame/GalArgueStageLocation.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/System/Object.h"

class KANLNIKCCKJ;

#define GELPGJFLICF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x10EE8410)
#define GELPGJFLICF_BHPMKNIJCAB_OFFSET UNITYSDK_OFFSET(0x10EE8630)
#define GELPGJFLICF_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x10EE8150)
#define GELPGJFLICF_EDNBHNODONH_OFFSET UNITYSDK_OFFSET(0x10EE8460)
#define GELPGJFLICF_EDOKCMAPAPM_OFFSET UNITYSDK_OFFSET(0x10EE84C0)
#define GELPGJFLICF_HIMIIPAALBM_OFFSET UNITYSDK_OFFSET(0x10EE8690)
#define GELPGJFLICF_JNIFECPJLDF_OFFSET UNITYSDK_OFFSET(0x10EE82E0)
#define GELPGJFLICF_LGHBLIKMDFB_OFFSET UNITYSDK_OFFSET(0x10EE8540)
#define GELPGJFLICF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x10EE8550)
#define GELPGJFLICF_PJHOIJLMOJF_OFFSET UNITYSDK_OFFSET(0x10EE8350)
#define GELPGJFLICF__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE8100)

inline static constexpr unsigned int GELPGJFLICF_TypeDefinitionIndex = 78705;

class GELPGJFLICF : public ::System::Object
{
public:
	::KANLNIKCCKJ* BDFJOMOHNEE; // 0x10
	::KANLNIKCCKJ* EAKJDFCAIJG; // 0x18
	::JKHLHKLKGLK JKBLDFBGBPK; // 0x20
	::System::Boolean EILMKJPLFPP; // 0x24
	::System::Boolean NJMFEKADBLE; // 0x25
	::System::Boolean AILBJKMGGEP; // 0x26
	::System::Byte _padding0[0x1];
	::MoleMole::GalGame::GalArgueGoalMode NMPHPNKBJPM; // 0x28
	::MoleMole::GalGame::GalArgueStageLocation KBNOKMBGKII; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELPGJFLICF__CTOR_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 JOKFPHJBFNG, ::System::Int32 GBDBCNCHFAJ, ::System::Int32 OLLMHEGIMAH, ::System::Int32 GIKMEGCAIOM, ::System::Int32 MFNDHJEDHIE, ::System::Int32 DABPBOEHNEB, ::MoleMole::GalGame::GalArgueStageLocation ECGJKACPGAN, ::MoleMole::GalGame::GalArgueGoalMode GEJCKFFFKCL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::MoleMole::GalGame::GalArgueStageLocation, ::MoleMole::GalGame::GalArgueGoalMode))((::PBYTE)hIl2Cpp + GELPGJFLICF_CNHBDOMKKDE_OFFSET))(this, JOKFPHJBFNG, GBDBCNCHFAJ, OLLMHEGIMAH, GIKMEGCAIOM, MFNDHJEDHIE, DABPBOEHNEB, ECGJKACPGAN, GEJCKFFFKCL);
	}

	::System::Boolean JNIFECPJLDF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GELPGJFLICF_JNIFECPJLDF_OFFSET))(this);
	}

	::System::Boolean PJHOIJLMOJF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GELPGJFLICF_PJHOIJLMOJF_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Boolean KNHHFCNIPEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GELPGJFLICF_BBOMJDBNHIC_OFFSET))(this, KNHHFCNIPEF);
	}

	::System::Boolean EDNBHNODONH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GELPGJFLICF_EDNBHNODONH_OFFSET))(this);
	}

	::System::Void EDOKCMAPAPM(::MoleMole::GalGame::GalNPCLocation LHDHLAEPFBH, ::System::Int32 NHKAEEMNEAD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalNPCLocation, ::System::Int32))((::PBYTE)hIl2Cpp + GELPGJFLICF_EDOKCMAPAPM_OFFSET))(this, LHDHLAEPFBH, NHKAEEMNEAD);
	}

	::System::Boolean LGHBLIKMDFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GELPGJFLICF_LGHBLIKMDFB_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELPGJFLICF_NPOLNFDBOOD_OFFSET))(this);
	}

	::KANLNIKCCKJ* BHPMKNIJCAB()
	{
		return ((::KANLNIKCCKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GELPGJFLICF_BHPMKNIJCAB_OFFSET))(this);
	}

	::KANLNIKCCKJ* HIMIIPAALBM(::MoleMole::GalGame::GalArgueStageLocation LHDHLAEPFBH)
	{
		return ((::KANLNIKCCKJ*(*)(::PVOID, ::MoleMole::GalGame::GalArgueStageLocation))((::PBYTE)hIl2Cpp + GELPGJFLICF_HIMIIPAALBM_OFFSET))(this, LHDHLAEPFBH);
	}
};
