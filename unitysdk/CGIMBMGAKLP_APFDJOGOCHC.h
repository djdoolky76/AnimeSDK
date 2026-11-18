#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CGIMBMGAKLP_APFDJOGOCHC_OCPECCHLCFL_OFFSET UNITYSDK_OFFSET(0x1694F440)
#define CGIMBMGAKLP_APFDJOGOCHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1694F430)

inline static constexpr unsigned int CGIMBMGAKLP_APFDJOGOCHC_TypeDefinitionIndex = 75063;

class CGIMBMGAKLP_APFDJOGOCHC : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIMBMGAKLP_APFDJOGOCHC__CTOR_OFFSET))(this);
	}

	::System::Void OCPECCHLCFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIMBMGAKLP_APFDJOGOCHC_OCPECCHLCFL_OFFSET))(this);
	}
};
