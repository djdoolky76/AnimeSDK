#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KMMOLFIBFPK;
namespace System { class Action; }

#define DPHPCHPDJPB_GNOBAFNMBLF_PHFIHIBGENH_OFFSET UNITYSDK_OFFSET(0x16BC69E0)
#define DPHPCHPDJPB_GNOBAFNMBLF__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC69D0)

inline static constexpr unsigned int DPHPCHPDJPB_GNOBAFNMBLF_TypeDefinitionIndex = 92831;

class DPHPCHPDJPB_GNOBAFNMBLF : public ::System::Object
{
public:
	::System::Action* GJBHEJGENMI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPCHPDJPB_GNOBAFNMBLF__CTOR_OFFSET))(this);
	}

	::System::Void PHFIHIBGENH(::KMMOLFIBFPK* IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::KMMOLFIBFPK*))((::PBYTE)hIl2Cpp + DPHPCHPDJPB_GNOBAFNMBLF_PHFIHIBGENH_OFFSET))(this, IMLLDOHDCNC);
	}
};
