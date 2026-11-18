#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MHFCMIPEMPK_ILCAGNHDABP_MJMKFFANPBL_OFFSET UNITYSDK_OFFSET(0x1853D370)
#define MHFCMIPEMPK_ILCAGNHDABP__CTOR_OFFSET UNITYSDK_OFFSET(0x1853D360)

inline static constexpr unsigned int MHFCMIPEMPK_ILCAGNHDABP_TypeDefinitionIndex = 90368;

class MHFCMIPEMPK_ILCAGNHDABP : public ::System::Object
{
public:
	::System::Action* LOJFLJJAKFJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHFCMIPEMPK_ILCAGNHDABP__CTOR_OFFSET))(this);
	}

	::System::Void MJMKFFANPBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHFCMIPEMPK_ILCAGNHDABP_MJMKFFANPBL_OFFSET))(this);
	}
};
