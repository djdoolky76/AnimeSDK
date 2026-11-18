#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGGDMDGPHJH.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class AnimationCurve; }

#define OCLPKBONCJJ_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x359320)
#define OCLPKBONCJJ_EFEHAPENBID_OFFSET UNITYSDK_OFFSET(0x3A45D0)
#define OCLPKBONCJJ_FMGBMMNEMDF_OFFSET UNITYSDK_OFFSET(0x3CED50)
#define OCLPKBONCJJ_JDMFNKLAAEG_OFFSET UNITYSDK_OFFSET(0x363D60)
#define OCLPKBONCJJ_JFCNPCBGGNE_OFFSET UNITYSDK_OFFSET(0x379C90)
#define OCLPKBONCJJ_PDAADHDFGKP_OFFSET UNITYSDK_OFFSET(0x409330)
#define OCLPKBONCJJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F5B040)
#define OCLPKBONCJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x777300)

inline static constexpr unsigned int OCLPKBONCJJ_TypeDefinitionIndex = 76339;

struct alignas(8) OCLPKBONCJJ
{
	static ::UnityEngine::AnimationCurve** StaticGet_OCDHDOPPGLE()
	{
		return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(OCLPKBONCJJ_TypeDefinitionIndex)->GetStaticField(0x3F850);
	}
	static ::System::Func_1<::System::Single>** StaticGet_HIOJLCMKJAA()
	{
		return (::System::Func_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(OCLPKBONCJJ_TypeDefinitionIndex)->GetStaticField(0x3F858);
	}
	::System::Int32 _HBLEIHCPMMP_k__BackingField; // 0x10
	::System::Single _KHJCCEKKPKE_k__BackingField; // 0x14
	::PipelineCamera::WorldBasicCameraDataDeltaFlag _HHLLLIBIFCJ_k__BackingField; // 0x18
	::System::Byte _padding0[0x4];
	::UnityEngine::AnimationCurve* _JFEIAABPHJE_k__BackingField; // 0x20
	::System::Func_1<::System::Single>* _FJEGOPEPJMJ_k__BackingField; // 0x28

	::System::Void _ctor(::GGGDMDGPHJH DKOFFFNEFJC, ::System::Single MDPPNMIPDMP, ::System::Func_1<::System::Single>* CAOPDAMCNCN, ::UnityEngine::AnimationCurve* NMHKNGBLFKB, ::PipelineCamera::WorldBasicCameraDataDeltaFlag HJNNKIJAILO)
	{
		return ((::System::Void(*)(::PVOID, ::GGGDMDGPHJH, ::System::Single, ::System::Func_1<::System::Single>*, ::UnityEngine::AnimationCurve*, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + OCLPKBONCJJ__CTOR_OFFSET))(this, DKOFFFNEFJC, MDPPNMIPDMP, CAOPDAMCNCN, NMHKNGBLFKB, HJNNKIJAILO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCLPKBONCJJ__CCTOR_OFFSET))();
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLPKBONCJJ_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Single PDAADHDFGKP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLPKBONCJJ_PDAADHDFGKP_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* FMGBMMNEMDF()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLPKBONCJJ_FMGBMMNEMDF_OFFSET))(this);
	}

	::System::Void EFEHAPENBID(::PipelineCamera::WorldBasicCameraDataDeltaFlag EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + OCLPKBONCJJ_EFEHAPENBID_OFFSET))(this, EGEGIMGMJHN);
	}

	::PipelineCamera::WorldBasicCameraDataDeltaFlag JDMFNKLAAEG()
	{
		return ((::PipelineCamera::WorldBasicCameraDataDeltaFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLPKBONCJJ_JDMFNKLAAEG_OFFSET))(this);
	}

	::System::Func_1<::System::Single>* JFCNPCBGGNE()
	{
		return ((::System::Func_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLPKBONCJJ_JFCNPCBGGNE_OFFSET))(this);
	}
};
