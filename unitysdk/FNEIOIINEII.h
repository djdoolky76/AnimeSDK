#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GALJGJIGMEK.h"
#include "unitysdk/PAPJAEPEIKJ.h"
#include "unitysdk/Cinemachine/CameraState.h"

class BCMGBPKCEFK;
class DDDAHJHLPJM;
class ICEBMJDKHFK;
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }

#define FNEIOIINEII_AAMMFJBPPFF_OFFSET UNITYSDK_OFFSET(0xBB6BF00)
#define FNEIOIINEII_CHMAAPBIMCJ_OFFSET UNITYSDK_OFFSET(0xBB6C870)
#define FNEIOIINEII_CLPAJKOJNKO_OFFSET UNITYSDK_OFFSET(0xBB6BEC0)
#define FNEIOIINEII_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0xBB6C990)
#define FNEIOIINEII_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB6BE70)
#define FNEIOIINEII_DKBBJHFNPBK_OFFSET UNITYSDK_OFFSET(0xBB6C450)
#define FNEIOIINEII_EDGOCHCBGNG_OFFSET UNITYSDK_OFFSET(0xBB6BFD0)
#define FNEIOIINEII_IPGLFGNIJIE_OFFSET UNITYSDK_OFFSET(0xBB6BD80)
#define FNEIOIINEII_KCMMDKJHLIJ_OFFSET UNITYSDK_OFFSET(0xBB6C7E0)
#define FNEIOIINEII_KMKNLOGKJOF_OFFSET UNITYSDK_OFFSET(0xBB6BF70)
#define FNEIOIINEII_LMMEBAOCKBN_OFFSET UNITYSDK_OFFSET(0xBB6C390)
#define FNEIOIINEII_MODCHANABNO_OFFSET UNITYSDK_OFFSET(0xBB6C900)
#define FNEIOIINEII__CTOR_OFFSET UNITYSDK_OFFSET(0xBB6BCD0)

inline static constexpr unsigned int FNEIOIINEII_TypeDefinitionIndex = 89000;

class FNEIOIINEII : public ::PAPJAEPEIKJ
{
public:
	::ICEBMJDKHFK* MGMANFNDILG; // 0x20
	::BCMGBPKCEFK* AFCLHPBJOJP; // 0x28
	::BCMGBPKCEFK* BKPMNJPAOAM; // 0x30

	::System::Void _ctor(::DDDAHJHLPJM* ABIGMMNDAOF)
	{
		return ((::System::Void(*)(::PVOID, ::DDDAHJHLPJM*))((::PBYTE)hIl2Cpp + FNEIOIINEII__CTOR_OFFSET))(this, ABIGMMNDAOF);
	}

	::System::Void IPGLFGNIJIE(::MoleMole::CameraModuleAvatarDataConfigExt* OLMACFDNMEC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + FNEIOIINEII_IPGLFGNIJIE_OFFSET))(this, OLMACFDNMEC);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEIOIINEII_DISPOSE_OFFSET))(this);
	}

	::GALJGJIGMEK CLPAJKOJNKO()
	{
		return ((::GALJGJIGMEK(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEIOIINEII_CLPAJKOJNKO_OFFSET))(this);
	}

	::System::Boolean AAMMFJBPPFF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEIOIINEII_AAMMFJBPPFF_OFFSET))(this);
	}

	::System::Void KMKNLOGKJOF(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + FNEIOIINEII_KMKNLOGKJOF_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::System::Void EDGOCHCBGNG(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + FNEIOIINEII_EDGOCHCBGNG_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::System::Void DKBBJHFNPBK(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + FNEIOIINEII_DKBBJHFNPBK_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::GALJGJIGMEK KCMMDKJHLIJ()
	{
		return ((::GALJGJIGMEK(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEIOIINEII_KCMMDKJHLIJ_OFFSET))(this);
	}

	::System::Boolean CHMAAPBIMCJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEIOIINEII_CHMAAPBIMCJ_OFFSET))(this);
	}

	::System::Void MODCHANABNO(::MoleMole::CameraModuleAvatarDataConfigExt* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + FNEIOIINEII_MODCHANABNO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LMMEBAOCKBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEIOIINEII_LMMEBAOCKBN_OFFSET))(this);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEIOIINEII_CMFOIAAGPFL_OFFSET))(this);
	}
};
