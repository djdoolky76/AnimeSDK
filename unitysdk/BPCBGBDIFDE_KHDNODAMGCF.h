#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BPCBGBDIFDE;
namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole::Cameras { class CameraTrackBlending; }

#define BPCBGBDIFDE_KHDNODAMGCF_AJEHPHFJDFE_OFFSET UNITYSDK_OFFSET(0x16A05570)
#define BPCBGBDIFDE_KHDNODAMGCF_EGFNKNLNMEL_OFFSET UNITYSDK_OFFSET(0x16A05580)
#define BPCBGBDIFDE_KHDNODAMGCF_JEACOBOFOML_OFFSET UNITYSDK_OFFSET(0x16A053A0)
#define BPCBGBDIFDE_KHDNODAMGCF__CTOR_OFFSET UNITYSDK_OFFSET(0x16A05390)

inline static constexpr unsigned int BPCBGBDIFDE_KHDNODAMGCF_TypeDefinitionIndex = 78648;

class BPCBGBDIFDE_KHDNODAMGCF : public ::System::Object
{
public:
	::MoleMole::MonoGamepadVirtualCursor* MLBOEALKNGH; // 0x10
	::BPCBGBDIFDE* KLHPEBKNIFB; // 0x18
	::MoleMole::Cameras::CameraTrackBlending* MBNOFPBEFAO; // 0x20
	::UnityEngine::Vector3 HGKNEPKMMEG; // 0x28
	::System::Boolean KAFIFBIGEKH; // 0x34
	::System::Byte _padding0[0x3];
	::System::Single IMLLDOHDCNC; // 0x38
	::UnityEngine::Vector3 LFLJMBPFLDI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_KHDNODAMGCF__CTOR_OFFSET))(this);
	}

	::System::Void JEACOBOFOML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_KHDNODAMGCF_JEACOBOFOML_OFFSET))(this);
	}

	::System::Single AJEHPHFJDFE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_KHDNODAMGCF_AJEHPHFJDFE_OFFSET))(this);
	}

	::System::Void EGFNKNLNMEL(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_KHDNODAMGCF_EGFNKNLNMEL_OFFSET))(this, EGEGIMGMJHN);
	}
};
