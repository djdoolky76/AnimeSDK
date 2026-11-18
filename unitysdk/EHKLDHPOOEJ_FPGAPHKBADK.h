#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OGGDNMKMCCL;

#define EHKLDHPOOEJ_FPGAPHKBADK_IBMJICDJKOL_OFFSET UNITYSDK_OFFSET(0xF9C7310)
#define EHKLDHPOOEJ_FPGAPHKBADK__CTOR_OFFSET UNITYSDK_OFFSET(0xF9C7300)

inline static constexpr unsigned int EHKLDHPOOEJ_FPGAPHKBADK_TypeDefinitionIndex = 62617;

class EHKLDHPOOEJ_FPGAPHKBADK : public ::System::Object
{
public:
	::System::Int32 INPIMGKMMON; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKLDHPOOEJ_FPGAPHKBADK__CTOR_OFFSET))(this);
	}

	::System::Boolean IBMJICDJKOL(::OGGDNMKMCCL* MDLNMDJMMJP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OGGDNMKMCCL*))((::PBYTE)hIl2Cpp + EHKLDHPOOEJ_FPGAPHKBADK_IBMJICDJKOL_OFFSET))(this, MDLNMDJMMJP);
	}
};
