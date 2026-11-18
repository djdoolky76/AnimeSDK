#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class AFNKIOKHIHP_FIFOEIDKNDP;
class AFNKIOKHIHP_OGLOFKANJBJ;
class EMADFJAKIBG;
class FGICKENFLJC;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFNKIOKHIHP_MJNDGHMNFII_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x143501F0)
#define AFNKIOKHIHP_MJNDGHMNFII_CKEMNJODHCH_OFFSET UNITYSDK_OFFSET(0x143503D0)
#define AFNKIOKHIHP_MJNDGHMNFII_FAFMBNKFGEK_OFFSET UNITYSDK_OFFSET(0x14350170)
#define AFNKIOKHIHP_MJNDGHMNFII_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x14350140)
#define AFNKIOKHIHP_MJNDGHMNFII_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x14350060)
#define AFNKIOKHIHP_MJNDGHMNFII__CTOR_OFFSET UNITYSDK_OFFSET(0x14350050)

inline static constexpr unsigned int AFNKIOKHIHP_MJNDGHMNFII_TypeDefinitionIndex = 79100;

class AFNKIOKHIHP_MJNDGHMNFII : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::FGICKENFLJC*>*>* OLDCEOGKOAE; // 0x18
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* FFMGICPLKFB; // 0x20
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x28
	::AFNKIOKHIHP_FIFOEIDKNDP* EEMOEMFLABI; // 0x30
	::AFNKIOKHIHP_OGLOFKANJBJ* EJGDHCIBCJH; // 0x38
	::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::FGICKENFLJC*>*>* KAKAEMACNPB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_MJNDGHMNFII__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_MJNDGHMNFII_LIDNPLMPHAL_OFFSET))(this, PJMOJNFEHLF);
	}

	::Cysharp::Threading::Tasks::UniTask HOFIFAEOLBM(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_MJNDGHMNFII_HOFIFAEOLBM_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void FAFMBNKFGEK(::System::Boolean EBFCACIEKBC, ::System::Collections::Generic::List_1<::FGICKENFLJC*>* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::FGICKENFLJC*>*))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_MJNDGHMNFII_FAFMBNKFGEK_OFFSET))(this, EBFCACIEKBC, NKMKJFCBBCK);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_MJNDGHMNFII_AAHMACBDCPN_OFFSET))(this);
	}

	::System::Void CKEMNJODHCH(::System::Boolean CAAFEGLOALC, ::System::Collections::Generic::List_1<::FGICKENFLJC*>* GHHNDIOIGAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::FGICKENFLJC*>*))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_MJNDGHMNFII_CKEMNJODHCH_OFFSET))(this, CAAFEGLOALC, GHHNDIOIGAA);
	}
};
