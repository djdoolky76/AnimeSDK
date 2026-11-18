#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraShotData_ShotAttachOffsetData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class NNEBEOAFJLE;

#define IACDPHEDMFD_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x725AF0)
#define IACDPHEDMFD_IJENHDGMFGO_OFFSET UNITYSDK_OFFSET(0x141AC5A0)
#define IACDPHEDMFD_MIEDOHPAAPF_OFFSET UNITYSDK_OFFSET(0x141AC860)
#define IACDPHEDMFD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x725A40)
#define IACDPHEDMFD_PLEPKHMBJEJ_OFFSET UNITYSDK_OFFSET(0x725AC0)

inline static constexpr unsigned int IACDPHEDMFD_TypeDefinitionIndex = 41572;

struct alignas(8) IACDPHEDMFD
{
	::NNEBEOAFJLE* NGGFFANKIKE; // 0x10
	::MoleMole::CameraShotData_ShotAttachOffsetData PAJMMFBHCAC; // 0x18
	::MoleMole::CameraShotData_ShotAttachOffsetData EIHMKMILOBL; // 0x38
	::UnityEngine::Vector3 IGHFNLFCADE; // 0x58
	::UnityEngine::Vector3 AGDNAOABNHH; // 0x64

	static ::System::Single IJENHDGMFGO(::GEIHCPAOKKK* PEMGGHOLGLO, ::MoleMole::CameraShotData_ShotAttachOffsetData NDDPKKHHAAB, ::System::Single BJCACIELFBF, ::System::Int32 PIPAEJHCNDJ)
	{
		return ((::System::Single(*)(::GEIHCPAOKKK*, ::MoleMole::CameraShotData_ShotAttachOffsetData, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + IACDPHEDMFD_IJENHDGMFGO_OFFSET))(PEMGGHOLGLO, NDDPKKHHAAB, BJCACIELFBF, PIPAEJHCNDJ);
	}

	static ::UnityEngine::Vector3 MIEDOHPAAPF(::UnityEngine::Vector3 ONDCOIKBNIO, ::GEIHCPAOKKK* LHPFMGBDFPN, ::MoleMole::CameraShotData_ShotAttachOffsetData NAGBAAPBMID, ::MoleMole::CameraShotData_ShotAttachOffsetData HDNKDILGANP, ::UnityEngine::Vector3 BBEKEGKLGCP)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::GEIHCPAOKKK*, ::MoleMole::CameraShotData_ShotAttachOffsetData, ::MoleMole::CameraShotData_ShotAttachOffsetData, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IACDPHEDMFD_MIEDOHPAAPF_OFFSET))(ONDCOIKBNIO, LHPFMGBDFPN, NAGBAAPBMID, HDNKDILGANP, BBEKEGKLGCP);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IACDPHEDMFD_NPOLNFDBOOD_OFFSET))(this);
	}

	::UnityEngine::Vector3 PLEPKHMBJEJ(::UnityEngine::Vector3 ONDCOIKBNIO)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IACDPHEDMFD_PLEPKHMBJEJ_OFFSET))(this, ONDCOIKBNIO);
	}

	::System::Void EDEFLFIKNFK(::NNEBEOAFJLE* GBELIHABEDH, ::UnityEngine::Vector3 ONDCOIKBNIO, ::MoleMole::CameraShotData_ShotAttachOffsetData NAGBAAPBMID, ::MoleMole::CameraShotData_ShotAttachOffsetData HDNKDILGANP, ::UnityEngine::Vector3 BBEKEGKLGCP)
	{
		return ((::System::Void(*)(::PVOID, ::NNEBEOAFJLE*, ::UnityEngine::Vector3, ::MoleMole::CameraShotData_ShotAttachOffsetData, ::MoleMole::CameraShotData_ShotAttachOffsetData, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IACDPHEDMFD_EDEFLFIKNFK_OFFSET))(this, GBELIHABEDH, ONDCOIKBNIO, NAGBAAPBMID, HDNKDILGANP, BBEKEGKLGCP);
	}
};
