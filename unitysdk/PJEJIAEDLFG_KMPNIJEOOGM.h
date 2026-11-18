#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MAFGFDMEHOG;

#define PJEJIAEDLFG_KMPNIJEOOGM_HLDJBEFIHFF_OFFSET UNITYSDK_OFFSET(0x14BA0BD0)
#define PJEJIAEDLFG_KMPNIJEOOGM__CTOR_OFFSET UNITYSDK_OFFSET(0x14BA0BC0)

inline static constexpr unsigned int PJEJIAEDLFG_KMPNIJEOOGM_TypeDefinitionIndex = 45429;

class PJEJIAEDLFG_KMPNIJEOOGM : public ::System::Object
{
public:
	::MAFGFDMEHOG* PIPFPIMACOI; // 0x10
	::System::Int32 GBOLCPONEAE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEJIAEDLFG_KMPNIJEOOGM__CTOR_OFFSET))(this);
	}

	::System::Boolean HLDJBEFIHFF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEJIAEDLFG_KMPNIJEOOGM_HLDJBEFIHFF_OFFSET))(this);
	}
};
