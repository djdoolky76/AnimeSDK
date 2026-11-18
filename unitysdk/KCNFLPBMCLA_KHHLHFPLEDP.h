#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define KCNFLPBMCLA_KHHLHFPLEDP_FLGAFNFPHGF_OFFSET UNITYSDK_OFFSET(0x15152C60)
#define KCNFLPBMCLA_KHHLHFPLEDP__CTOR_OFFSET UNITYSDK_OFFSET(0x15152C50)

inline static constexpr unsigned int KCNFLPBMCLA_KHHLHFPLEDP_TypeDefinitionIndex = 49498;

class KCNFLPBMCLA_KHHLHFPLEDP : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNFLPBMCLA_KHHLHFPLEDP__CTOR_OFFSET))(this);
	}

	::System::Void FLGAFNFPHGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNFLPBMCLA_KHHLHFPLEDP_FLGAFNFPHGF_OFFSET))(this);
	}
};
