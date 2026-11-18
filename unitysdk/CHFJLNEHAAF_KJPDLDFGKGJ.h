#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class CHFJLNEHAAF;
class CHFJLNEHAAF_LNKGCGDKHHA;
class CHFJLNEHAAF_PNEJDCLKPKF;
namespace System { template <typename T> class Action_1; }

#define CHFJLNEHAAF_KJPDLDFGKGJ_GIBKGHBKCOM_OFFSET UNITYSDK_OFFSET(0x14551320)
#define CHFJLNEHAAF_KJPDLDFGKGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14551310)

inline static constexpr unsigned int CHFJLNEHAAF_KJPDLDFGKGJ_TypeDefinitionIndex = 87349;

class CHFJLNEHAAF_KJPDLDFGKGJ : public ::System::Object
{
public:
	::System::Action_1<::System::Object*>* CAAFEGLOALC; // 0x10
	::CHFJLNEHAAF* KLHPEBKNIFB; // 0x18
	::CHFJLNEHAAF_PNEJDCLKPKF* PJBNJANDANM; // 0x20
	::CHFJLNEHAAF_LNKGCGDKHHA* NPACJNHDBIL; // 0x28
	::System::Action_1<::System::Object*>* HGBOMLCCBEE; // 0x30
	::System::Single DBOOIOLEPOJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_KJPDLDFGKGJ__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask GIBKGHBKCOM(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_KJPDLDFGKGJ_GIBKGHBKCOM_OFFSET))(this, OMMEALOOOOD);
	}
};
