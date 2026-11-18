#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEKNEEMAHBC.h"
#include "unitysdk/GEKNEEMAHBC_JENDGGPPBIA.h"

namespace MoleMole { class UIHollowMainPageContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PMFOBFJAHBJ_BPFPAIMCKBE_OFFSET UNITYSDK_OFFSET(0x1BF29460)
#define PMFOBFJAHBJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1BF29580)
#define PMFOBFJAHBJ_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x1BF294C0)
#define PMFOBFJAHBJ_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x1BF29570)
#define PMFOBFJAHBJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1BF29470)
#define PMFOBFJAHBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF29510)

inline static constexpr unsigned int PMFOBFJAHBJ_TypeDefinitionIndex = 52320;

class PMFOBFJAHBJ : public ::GEKNEEMAHBC
{
public:
	::MoleMole::UIHollowMainPageContext* EIGKAEDGFFH; // 0x90
	::System::Collections::Generic::HashSet_1<::System::UInt64>* LOEMMFHGGCK; // 0x98
	::System::Int32 KKPLOJMHPAI; // 0xA0
	::System::Int32 CFODHICLKIA; // 0xA4
	::System::Boolean MJEADICPGHP; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFOBFJAHBJ__CTOR_OFFSET))(this);
	}

	::GEKNEEMAHBC_JENDGGPPBIA BPFPAIMCKBE()
	{
		return ((::GEKNEEMAHBC_JENDGGPPBIA(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFOBFJAHBJ_BPFPAIMCKBE_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFOBFJAHBJ_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFOBFJAHBJ_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFOBFJAHBJ_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFOBFJAHBJ_ECNOGHHOPPF_OFFSET))(this);
	}
};
