#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class EMADFJAKIBG;
class OGLDBFGKOLI_IKMPMKFBBNI;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OGLDBFGKOLI_GLMECOAFDGM_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0xE14DF60)
#define OGLDBFGKOLI_GLMECOAFDGM_CKEMNJODHCH_OFFSET UNITYSDK_OFFSET(0xE14DD70)
#define OGLDBFGKOLI_GLMECOAFDGM_FAFMBNKFGEK_OFFSET UNITYSDK_OFFSET(0xE14D9D0)
#define OGLDBFGKOLI_GLMECOAFDGM_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0xE14DDA0)
#define OGLDBFGKOLI_GLMECOAFDGM__CTOR_OFFSET UNITYSDK_OFFSET(0xE14D9C0)

inline static constexpr unsigned int OGLDBFGKOLI_GLMECOAFDGM_TypeDefinitionIndex = 80069;

class OGLDBFGKOLI_GLMECOAFDGM : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x10
	::OGLDBFGKOLI_IKMPMKFBBNI* FGBNBFHOKAA; // 0x18
	::System::Action* FFMGICPLKFB; // 0x20
	::System::Action* OLDCEOGKOAE; // 0x28
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* KAKAEMACNPB; // 0x30
	::HOCDHMEPPEG DJBBALOPPNE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLDBFGKOLI_GLMECOAFDGM__CTOR_OFFSET))(this);
	}

	::System::Void FAFMBNKFGEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLDBFGKOLI_GLMECOAFDGM_FAFMBNKFGEK_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask CKEMNJODHCH(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + OGLDBFGKOLI_GLMECOAFDGM_CKEMNJODHCH_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void HOFIFAEOLBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLDBFGKOLI_GLMECOAFDGM_HOFIFAEOLBM_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + OGLDBFGKOLI_GLMECOAFDGM_AAHMACBDCPN_OFFSET))(this, PJMOJNFEHLF);
	}
};
