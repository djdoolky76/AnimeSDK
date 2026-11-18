#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class EMADFJAKIBG;
class IJDGBOMMAOD_GCPGEOPAKOH;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define IJDGBOMMAOD_LPBEGNNHBMI_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x153AD740)
#define IJDGBOMMAOD_LPBEGNNHBMI_CKEMNJODHCH_OFFSET UNITYSDK_OFFSET(0x153AD860)
#define IJDGBOMMAOD_LPBEGNNHBMI_FAFMBNKFGEK_OFFSET UNITYSDK_OFFSET(0x153AD600)
#define IJDGBOMMAOD_LPBEGNNHBMI_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x153AD510)
#define IJDGBOMMAOD_LPBEGNNHBMI__CTOR_OFFSET UNITYSDK_OFFSET(0x153AD230)

inline static constexpr unsigned int IJDGBOMMAOD_LPBEGNNHBMI_TypeDefinitionIndex = 79868;

class IJDGBOMMAOD_LPBEGNNHBMI : public ::System::Object
{
public:
	::System::Action* OLDCEOGKOAE; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x18
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* KAKAEMACNPB; // 0x20
	::IJDGBOMMAOD_GCPGEOPAKOH* FGBNBFHOKAA; // 0x28
	::System::Action* FFMGICPLKFB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDGBOMMAOD_LPBEGNNHBMI__CTOR_OFFSET))(this);
	}

	::System::Void HOFIFAEOLBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDGBOMMAOD_LPBEGNNHBMI_HOFIFAEOLBM_OFFSET))(this);
	}

	::System::Void FAFMBNKFGEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDGBOMMAOD_LPBEGNNHBMI_FAFMBNKFGEK_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + IJDGBOMMAOD_LPBEGNNHBMI_AAHMACBDCPN_OFFSET))(this, PJMOJNFEHLF);
	}

	::Cysharp::Threading::Tasks::UniTask CKEMNJODHCH(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + IJDGBOMMAOD_LPBEGNNHBMI_CKEMNJODHCH_OFFSET))(this, OMMEALOOOOD);
	}
};
