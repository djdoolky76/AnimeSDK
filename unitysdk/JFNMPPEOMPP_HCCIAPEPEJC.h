#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class NPCBBDGEGPM;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define JFNMPPEOMPP_HCCIAPEPEJC_EDLCGKHDKCC_OFFSET UNITYSDK_OFFSET(0x19451F90)
#define JFNMPPEOMPP_HCCIAPEPEJC__CTOR_OFFSET UNITYSDK_OFFSET(0x19451F80)

inline static constexpr unsigned int JFNMPPEOMPP_HCCIAPEPEJC_TypeDefinitionIndex = 77585;

class JFNMPPEOMPP_HCCIAPEPEJC : public ::System::Object
{
public:
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* FCCFGMANMKM; // 0x10
	::NPCBBDGEGPM* HDIJAHIHLLH; // 0x18
	::System::Func_1<::System::Boolean>* JKFPGOFECAM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNMPPEOMPP_HCCIAPEPEJC__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask EDLCGKHDKCC(::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + JFNMPPEOMPP_HCCIAPEPEJC_EDLCGKHDKCC_OFFSET))(this, AMIDHEAIANO);
	}
};
