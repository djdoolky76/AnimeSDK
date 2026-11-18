#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEIAAPADPPO_NKLMHLDOIJL.h"
#include "unitysdk/Foundation/ReservedObjectPoolDataHandle.h"
#include "unitysdk/MoleMole/Config/EffectType.h"
#include "unitysdk/MoleMole/Config/TargetCamera.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FBAMLABJMKF;
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CEIAAPADPPO_AMIBILBCOAM_OFFSET UNITYSDK_OFFSET(0x18DCA280)
#define CEIAAPADPPO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x18DCABF0)
#define CEIAAPADPPO_BLHDIEEAJHH_OFFSET UNITYSDK_OFFSET(0x18DCA220)
#define CEIAAPADPPO_CMNLBKCIBDI_OFFSET UNITYSDK_OFFSET(0x18DCA510)
#define CEIAAPADPPO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18DC9BE0)
#define CEIAAPADPPO_FAOHKPBBHEB_OFFSET UNITYSDK_OFFSET(0x18DCAE10)
#define CEIAAPADPPO_GLAHFBAKMPE_OFFSET UNITYSDK_OFFSET(0x18DCAD30)
#define CEIAAPADPPO_HDDHCIOMPCJ_OFFSET UNITYSDK_OFFSET(0x18DCA0D0)
#define CEIAAPADPPO_IKNDBGKKPNC_OFFSET UNITYSDK_OFFSET(0x18DCAC40)
#define CEIAAPADPPO_JPHDGIHABAJ_OFFSET UNITYSDK_OFFSET(0x18DCAE90)
#define CEIAAPADPPO_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x18DCA440)
#define CEIAAPADPPO_NHNOOOCAFON_OFFSET UNITYSDK_OFFSET(0x18DCA040)
#define CEIAAPADPPO_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x18DCAEE0)
#define CEIAAPADPPO_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x18DCA0E0)
#define CEIAAPADPPO__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCA030)

inline static constexpr unsigned int CEIAAPADPPO_TypeDefinitionIndex = 57584;

class CEIAAPADPPO : public ::System::Object
{
public:
	// static const ::CEIAAPADPPO_NKLMHLDOIJL BPDGFBCOCEA = 0xE; // 0x0
	::Foundation::ReservedObjectPoolDataHandle MLAEGIFIDGC; // 0x10
	::UnityEngine::GameObject* JNDAPHANKEL; // 0x20
	::MoleMole::EffectSimulate::NapEffectSimulatorMgr* LLMMPGEGNLB; // 0x28
	::System::String* DCIPNHGBKEF; // 0x30
	::FBAMLABJMKF* CEMNINMOGDJ; // 0x38
	::System::Action_1<::CEIAAPADPPO*>* LDOJHJJMHEM; // 0x40
	::System::UInt32 MGMDJCCEAIB; // 0x48
	::System::Single IEOFKJHAFLE; // 0x4C
	::MoleMole::Config::TargetCamera DGGNKBKBOOP; // 0x50
	::System::Nullable_1<::System::Single> HAJACAFCHIM; // 0x54
	::CEIAAPADPPO_NKLMHLDOIJL BOHBDHAPLDN; // 0x5C
	::System::Boolean ALAJLNFBBCL; // 0x60
	::System::Boolean LMHAJHPJOJG; // 0x61

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIAAPADPPO__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIAAPADPPO_DISPOSE_OFFSET))(this);
	}

	::System::Void NHNOOOCAFON(::UnityEngine::Vector3 GADABMPMNEM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CEIAAPADPPO_NHNOOOCAFON_OFFSET))(this, GADABMPMNEM);
	}

	::System::Boolean HDDHCIOMPCJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIAAPADPPO_HDDHCIOMPCJ_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CEIAAPADPPO_PLPONJAKNEB_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Void LCJEELHBNHG(::System::Boolean KOPBDLBEPPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CEIAAPADPPO_LCJEELHBNHG_OFFSET))(this, KOPBDLBEPPA);
	}

	::System::Void CMNLBKCIBDI(::MoleMole::Config::EffectType NCBCKICGBHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectType))((::PBYTE)hIl2Cpp + CEIAAPADPPO_CMNLBKCIBDI_OFFSET))(this, NCBCKICGBHN);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIAAPADPPO_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void IKNDBGKKPNC(::MoleMole::Config::TargetCamera GCCKONMPPJL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TargetCamera))((::PBYTE)hIl2Cpp + CEIAAPADPPO_IKNDBGKKPNC_OFFSET))(this, GCCKONMPPJL);
	}

	::System::Void GLAHFBAKMPE(::Foundation::Unreal::FTransform3D HHMGKPIHDPJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FTransform3D))((::PBYTE)hIl2Cpp + CEIAAPADPPO_GLAHFBAKMPE_OFFSET))(this, HHMGKPIHDPJ);
	}

	::System::Void FAOHKPBBHEB(::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CEIAAPADPPO_FAOHKPBBHEB_OFFSET))(this, JNLBPMKIFNK);
	}

	::System::Void JPHDGIHABAJ(::System::Nullable_1<::System::Single> JOFGIANGHMK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CEIAAPADPPO_JPHDGIHABAJ_OFFSET))(this, JOFGIANGHMK);
	}

	::System::Void PGHAJOMNDDJ(::System::Boolean JPIPHCNAEOC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CEIAAPADPPO_PGHAJOMNDDJ_OFFSET))(this, JPIPHCNAEOC);
	}

	::System::Boolean BLHDIEEAJHH(::CEIAAPADPPO_NKLMHLDOIJL KILPCOMOCMD, ::CEIAAPADPPO_NKLMHLDOIJL BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CEIAAPADPPO_NKLMHLDOIJL, ::CEIAAPADPPO_NKLMHLDOIJL))((::PBYTE)hIl2Cpp + CEIAAPADPPO_BLHDIEEAJHH_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
	}

	::System::Void AMIBILBCOAM(::System::Boolean KOPBDLBEPPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CEIAAPADPPO_AMIBILBCOAM_OFFSET))(this, KOPBDLBEPPA);
	}
};
