#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJFOMLLPEDI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class CBHALHKAKLC;
class GEKNEEMAHBC;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

#define CBHALHKAKLC_OCAMHCNCGHE_BAOGDAPDEDI_OFFSET UNITYSDK_OFFSET(0x15311360)
#define CBHALHKAKLC_OCAMHCNCGHE__CTOR_OFFSET UNITYSDK_OFFSET(0x15311350)

inline static constexpr unsigned int CBHALHKAKLC_OCAMHCNCGHE_TypeDefinitionIndex = 55874;

class CBHALHKAKLC_OCAMHCNCGHE : public ::System::Object
{
public:
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x10
	::GEKNEEMAHBC* EGGOCICCFJC; // 0x18
	::FJFOMLLPEDI KCCHFOEPAKG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_OCAMHCNCGHE__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* BAOGDAPDEDI(::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CBHALHKAKLC_OCAMHCNCGHE_BAOGDAPDEDI_OFFSET))(this, AMIDHEAIANO);
	}
};
