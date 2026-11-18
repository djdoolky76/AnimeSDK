#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class EMADFJAKIBG;
class IANDOOLAALI_DLAAJNDJPLO;
class IANDOOLAALI_NGKHGAPPFDA;
class MCFAKFEMAHL_LKCKGDAAGLF;
class OAEFGCLEHHO;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MCFAKFEMAHL_KEBPDPILAMI_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x17D07A70)
#define MCFAKFEMAHL_KEBPDPILAMI_CKEMNJODHCH_OFFSET UNITYSDK_OFFSET(0x17D07740)
#define MCFAKFEMAHL_KEBPDPILAMI_FAFMBNKFGEK_OFFSET UNITYSDK_OFFSET(0x17D07710)
#define MCFAKFEMAHL_KEBPDPILAMI_GHOCALKLJCD_OFFSET UNITYSDK_OFFSET(0x17D076B0)
#define MCFAKFEMAHL_KEBPDPILAMI_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x17D076E0)
#define MCFAKFEMAHL_KEBPDPILAMI_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x17D079D0)
#define MCFAKFEMAHL_KEBPDPILAMI__CTOR_OFFSET UNITYSDK_OFFSET(0x17D07460)

inline static constexpr unsigned int MCFAKFEMAHL_KEBPDPILAMI_TypeDefinitionIndex = 92321;

class MCFAKFEMAHL_KEBPDPILAMI : public ::System::Object
{
public:
	::IANDOOLAALI_NGKHGAPPFDA* OLDCEOGKOAE; // 0x10
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* FFMGICPLKFB; // 0x18
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x20
	::MCFAKFEMAHL_LKCKGDAAGLF* FGBNBFHOKAA; // 0x28
	::System::Action* AEPKIFBFCOD; // 0x30
	::IANDOOLAALI_DLAAJNDJPLO* KAKAEMACNPB; // 0x38
	::System::Action* DLMJCFBENGB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFAKFEMAHL_KEBPDPILAMI__CTOR_OFFSET))(this);
	}

	::System::Void GHOCALKLJCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFAKFEMAHL_KEBPDPILAMI_GHOCALKLJCD_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask HOFIFAEOLBM(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MCFAKFEMAHL_KEBPDPILAMI_HOFIFAEOLBM_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void FAFMBNKFGEK(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MCFAKFEMAHL_KEBPDPILAMI_FAFMBNKFGEK_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void CKEMNJODHCH(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MCFAKFEMAHL_KEBPDPILAMI_CKEMNJODHCH_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void LIDNPLMPHAL(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + MCFAKFEMAHL_KEBPDPILAMI_LIDNPLMPHAL_OFFSET))(this, PJMOJNFEHLF);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFAKFEMAHL_KEBPDPILAMI_AAHMACBDCPN_OFFSET))(this);
	}
};
