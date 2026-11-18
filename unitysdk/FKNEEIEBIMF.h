#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageDecalData.h"
#include "unitysdk/MoleMole/SuperDebug_LogModule.h"
#include "unitysdk/NHPANPDOPKH.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class AEMCAOEICDG;
class BHCAIFIEJPJ;
class EHKKPCGAJHO;
class FGKEMGLFJEE;
namespace MoleMole::Battle { class BulletHoleConfigObject; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace System { class Random; }

#define FKNEEIEBIMF_AOEOHIJBJKG_OFFSET UNITYSDK_OFFSET(0x14ADAE60)
#define FKNEEIEBIMF_BKHGCDFPABA_OFFSET UNITYSDK_OFFSET(0x14ADB620)
#define FKNEEIEBIMF_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x14ADACA0)
#define FKNEEIEBIMF_IOHAHNNJCOJ_OFFSET UNITYSDK_OFFSET(0x14ADB060)
#define FKNEEIEBIMF_KEFNEFKKDDK_OFFSET UNITYSDK_OFFSET(0x14ADB260)
#define FKNEEIEBIMF_LANOPADOBKH_OFFSET UNITYSDK_OFFSET(0x14ADAFA0)
#define FKNEEIEBIMF_NJIOPMCBIOI_OFFSET UNITYSDK_OFFSET(0x14ADB340)
#define FKNEEIEBIMF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x14ADB2B0)
#define FKNEEIEBIMF_PBEGFPGJKNB_OFFSET UNITYSDK_OFFSET(0x14ADB3E0)
#define FKNEEIEBIMF__CCTOR_OFFSET UNITYSDK_OFFSET(0x14ADAE40)
#define FKNEEIEBIMF__CTOR_OFFSET UNITYSDK_OFFSET(0x14ADADD0)

inline static constexpr unsigned int FKNEEIEBIMF_TypeDefinitionIndex = 47142;

class FKNEEIEBIMF : public ::NHPANPDOPKH
{
public:
	static ::System::Random** StaticGet_PJNHHJDJDMI()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(FKNEEIEBIMF_TypeDefinitionIndex)->GetStaticField(0x4E450);
	}
	static ::MoleMole::SuperDebug_LogModule* StaticGet_ABKOANAKCFO()
	{
		return (::MoleMole::SuperDebug_LogModule*)Il2CppClass::FromTypeDefinitionIndex(FKNEEIEBIMF_TypeDefinitionIndex)->GetStaticField(0x126C0);
	}
	static ::System::Single* StaticGet_LCHCMPMBLIM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FKNEEIEBIMF_TypeDefinitionIndex)->GetStaticField(0x126C4);
	}
	static ::System::Single* StaticGet_GEGBFHOPEHI()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FKNEEIEBIMF_TypeDefinitionIndex)->GetStaticField(0x126C8);
	}
	::Il2CppArray<::UnityEngine::RaycastHit>* FCCIEACOABD; // 0x28
	::MoleMole::Battle::BulletHoleConfigObject* HBDIPMONDPM; // 0x30
	::MoleMole::Battle::Entity* NGODDCIOJDP; // 0x38
	::FGKEMGLFJEE* HIJMPLOIGCA; // 0x40
	::MoleMole::Config::DamageDecalData KGOFPBCAJJJ; // 0x48
	::System::UInt32 BKPAOPEBKOF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNEEIEBIMF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKNEEIEBIMF__CCTOR_OFFSET))();
	}

	::System::Void HEGPPHAGDCO(::BHCAIFIEJPJ* HBDIPMONDPM, ::MoleMole::Config::HitWallCameraShakeConfig* LEBHGKLBPMP)
	{
		return ((::System::Void(*)(::PVOID, ::BHCAIFIEJPJ*, ::MoleMole::Config::HitWallCameraShakeConfig*))((::PBYTE)hIl2Cpp + FKNEEIEBIMF_HEGPPHAGDCO_OFFSET))(this, HBDIPMONDPM, LEBHGKLBPMP);
	}

	::System::Void AOEOHIJBJKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNEEIEBIMF_AOEOHIJBJKG_OFFSET))(this);
	}

	::System::Void LANOPADOBKH(::AEMCAOEICDG* IPLJNKNDBFI, ::EHKKPCGAJHO* EDLBHCJCBIB)
	{
		return ((::System::Void(*)(::PVOID, ::AEMCAOEICDG*, ::EHKKPCGAJHO*))((::PBYTE)hIl2Cpp + FKNEEIEBIMF_LANOPADOBKH_OFFSET))(this, IPLJNKNDBFI, EDLBHCJCBIB);
	}

	::System::Void KEFNEFKKDDK(::MoleMole::Battle::Entity* HBLEFIAOEJN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FKNEEIEBIMF_KEFNEFKKDDK_OFFSET))(this, HBLEFIAOEJN);
	}

	::System::Void IOHAHNNJCOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNEEIEBIMF_IOHAHNNJCOJ_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNEEIEBIMF_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void NJIOPMCBIOI(::BHCAIFIEJPJ* MIALFKCCCPI, ::MoleMole::Config::HitWallCameraShakeConfig* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::BHCAIFIEJPJ*, ::MoleMole::Config::HitWallCameraShakeConfig*))((::PBYTE)hIl2Cpp + FKNEEIEBIMF_NJIOPMCBIOI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void PBEGFPGJKNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNEEIEBIMF_PBEGFPGJKNB_OFFSET))(this);
	}

	::System::Void BKHGCDFPABA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNEEIEBIMF_BKHGCDFPABA_OFFSET))(this);
	}
};
