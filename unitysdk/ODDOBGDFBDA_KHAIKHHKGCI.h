#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ODDOBGDFBDA_AADCKHFLMHM.h"

class ODDOBGDFBDA_OAJPNLFOBCC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODDOBGDFBDA_KHAIKHHKGCI_KDAKIODNOPP_OFFSET UNITYSDK_OFFSET(0x18436260)
#define ODDOBGDFBDA_KHAIKHHKGCI__CTOR_OFFSET UNITYSDK_OFFSET(0x18436060)

inline static constexpr unsigned int ODDOBGDFBDA_KHAIKHHKGCI_TypeDefinitionIndex = 70568;

class ODDOBGDFBDA_KHAIKHHKGCI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* DJBDLMGDDOF; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* HNIHCBKOCNK; // 0x18
	::System::Collections::Generic::List_1<::System::Object*>* JKMNICLCHKN; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* ECDEGDABAJP; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* ADDIOMFAABP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDOBGDFBDA_KHAIKHHKGCI__CTOR_OFFSET))(this);
	}

	::ODDOBGDFBDA_OAJPNLFOBCC* KDAKIODNOPP(::ODDOBGDFBDA_AADCKHFLMHM GLJDDNFGPAN)
	{
		return ((::ODDOBGDFBDA_OAJPNLFOBCC*(*)(::PVOID, ::ODDOBGDFBDA_AADCKHFLMHM))((::PBYTE)hIl2Cpp + ODDOBGDFBDA_KHAIKHHKGCI_KDAKIODNOPP_OFFSET))(this, GLJDDNFGPAN);
	}
};
