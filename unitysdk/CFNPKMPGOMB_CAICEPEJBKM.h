#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CFNPKMPGOMB_CAICEPEJBKM_MPDBCKNCCJA_OFFSET UNITYSDK_OFFSET(0x18DCE5B0)
#define CFNPKMPGOMB_CAICEPEJBKM__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCE5A0)

inline static constexpr unsigned int CFNPKMPGOMB_CAICEPEJBKM_TypeDefinitionIndex = 44980;

class CFNPKMPGOMB_CAICEPEJBKM : public ::System::Object
{
public:
	::System::Action* MDIHHFLALLH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_CAICEPEJBKM__CTOR_OFFSET))(this);
	}

	::System::Void MPDBCKNCCJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_CAICEPEJBKM_MPDBCKNCCJA_OFFSET))(this);
	}
};
