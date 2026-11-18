#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class FMHDMLBDIJC;
class JGEBOFOHDCI;
class OENILDODCBF;
namespace System { template <typename T1, typename T2> class Func_2; }

#define JGEBOFOHDCI_IGNFNIHLGEE_FIOAJHPBCFD_OFFSET UNITYSDK_OFFSET(0x1A4752D0)
#define JGEBOFOHDCI_IGNFNIHLGEE_HEGHGBHCPAM_OFFSET UNITYSDK_OFFSET(0x1A4752A0)
#define JGEBOFOHDCI_IGNFNIHLGEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A475290)

inline static constexpr unsigned int JGEBOFOHDCI_IGNFNIHLGEE_TypeDefinitionIndex = 70280;

class JGEBOFOHDCI_IGNFNIHLGEE : public ::System::Object
{
public:
	::JGEBOFOHDCI* KLHPEBKNIFB; // 0x10
	::System::Func_2<::OENILDODCBF*, ::System::Boolean>* KPOHOGAEDEP; // 0x18
	::System::Int32 IPBFNIPPMBJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_IGNFNIHLGEE__CTOR_OFFSET))(this);
	}

	::System::Void HEGHGBHCPAM(::FMHDMLBDIJC* KDEHMPGOCEP, ::FMHDMLBDIJC* PADJNMGMGHO)
	{
		return ((::System::Void(*)(::PVOID, ::FMHDMLBDIJC*, ::FMHDMLBDIJC*))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_IGNFNIHLGEE_HEGHGBHCPAM_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO);
	}

	::System::Nullable_1<::System::Boolean> FIOAJHPBCFD(::System::Object* JNDDJMAHNAI)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_IGNFNIHLGEE_FIOAJHPBCFD_OFFSET))(this, JNDDJMAHNAI);
	}
};
