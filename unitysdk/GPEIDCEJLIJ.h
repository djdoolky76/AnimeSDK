#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOONMNPCCNF.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OtherLightShadowResolution.h"

#define GPEIDCEJLIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15B34CD0)

inline static constexpr unsigned int GPEIDCEJLIJ_TypeDefinitionIndex = 83327;

class GPEIDCEJLIJ : public ::IOONMNPCCNF
{
public:
	::Il2CppArray<::System::Single>* FIHNPNFMIFH; // 0x18
	::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution GHMMIPBCDDL; // 0x20
	::System::Single JBKLNICLAGF; // 0x24
	::System::Int32 KHJMALLIEEP; // 0x28
	::System::Single HKJHJMNIJAM; // 0x2C
	::System::Int32 PJFCFLCPLJH; // 0x30
	::System::Single IOECKMBOABB; // 0x34
	::System::Single MIHENKDBFBA; // 0x38
	::System::Single KFHEHJJPPDN; // 0x3C
	::System::Single FIEJHMLFCPB; // 0x40
	::System::Boolean IAGNHPIPKKL; // 0x44
	::System::Boolean IAAKLCDDOHF; // 0x45
	::System::Boolean FMCBADIBANJ; // 0x46
	::System::Byte _padding0[0x1];
	::System::Single KPAHLLMOPFF; // 0x48
	::System::Single FNFPIFIPJEJ; // 0x4C
	::System::Single BIHLGENDFLO; // 0x50
	::System::Single IHLKFJPOBHG; // 0x54
	::System::Int32 OEKHFMHGINM; // 0x58
	::System::Single DAOANNEPEID; // 0x5C
	::System::Single NGMMCHKFNAL; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEIDCEJLIJ__CTOR_OFFSET))(this);
	}
};
