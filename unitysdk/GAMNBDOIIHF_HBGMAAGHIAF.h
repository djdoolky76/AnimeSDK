#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define GAMNBDOIIHF_HBGMAAGHIAF_EFMLMIFLCOI_OFFSET UNITYSDK_OFFSET(0x142C4800)
#define GAMNBDOIIHF_HBGMAAGHIAF__CTOR_OFFSET UNITYSDK_OFFSET(0x142C47F0)

inline static constexpr unsigned int GAMNBDOIIHF_HBGMAAGHIAF_TypeDefinitionIndex = 87426;

class GAMNBDOIIHF_HBGMAAGHIAF : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* KJEGEDODKCE; // 0x10
	::System::Int32 ABEFOPGDDBL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_HBGMAAGHIAF__CTOR_OFFSET))(this);
	}

	::System::Void EFMLMIFLCOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_HBGMAAGHIAF_EFMLMIFLCOI_OFFSET))(this);
	}
};
