#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class AIOGGGIHCAE;
class CBHALHKAKLC;
class CBHALHKAKLC_OMCMPLFMCAM;
class DJKHNKJFMJO;
class GEKNEEMAHBC;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CBHALHKAKLC_GICKJKNOCNK_KMCAOHDKBPL_OFFSET UNITYSDK_OFFSET(0x1152DE20)
#define CBHALHKAKLC_GICKJKNOCNK_NCDMBAPEAAD_OFFSET UNITYSDK_OFFSET(0x1152DE90)
#define CBHALHKAKLC_GICKJKNOCNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1152DE10)

inline static constexpr unsigned int CBHALHKAKLC_GICKJKNOCNK_TypeDefinitionIndex = 55901;

class CBHALHKAKLC_GICKJKNOCNK : public ::System::Object
{
public:
	::GEKNEEMAHBC* EGGOCICCFJC; // 0x10
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* MKFNHNGJBGB; // 0x18
	::System::Action* FFMGICPLKFB; // 0x20
	::CBHALHKAKLC_OMCMPLFMCAM* GFMKLBEBHCP; // 0x28
	::AIOGGGIHCAE* BMDHAMNECNI; // 0x30
	::DJKHNKJFMJO* LBDJHIALDLB; // 0x38
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_GICKJKNOCNK__CTOR_OFFSET))(this);
	}

	::System::Void KMCAOHDKBPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_GICKJKNOCNK_KMCAOHDKBPL_OFFSET))(this);
	}

	::System::Void NCDMBAPEAAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_GICKJKNOCNK_NCDMBAPEAAD_OFFSET))(this);
	}
};
