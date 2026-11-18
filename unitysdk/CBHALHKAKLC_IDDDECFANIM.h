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

#define CBHALHKAKLC_IDDDECFANIM_IBFPFGIMBCA_OFFSET UNITYSDK_OFFSET(0x1399E080)
#define CBHALHKAKLC_IDDDECFANIM_MOEFIEFGFFI_OFFSET UNITYSDK_OFFSET(0x1399E0C0)
#define CBHALHKAKLC_IDDDECFANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1399E070)

inline static constexpr unsigned int CBHALHKAKLC_IDDDECFANIM_TypeDefinitionIndex = 55894;

class CBHALHKAKLC_IDDDECFANIM : public ::System::Object
{
public:
	::CBHALHKAKLC_OMCMPLFMCAM* GFMKLBEBHCP; // 0x10
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x18
	::CBDDODKFCIJ* EGGOCICCFJC; // 0x20
	::EDBDJENIDEO* DDKICDNCJCF; // 0x28
	::System::Action* KPFKDDMENIP; // 0x30
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* DDDFOPALHFH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_IDDDECFANIM__CTOR_OFFSET))(this);
	}

	::System::Void IBFPFGIMBCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_IDDDECFANIM_IBFPFGIMBCA_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* MOEFIEFGFFI(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CBHALHKAKLC_IDDDECFANIM_MOEFIEFGFFI_OFFSET))(this, OMMEALOOOOD);
	}
};
