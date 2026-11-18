#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class EMADFJAKIBG;
class IANDOOLAALI_DLAAJNDJPLO;
class IANDOOLAALI_NGKHGAPPFDA;
class KPFMNFNKMLG_BEEDHPONIFG;
class KPFMNFNKMLG_NLKDPJGFECM;
class OAEFGCLEHHO;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KPFMNFNKMLG_HCHEEAPGHKC_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x1791EE50)
#define KPFMNFNKMLG_HCHEEAPGHKC_CKEMNJODHCH_OFFSET UNITYSDK_OFFSET(0x1791EE30)
#define KPFMNFNKMLG_HCHEEAPGHKC_FAFMBNKFGEK_OFFSET UNITYSDK_OFFSET(0x1791EE10)
#define KPFMNFNKMLG_HCHEEAPGHKC_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x1791ECC0)
#define KPFMNFNKMLG_HCHEEAPGHKC_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1791ECF0)
#define KPFMNFNKMLG_HCHEEAPGHKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1791ECB0)

inline static constexpr unsigned int KPFMNFNKMLG_HCHEEAPGHKC_TypeDefinitionIndex = 51339;

class KPFMNFNKMLG_HCHEEAPGHKC : public ::System::Object
{
public:
	::IANDOOLAALI_DLAAJNDJPLO* KAKAEMACNPB; // 0x10
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* FFMGICPLKFB; // 0x18
	::System::Action* DLMJCFBENGB; // 0x20
	::KPFMNFNKMLG_BEEDHPONIFG* FGBNBFHOKAA; // 0x28
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x30
	::IANDOOLAALI_NGKHGAPPFDA* OLDCEOGKOAE; // 0x38
	::KPFMNFNKMLG_NLKDPJGFECM* EJGDHCIBCJH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFMNFNKMLG_HCHEEAPGHKC__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask HOFIFAEOLBM(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + KPFMNFNKMLG_HCHEEAPGHKC_HOFIFAEOLBM_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void LIDNPLMPHAL(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + KPFMNFNKMLG_HCHEEAPGHKC_LIDNPLMPHAL_OFFSET))(this, PJMOJNFEHLF);
	}

	::System::Void FAFMBNKFGEK(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KPFMNFNKMLG_HCHEEAPGHKC_FAFMBNKFGEK_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void CKEMNJODHCH(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KPFMNFNKMLG_HCHEEAPGHKC_CKEMNJODHCH_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFMNFNKMLG_HCHEEAPGHKC_AAHMACBDCPN_OFFSET))(this);
	}
};
