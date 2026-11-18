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

#define CBHALHKAKLC_MIGLNAECNDO_BKDAGOCJIJP_OFFSET UNITYSDK_OFFSET(0x16860FF0)
#define CBHALHKAKLC_MIGLNAECNDO_NODLMGFMBHM_OFFSET UNITYSDK_OFFSET(0x16860C30)
#define CBHALHKAKLC_MIGLNAECNDO_ODBNOHEMOCH_OFFSET UNITYSDK_OFFSET(0x16861070)
#define CBHALHKAKLC_MIGLNAECNDO__CTOR_OFFSET UNITYSDK_OFFSET(0x16860C20)

inline static constexpr unsigned int CBHALHKAKLC_MIGLNAECNDO_TypeDefinitionIndex = 55897;

class CBHALHKAKLC_MIGLNAECNDO : public ::System::Object
{
public:
	::AIOGGGIHCAE* BMDHAMNECNI; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::GEKNEEMAHBC* EGGOCICCFJC; // 0x20
	::DJKHNKJFMJO* LBDJHIALDLB; // 0x28
	::CBHALHKAKLC_OMCMPLFMCAM* GFMKLBEBHCP; // 0x30
	::System::Action* KPFKDDMENIP; // 0x38
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x40
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* MKFNHNGJBGB; // 0x48
	::System::Action* FFMGICPLKFB; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_MIGLNAECNDO__CTOR_OFFSET))(this);
	}

	::System::Void NODLMGFMBHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_MIGLNAECNDO_NODLMGFMBHM_OFFSET))(this);
	}

	::System::Void BKDAGOCJIJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_MIGLNAECNDO_BKDAGOCJIJP_OFFSET))(this);
	}

	::System::Void ODBNOHEMOCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_MIGLNAECNDO_ODBNOHEMOCH_OFFSET))(this);
	}
};
