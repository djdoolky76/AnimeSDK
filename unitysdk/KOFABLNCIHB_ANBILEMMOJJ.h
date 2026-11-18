#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class EMADFJAKIBG;
class IANDOOLAALI_DLAAJNDJPLO;
class IANDOOLAALI_NGKHGAPPFDA;
class KOFABLNCIHB_IMHGCANIOKI;
class KOFABLNCIHB_JJELAOHFEHK;
class OAEFGCLEHHO;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KOFABLNCIHB_ANBILEMMOJJ_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x15802A10)
#define KOFABLNCIHB_ANBILEMMOJJ_CKEMNJODHCH_OFFSET UNITYSDK_OFFSET(0x15802C00)
#define KOFABLNCIHB_ANBILEMMOJJ_FAFMBNKFGEK_OFFSET UNITYSDK_OFFSET(0x15802D40)
#define KOFABLNCIHB_ANBILEMMOJJ_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x158029E0)
#define KOFABLNCIHB_ANBILEMMOJJ_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x15802C20)
#define KOFABLNCIHB_ANBILEMMOJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x158029D0)

inline static constexpr unsigned int KOFABLNCIHB_ANBILEMMOJJ_TypeDefinitionIndex = 74189;

class KOFABLNCIHB_ANBILEMMOJJ : public ::System::Object
{
public:
	::IANDOOLAALI_NGKHGAPPFDA* OLDCEOGKOAE; // 0x10
	::IANDOOLAALI_DLAAJNDJPLO* KAKAEMACNPB; // 0x18
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x20
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* FFMGICPLKFB; // 0x28
	::KOFABLNCIHB_JJELAOHFEHK* FGBNBFHOKAA; // 0x30
	::System::Action* DLMJCFBENGB; // 0x38
	::KOFABLNCIHB_IMHGCANIOKI* EJGDHCIBCJH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFABLNCIHB_ANBILEMMOJJ__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask HOFIFAEOLBM(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + KOFABLNCIHB_ANBILEMMOJJ_HOFIFAEOLBM_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFABLNCIHB_ANBILEMMOJJ_AAHMACBDCPN_OFFSET))(this);
	}

	::System::Void CKEMNJODHCH(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFABLNCIHB_ANBILEMMOJJ_CKEMNJODHCH_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void LIDNPLMPHAL(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + KOFABLNCIHB_ANBILEMMOJJ_LIDNPLMPHAL_OFFSET))(this, PJMOJNFEHLF);
	}

	::System::Void FAFMBNKFGEK(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFABLNCIHB_ANBILEMMOJJ_FAFMBNKFGEK_OFFSET))(this, NAPFALLANDL);
	}
};
