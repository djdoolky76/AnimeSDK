#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class EMADFJAKIBG;
class IMCAMFPFJCC_PCNDJOFDPFG;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define IMCAMFPFJCC_POBMBELONHC_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0xF87DC10)
#define IMCAMFPFJCC_POBMBELONHC_CKEMNJODHCH_OFFSET UNITYSDK_OFFSET(0xF87DD30)
#define IMCAMFPFJCC_POBMBELONHC_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0xF87DBE0)
#define IMCAMFPFJCC_POBMBELONHC_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0xF87DD60)
#define IMCAMFPFJCC_POBMBELONHC__CTOR_OFFSET UNITYSDK_OFFSET(0xF87DBD0)

inline static constexpr unsigned int IMCAMFPFJCC_POBMBELONHC_TypeDefinitionIndex = 58633;

class IMCAMFPFJCC_POBMBELONHC : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* FFMGICPLKFB; // 0x18
	::IMCAMFPFJCC_PCNDJOFDPFG* FGBNBFHOKAA; // 0x20
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* NONBCEBNHEH; // 0x28
	::System::Action* KAKAEMACNPB; // 0x30
	::System::Boolean CGEMLHFPINP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCAMFPFJCC_POBMBELONHC__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask HOFIFAEOLBM(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + IMCAMFPFJCC_POBMBELONHC_HOFIFAEOLBM_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCAMFPFJCC_POBMBELONHC_AAHMACBDCPN_OFFSET))(this);
	}

	::System::Void CKEMNJODHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCAMFPFJCC_POBMBELONHC_CKEMNJODHCH_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + IMCAMFPFJCC_POBMBELONHC_LIDNPLMPHAL_OFFSET))(this, PJMOJNFEHLF);
	}
};
