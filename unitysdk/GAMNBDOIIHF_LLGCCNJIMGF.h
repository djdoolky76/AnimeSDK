#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GAMNBDOIIHF_LLGCCNJIMGF_FDJBFLBFHMG_OFFSET UNITYSDK_OFFSET(0x116DB760)
#define GAMNBDOIIHF_LLGCCNJIMGF__CTOR_OFFSET UNITYSDK_OFFSET(0x116D9E20)

inline static constexpr unsigned int GAMNBDOIIHF_LLGCCNJIMGF_TypeDefinitionIndex = 87422;

class GAMNBDOIIHF_LLGCCNJIMGF : public ::System::Object
{
public:
	::System::Int32 NACGJJKHEJE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_LLGCCNJIMGF__CTOR_OFFSET))(this);
	}

	::System::Void FDJBFLBFHMG(::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_LLGCCNJIMGF_FDJBFLBFHMG_OFFSET))(this, EBFCACIEKBC);
	}
};
