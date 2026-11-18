#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIFOBKBCCMA.h"
#include "unitysdk/System/Object.h"

class EGMJAPMDEIH;
class MIODKPBHOEB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGMJAPMDEIH_HNPPFKALHJK_AFAEDMCFPLN_OFFSET UNITYSDK_OFFSET(0x17109CB0)
#define EGMJAPMDEIH_HNPPFKALHJK_MPNKKKDFILB_OFFSET UNITYSDK_OFFSET(0x17109E00)
#define EGMJAPMDEIH_HNPPFKALHJK__CTOR_OFFSET UNITYSDK_OFFSET(0x17109CA0)

inline static constexpr unsigned int EGMJAPMDEIH_HNPPFKALHJK_TypeDefinitionIndex = 49023;

class EGMJAPMDEIH_HNPPFKALHJK : public ::System::Object
{
public:
	::EGMJAPMDEIH* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* GHIBJCNHPAF; // 0x18
	::System::Boolean NDKOICEGNHB; // 0x20
	::System::Byte _padding0[0x3];
	::GIFOBKBCCMA FNIOPKPHDEH; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMJAPMDEIH_HNPPFKALHJK__CTOR_OFFSET))(this);
	}

	::System::Int32 AFAEDMCFPLN(::MIODKPBHOEB* EJCBEJMGFAJ, ::MIODKPBHOEB* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MIODKPBHOEB*, ::MIODKPBHOEB*))((::PBYTE)hIl2Cpp + EGMJAPMDEIH_HNPPFKALHJK_AFAEDMCFPLN_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Boolean MPNKKKDFILB(::MIODKPBHOEB* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::MIODKPBHOEB*))((::PBYTE)hIl2Cpp + EGMJAPMDEIH_HNPPFKALHJK_MPNKKKDFILB_OFFSET))(this, IMLLDOHDCNC);
	}
};
