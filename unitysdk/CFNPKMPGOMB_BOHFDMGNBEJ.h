#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CFNPKMPGOMB_BOHFDMGNBEJ_KHNPKFFNOMJ_OFFSET UNITYSDK_OFFSET(0x1153D670)
#define CFNPKMPGOMB_BOHFDMGNBEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1153D660)

inline static constexpr unsigned int CFNPKMPGOMB_BOHFDMGNBEJ_TypeDefinitionIndex = 44975;

class CFNPKMPGOMB_BOHFDMGNBEJ : public ::System::Object
{
public:
	::System::Action* NGFDBMGHFCJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_BOHFDMGNBEJ__CTOR_OFFSET))(this);
	}

	::System::Void KHNPKFFNOMJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_BOHFDMGNBEJ_KHNPKFFNOMJ_OFFSET))(this);
	}
};
