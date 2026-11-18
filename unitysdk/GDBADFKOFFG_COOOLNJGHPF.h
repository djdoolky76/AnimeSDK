#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Action; }
template <typename T1, typename T2, typename T3> class KDJCJBLNLDK_3;

#define GDBADFKOFFG_COOOLNJGHPF_ECNMLOJKCOF_OFFSET UNITYSDK_OFFSET(0x18132110)
#define GDBADFKOFFG_COOOLNJGHPF_JIJFHAHPFCN_OFFSET UNITYSDK_OFFSET(0x181321E0)
#define GDBADFKOFFG_COOOLNJGHPF__CTOR_OFFSET UNITYSDK_OFFSET(0x18132100)

inline static constexpr unsigned int GDBADFKOFFG_COOOLNJGHPF_TypeDefinitionIndex = 74141;

class GDBADFKOFFG_COOOLNJGHPF : public ::System::Object
{
public:
	::System::ValueTuple_2<::System::Action*, ::System::Action*> CIBCCEBMHCG; // 0x10
	::System::Byte _padding0[0x8];
	::KDJCJBLNLDK_3<::System::Int32, ::System::Int32, ::System::Single>* JJDJDIHBKJH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_COOOLNJGHPF__CTOR_OFFSET))(this);
	}

	::System::Void ECNMLOJKCOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_COOOLNJGHPF_ECNMLOJKCOF_OFFSET))(this);
	}

	::System::Void JIJFHAHPFCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_COOOLNJGHPF_JIJFHAHPFCN_OFFSET))(this);
	}
};
