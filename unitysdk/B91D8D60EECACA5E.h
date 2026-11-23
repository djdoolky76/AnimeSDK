#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class F168D92E3FDDB98E;

#define B91D8D60EECACA5E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B91D8D60EECACA5E_TypeDefinitionIndex = 9248;

class B91D8D60EECACA5E : public ::E379DE61A548837D
{
public:
	::System::Int32 FBAFA13454D09FDC; // 0x38
	::System::UInt32 BC35389832619DBA; // 0x3C
	::F168D92E3FDDB98E* A8AEDAC112726626; // 0x40
	::System::Boolean E1D9234507843896; // 0x48
	::System::Boolean AC4B79B89FBAE572; // 0x49

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B91D8D60EECACA5E__CTOR_OFFSET))(this);
	}
};
