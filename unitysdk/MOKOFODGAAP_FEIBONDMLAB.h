#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class EMADFJAKIBG;
class FGICKENFLJC;
class MOKOFODGAAP_AFJEAHILGBH;
class MOKOFODGAAP_EKFGLEKPCEB;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOKOFODGAAP_FEIBONDMLAB_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x177D7190)
#define MOKOFODGAAP_FEIBONDMLAB_CKEMNJODHCH_OFFSET UNITYSDK_OFFSET(0x177D7410)
#define MOKOFODGAAP_FEIBONDMLAB_FAFMBNKFGEK_OFFSET UNITYSDK_OFFSET(0x177D73A0)
#define MOKOFODGAAP_FEIBONDMLAB_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x177D7160)
#define MOKOFODGAAP_FEIBONDMLAB_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x177D7080)
#define MOKOFODGAAP_FEIBONDMLAB__CTOR_OFFSET UNITYSDK_OFFSET(0x177D7070)

inline static constexpr unsigned int MOKOFODGAAP_FEIBONDMLAB_TypeDefinitionIndex = 41424;

class MOKOFODGAAP_FEIBONDMLAB : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::FGICKENFLJC*>*>* KAKAEMACNPB; // 0x10
	::MOKOFODGAAP_EKFGLEKPCEB* FGBNBFHOKAA; // 0x18
	::System::Action* DLMJCFBENGB; // 0x20
	::MOKOFODGAAP_AFJEAHILGBH* EJGDHCIBCJH; // 0x28
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x30
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* FFMGICPLKFB; // 0x38
	::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::FGICKENFLJC*>*>* OLDCEOGKOAE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKOFODGAAP_FEIBONDMLAB__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + MOKOFODGAAP_FEIBONDMLAB_LIDNPLMPHAL_OFFSET))(this, PJMOJNFEHLF);
	}

	::Cysharp::Threading::Tasks::UniTask HOFIFAEOLBM(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOKOFODGAAP_FEIBONDMLAB_HOFIFAEOLBM_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKOFODGAAP_FEIBONDMLAB_AAHMACBDCPN_OFFSET))(this);
	}

	::System::Void FAFMBNKFGEK(::System::Boolean EBFCACIEKBC, ::System::Collections::Generic::List_1<::FGICKENFLJC*>* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::FGICKENFLJC*>*))((::PBYTE)hIl2Cpp + MOKOFODGAAP_FEIBONDMLAB_FAFMBNKFGEK_OFFSET))(this, EBFCACIEKBC, PIIPCLCCOIG);
	}

	::System::Void CKEMNJODHCH(::System::Boolean CAAFEGLOALC, ::System::Collections::Generic::List_1<::FGICKENFLJC*>* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::FGICKENFLJC*>*))((::PBYTE)hIl2Cpp + MOKOFODGAAP_FEIBONDMLAB_CKEMNJODHCH_OFFSET))(this, CAAFEGLOALC, PIIPCLCCOIG);
	}
};
