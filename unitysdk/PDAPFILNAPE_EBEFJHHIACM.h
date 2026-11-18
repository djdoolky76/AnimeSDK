#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PDAPFILNAPE_EBEFJHHIACM_LJHDGNAEDIC_OFFSET UNITYSDK_OFFSET(0x1195D330)
#define PDAPFILNAPE_EBEFJHHIACM__CTOR_OFFSET UNITYSDK_OFFSET(0x1195D320)

inline static constexpr unsigned int PDAPFILNAPE_EBEFJHHIACM_TypeDefinitionIndex = 75365;

class PDAPFILNAPE_EBEFJHHIACM : public ::System::Object
{
public:
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* FCCFGMANMKM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAPFILNAPE_EBEFJHHIACM__CTOR_OFFSET))(this);
	}

	::System::Boolean LJHDGNAEDIC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAPFILNAPE_EBEFJHHIACM_LJHDGNAEDIC_OFFSET))(this);
	}
};
