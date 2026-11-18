#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class FMHDMLBDIJC;
class IFOHGNLIAKH;
class JGEBOFOHDCI;
class OENILDODCBF;
namespace System { template <typename T1, typename T2> class Func_2; }

#define JGEBOFOHDCI_PJBBDABAANG_EGEBHDKEIDK_OFFSET UNITYSDK_OFFSET(0x19458BA0)
#define JGEBOFOHDCI_PJBBDABAANG_FPMEJMHEJLM_OFFSET UNITYSDK_OFFSET(0x19458B40)
#define JGEBOFOHDCI_PJBBDABAANG_HBELBADFKFG_OFFSET UNITYSDK_OFFSET(0x19458B70)
#define JGEBOFOHDCI_PJBBDABAANG__CTOR_OFFSET UNITYSDK_OFFSET(0x19458B30)

inline static constexpr unsigned int JGEBOFOHDCI_PJBBDABAANG_TypeDefinitionIndex = 70282;

class JGEBOFOHDCI_PJBBDABAANG : public ::System::Object
{
public:
	::JGEBOFOHDCI* KLHPEBKNIFB; // 0x10
	::System::Func_2<::OENILDODCBF*, ::System::Boolean>* KPOHOGAEDEP; // 0x18
	::System::Int32 IPBFNIPPMBJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_PJBBDABAANG__CTOR_OFFSET))(this);
	}

	::System::Void FPMEJMHEJLM(::FMHDMLBDIJC* KDEHMPGOCEP, ::FMHDMLBDIJC* PADJNMGMGHO)
	{
		return ((::System::Void(*)(::PVOID, ::FMHDMLBDIJC*, ::FMHDMLBDIJC*))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_PJBBDABAANG_FPMEJMHEJLM_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO);
	}

	::System::Void HBELBADFKFG(::IFOHGNLIAKH* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_PJBBDABAANG_HBELBADFKFG_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Nullable_1<::System::Boolean> EGEBHDKEIDK(::System::Object* JNDDJMAHNAI)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_PJBBDABAANG_EGEBHDKEIDK_OFFSET))(this, JNDDJMAHNAI);
	}
};
