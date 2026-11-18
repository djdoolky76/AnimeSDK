#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIKGHHJKNCE;

#define FBAMLABJMKF_OKBMHFOHPFP_BPDOBJDPDOO_OFFSET UNITYSDK_OFFSET(0x15E40410)
#define FBAMLABJMKF_OKBMHFOHPFP__CTOR_OFFSET UNITYSDK_OFFSET(0x15E40400)

inline static constexpr unsigned int FBAMLABJMKF_OKBMHFOHPFP_TypeDefinitionIndex = 78136;

class FBAMLABJMKF_OKBMHFOHPFP : public ::System::Object
{
public:
	::System::Boolean JKBLDFBGBPK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_OKBMHFOHPFP__CTOR_OFFSET))(this);
	}

	::System::Boolean BPDOBJDPDOO(::AIKGHHJKNCE* JNDDJMAHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + FBAMLABJMKF_OKBMHFOHPFP_BPDOBJDPDOO_OFFSET))(this, JNDDJMAHNAI);
	}
};
