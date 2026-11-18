#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECEOBOHAGOB.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAOEFDDCNBK_HILMFIFEOME_OFFSET UNITYSDK_OFFSET(0x1B322170)
#define NAOEFDDCNBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B322160)

inline static constexpr unsigned int NAOEFDDCNBK_TypeDefinitionIndex = 17108;

class NAOEFDDCNBK : public ::ECEOBOHAGOB
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* LKPDNLFFGOF; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOEFDDCNBK__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Object*>* HILMFIFEOME()
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOEFDDCNBK_HILMFIFEOME_OFFSET))(this);
	}
};
