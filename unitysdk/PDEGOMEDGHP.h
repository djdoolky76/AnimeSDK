#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIFNAMIJCHM.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/PCODMIJEJEP.h"

class CIJKMEDBHMM;
class MainCityObjectState_ScriptConfig;
class ModifyMaterialProperty;
namespace MoleMole { class SceneObjectStateWidget; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal::Internal { class SceneObjectProxy; }

#define PDEGOMEDGHP_DPCEGJPEEHA_OFFSET UNITYSDK_OFFSET(0x14B941A0)
#define PDEGOMEDGHP_FJLKEACBKKF_OFFSET UNITYSDK_OFFSET(0x14B94070)
#define PDEGOMEDGHP_HEDJIGHGGAH_OFFSET UNITYSDK_OFFSET(0x14B93FD0)
#define PDEGOMEDGHP_HLPAMIGBBCL_OFFSET UNITYSDK_OFFSET(0x14B94100)
#define PDEGOMEDGHP_NAIFLDEIPIN_OFFSET UNITYSDK_OFFSET(0x14B94110)
#define PDEGOMEDGHP_NBLMAEKANHF_OFFSET UNITYSDK_OFFSET(0x14B927C0)
#define PDEGOMEDGHP_OABMBBANMCM_OFFSET UNITYSDK_OFFSET(0x14B92760)
#define PDEGOMEDGHP_OIBFEKPCDAL_OFFSET UNITYSDK_OFFSET(0x14B93EE0)
#define PDEGOMEDGHP_PCHHCBFOKFN_OFFSET UNITYSDK_OFFSET(0x14B93F40)
#define PDEGOMEDGHP__CTOR_OFFSET UNITYSDK_OFFSET(0x14B92660)

inline static constexpr unsigned int PDEGOMEDGHP_TypeDefinitionIndex = 64774;

class PDEGOMEDGHP : public ::DIFNAMIJCHM
{
public:
	::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* BMLJGNPECJF; // 0x38
	::ModifyMaterialProperty* FEJAFPDBPDH; // 0x40
	::MainCityObjectState_ScriptConfig* _NDMLBELHDPH_k__BackingField; // 0x48
	::Il2CppArray<::UnityEngine::Material*>* KCOIBHLNIBP; // 0x50
	::Foundation::Coroutine::CoroutineHandle HDIEABKPPNF; // 0x58

	::System::Void _ctor(::CIJKMEDBHMM* LJBPECKCCEA, ::MoleMole::SceneObjectStateWidget* GADOMGLJNNJ, ::System::Action_1<::PCODMIJEJEP>* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::CIJKMEDBHMM*, ::MoleMole::SceneObjectStateWidget*, ::System::Action_1<::PCODMIJEJEP>*))((::PBYTE)hIl2Cpp + PDEGOMEDGHP__CTOR_OFFSET))(this, LJBPECKCCEA, GADOMGLJNNJ, IGAAKDOIPNN);
	}

	::System::Void OABMBBANMCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEGOMEDGHP_OABMBBANMCM_OFFSET))(this);
	}

	::System::Void OIBFEKPCDAL(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PDEGOMEDGHP_OIBFEKPCDAL_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void PCHHCBFOKFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEGOMEDGHP_PCHHCBFOKFN_OFFSET))(this);
	}

	::System::Void HEDJIGHGGAH(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PDEGOMEDGHP_HEDJIGHGGAH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void FJLKEACBKKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEGOMEDGHP_FJLKEACBKKF_OFFSET))(this);
	}

	::System::Void NBLMAEKANHF(::ModifyMaterialProperty* GDAHDBHIKLP, ::System::Boolean BAFHJGPKCLJ)
	{
		return ((::System::Void(*)(::PVOID, ::ModifyMaterialProperty*, ::System::Boolean))((::PBYTE)hIl2Cpp + PDEGOMEDGHP_NBLMAEKANHF_OFFSET))(this, GDAHDBHIKLP, BAFHJGPKCLJ);
	}

	::MainCityObjectState_ScriptConfig* HLPAMIGBBCL()
	{
		return ((::MainCityObjectState_ScriptConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEGOMEDGHP_HLPAMIGBBCL_OFFSET))(this);
	}

	::System::Void NAIFLDEIPIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEGOMEDGHP_NAIFLDEIPIN_OFFSET))(this);
	}

	::System::Void DPCEGJPEEHA(::MainCityObjectState_ScriptConfig* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MainCityObjectState_ScriptConfig*))((::PBYTE)hIl2Cpp + PDEGOMEDGHP_DPCEGJPEEHA_OFFSET))(this, EGEGIMGMJHN);
	}
};
