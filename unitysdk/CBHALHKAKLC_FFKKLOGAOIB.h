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

#define CBHALHKAKLC_FFKKLOGAOIB_AODCJCPNGNF_OFFSET UNITYSDK_OFFSET(0x1399D9C0)
#define CBHALHKAKLC_FFKKLOGAOIB_BCNJLPJIEMH_OFFSET UNITYSDK_OFFSET(0x1399DF70)
#define CBHALHKAKLC_FFKKLOGAOIB_LBJGHFBLONH_OFFSET UNITYSDK_OFFSET(0x1399DD80)
#define CBHALHKAKLC_FFKKLOGAOIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1399D9B0)

inline static constexpr unsigned int CBHALHKAKLC_FFKKLOGAOIB_TypeDefinitionIndex = 55854;

class CBHALHKAKLC_FFKKLOGAOIB : public ::System::Object
{
public:
	::CBHALHKAKLC_OMCMPLFMCAM* GFMKLBEBHCP; // 0x10
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x18
	::System::Action* DLMJCFBENGB; // 0x20
	::AIOGGGIHCAE* BMDHAMNECNI; // 0x28
	::DJKHNKJFMJO* LBDJHIALDLB; // 0x30
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* MKFNHNGJBGB; // 0x38
	::GEKNEEMAHBC* EGGOCICCFJC; // 0x40
	::System::Action* FFMGICPLKFB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_FFKKLOGAOIB__CTOR_OFFSET))(this);
	}

	::System::Void AODCJCPNGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_FFKKLOGAOIB_AODCJCPNGNF_OFFSET))(this);
	}

	::System::Void LBJGHFBLONH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_FFKKLOGAOIB_LBJGHFBLONH_OFFSET))(this);
	}

	::System::Void BCNJLPJIEMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_FFKKLOGAOIB_BCNJLPJIEMH_OFFSET))(this);
	}
};
