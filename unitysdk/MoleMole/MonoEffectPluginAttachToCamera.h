#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginAttachToCamera_AspectOffset.h"
#include "unitysdk/MoleMole/MonoEffectPluginAttachToCamera_FJEONJBIOAB.h"
#include "unitysdk/MoleMole/MonoEffectPluginAttachToCamera_FovOffset.h"
#include "unitysdk/MoleMole/MonoEffectPluginAttachToCamera_V3Curve.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_BLIBHKOHFAO_OFFSET UNITYSDK_OFFSET(0x12B59560)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_CBLPICBDCEE_OFFSET UNITYSDK_OFFSET(0x12B58850)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_DHKEJBEMFMP_OFFSET UNITYSDK_OFFSET(0x12B59AA0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_GETADAPTASPECTOFFSET_OFFSET UNITYSDK_OFFSET(0x12B58590)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_GPBDLOFAHDE_OFFSET UNITYSDK_OFFSET(0x12B59980)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_HENPHINNCGG_OFFSET UNITYSDK_OFFSET(0x12B59E40)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_HEOCKGCDOCM_OFFSET UNITYSDK_OFFSET(0x12B593F0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_HHLBCDMFFEG_OFFSET UNITYSDK_OFFSET(0x12B595D0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_IBDFFFLDKDL_OFFSET UNITYSDK_OFFSET(0x12B598C0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_IBFHAFJPODF_OFFSET UNITYSDK_OFFSET(0x12B59DE0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_NKCHODBECHA_OFFSET UNITYSDK_OFFSET(0x12B59080)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_PAFBLKOHIDA_OFFSET UNITYSDK_OFFSET(0x12B59A10)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_PIFHOHAKBMC_OFFSET UNITYSDK_OFFSET(0x12B59920)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B59550)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x12B59500)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginAttachToCamera_TypeDefinitionIndex = 60948;

	class MonoEffectPluginAttachToCamera : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		static ::System::Single* StaticGet_HKACCIPJAKB()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAttachToCamera_TypeDefinitionIndex)->GetStaticField(0x122C0);
		}
		// static const ::System::String* BHIJPFPBMIN; // 0x0
		// static const ::System::String* BFOKLIIIECF; // 0x0
		// static const ::System::String* FPACMHFCMEA; // 0x0
		// static const ::System::String* DIFAAKPDANH; // 0x0
		::System::String* transformRootName; // 0x18
		::MoleMole::MonoEffectPluginAttachToCamera_FJEONJBIOAB attachStrategy; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* AspectOffsets; // 0x28
		::UnityEngine::Vector3 attachOffset; // 0x30
		::UnityEngine::Vector3 attachScale; // 0x3C
		::UnityEngine::Vector3 attachRotation; // 0x48
		::MoleMole::MonoEffectPluginAttachToCamera_FovOffset minFovAttachOffset; // 0x54
		::MoleMole::MonoEffectPluginAttachToCamera_FovOffset maxFovAttachOffset; // 0x64
		::System::Boolean isOpenAddFovScale; // 0x74
		::System::Boolean isFovScale; // 0x75
		::System::Boolean isUseGlobalConfig; // 0x76
		::System::Byte _padding1[0x1];
		::MoleMole::MonoEffectPluginAttachToCamera_AspectOffset minRatioAttachOffset; // 0x78
		::MoleMole::MonoEffectPluginAttachToCamera_AspectOffset midRatioAttachOffset; // 0xB4
		::MoleMole::MonoEffectPluginAttachToCamera_AspectOffset maxRatioAttachOffset; // 0xF0
		::System::Boolean OpenAspectCurve; // 0x12C
		::System::Boolean OpenMidAspectConfig; // 0x12D
		::System::Byte _padding2[0x2];
		::MoleMole::MonoEffectPluginAttachToCamera_V3Curve minMaxRatioCurve1; // 0x130
		::MoleMole::MonoEffectPluginAttachToCamera_V3Curve minMaxRatioCurve2; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 GetAdaptAspectOffset(::System::Single KHPPKNBOGIB, ::System::Single ECMOEENIHME)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_GETADAPTASPECTOFFSET_OFFSET))(this, KHPPKNBOGIB, ECMOEENIHME);
		}

		::System::Void BLIBHKOHFAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_BLIBHKOHFAO_OFFSET))(this);
		}

		::UnityEngine::Vector3 CBLPICBDCEE(::System::Single KHPPKNBOGIB, ::System::Single IEMAHGKKOCC)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_CBLPICBDCEE_OFFSET))(this, KHPPKNBOGIB, IEMAHGKKOCC);
		}

		::System::Boolean IBDFFFLDKDL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_IBDFFFLDKDL_OFFSET))(this);
		}

		::System::Boolean PIFHOHAKBMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_PIFHOHAKBMC_OFFSET))(this);
		}

		::System::Boolean GPBDLOFAHDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_GPBDLOFAHDE_OFFSET))(this);
		}

		::System::Boolean PAFBLKOHIDA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_PAFBLKOHIDA_OFFSET))(this);
		}

		::System::Void DHKEJBEMFMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_DHKEJBEMFMP_OFFSET))(this);
		}

		::System::Boolean IBFHAFJPODF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_IBFHAFJPODF_OFFSET))(this);
		}

		::System::Boolean NKCHODBECHA(::System::Single KHPPKNBOGIB, ::MoleMole::MonoEffectPluginAttachToCamera_FovOffset& OIOONBIOPFE, ::MoleMole::MonoEffectPluginAttachToCamera_FovOffset& KHNALLBHNOO)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::MoleMole::MonoEffectPluginAttachToCamera_FovOffset&, ::MoleMole::MonoEffectPluginAttachToCamera_FovOffset&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_NKCHODBECHA_OFFSET))(this, KHPPKNBOGIB, OIOONBIOPFE, KHNALLBHNOO);
		}

		::System::Boolean HHLBCDMFFEG(::System::Single KHPPKNBOGIB, ::UnityEngine::Vector3& BOGPAHGJOJK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_HHLBCDMFFEG_OFFSET))(this, KHPPKNBOGIB, BOGPAHGJOJK);
		}

		::System::Boolean HENPHINNCGG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_HENPHINNCGG_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 HEOCKGCDOCM(::System::Single IEMAHGKKOCC, ::MoleMole::MonoEffectPluginAttachToCamera_FovOffset OLNDGBHFONK, ::MoleMole::MonoEffectPluginAttachToCamera_FovOffset KMKPEGHOIMD)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::MoleMole::MonoEffectPluginAttachToCamera_FovOffset, ::MoleMole::MonoEffectPluginAttachToCamera_FovOffset))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_HEOCKGCDOCM_OFFSET))(IEMAHGKKOCC, OLNDGBHFONK, KMKPEGHOIMD);
		}
	};
}
