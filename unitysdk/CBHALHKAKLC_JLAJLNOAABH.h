#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class CBDDODKFCIJ;
class CBHALHKAKLC;
class CBHALHKAKLC_OMCMPLFMCAM;
class EDBDJENIDEO;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CBHALHKAKLC_JLAJLNOAABH_IINFCACNMGK_OFFSET UNITYSDK_OFFSET(0x145A7FB0)
#define CBHALHKAKLC_JLAJLNOAABH_MOEFIEFGFFI_OFFSET UNITYSDK_OFFSET(0x145A7F70)
#define CBHALHKAKLC_JLAJLNOAABH__CTOR_OFFSET UNITYSDK_OFFSET(0x145A7F60)

inline static constexpr unsigned int CBHALHKAKLC_JLAJLNOAABH_TypeDefinitionIndex = 55900;

class CBHALHKAKLC_JLAJLNOAABH : public ::System::Object
{
public:
	::System::Action* KPFKDDMENIP; // 0x10
	::CBHALHKAKLC_OMCMPLFMCAM* GFMKLBEBHCP; // 0x18
	::EDBDJENIDEO* DDKICDNCJCF; // 0x20
	::CBDDODKFCIJ* EGGOCICCFJC; // 0x28
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x30
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* DDDFOPALHFH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_JLAJLNOAABH__CTOR_OFFSET))(this);
	}

	::System::Void MOEFIEFGFFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_JLAJLNOAABH_MOEFIEFGFFI_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* IINFCACNMGK(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CBHALHKAKLC_JLAJLNOAABH_IINFCACNMGK_OFFSET))(this, OMMEALOOOOD);
	}
};
