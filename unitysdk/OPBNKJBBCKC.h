#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OJJMFGLLHOC.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define OPBNKJBBCKC_JGOOCEMNIFP_OFFSET UNITYSDK_OFFSET(0x172E19D0)
#define OPBNKJBBCKC_NHFAADGIGGD_OFFSET UNITYSDK_OFFSET(0x172E1E50)

inline static constexpr unsigned int OPBNKJBBCKC_TypeDefinitionIndex = 45684;

class OPBNKJBBCKC : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::OJJMFGLLHOC>* JGOOCEMNIFP(::System::Int32 EAPJCMACLKL)
	{
		return ((::System::Collections::Generic::List_1<::OJJMFGLLHOC>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + OPBNKJBBCKC_JGOOCEMNIFP_OFFSET))(EAPJCMACLKL);
	}

	static ::System::Collections::Generic::List_1<::OJJMFGLLHOC>* NHFAADGIGGD(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Collections::Generic::List_1<::OJJMFGLLHOC>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + OPBNKJBBCKC_NHFAADGIGGD_OFFSET))(NACGJJKHEJE);
	}
};
