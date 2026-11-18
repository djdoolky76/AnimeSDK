#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLPJDKPMHDH.h"
#include "unitysdk/NJBGDDAGKNM.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MDAFLPEJNGF_JFAGMFHKHFH_OFFSET UNITYSDK_OFFSET(0x1C083880)
#define MDAFLPEJNGF_NCBGHNAIIBL_OFFSET UNITYSDK_OFFSET(0x1C0837F0)
#define MDAFLPEJNGF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C083700)

inline static constexpr unsigned int MDAFLPEJNGF_TypeDefinitionIndex = 16974;

class MDAFLPEJNGF : public ::CLPJDKPMHDH
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* NEGCPAIEADJ; // 0x48

	::System::Void _ctor(::NJBGDDAGKNM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NJBGDDAGKNM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MDAFLPEJNGF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JFAGMFHKHFH(::System::Int32 GGAANCEAGPM)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MDAFLPEJNGF_JFAGMFHKHFH_OFFSET))(this, GGAANCEAGPM);
	}

	::System::Void NCBGHNAIIBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAFLPEJNGF_NCBGHNAIIBL_OFFSET))(this);
	}
};
