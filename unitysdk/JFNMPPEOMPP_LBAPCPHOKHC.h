#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

#define JFNMPPEOMPP_LBAPCPHOKHC_INEIGODBHKA_OFFSET UNITYSDK_OFFSET(0x17B24290)
#define JFNMPPEOMPP_LBAPCPHOKHC__CTOR_OFFSET UNITYSDK_OFFSET(0x17B24280)

inline static constexpr unsigned int JFNMPPEOMPP_LBAPCPHOKHC_TypeDefinitionIndex = 77587;

class JFNMPPEOMPP_LBAPCPHOKHC : public ::System::Object
{
public:
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* BOIBONJOJKH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNMPPEOMPP_LBAPCPHOKHC__CTOR_OFFSET))(this);
	}

	::System::Void INEIGODBHKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNMPPEOMPP_LBAPCPHOKHC_INEIGODBHKA_OFFSET))(this);
	}
};
