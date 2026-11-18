#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPPMPHICDEA_AOPFGHFNDIB_AAHELCGAMLL_OFFSET UNITYSDK_OFFSET(0x16CDC880)
#define GPPMPHICDEA_AOPFGHFNDIB__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDC870)

inline static constexpr unsigned int GPPMPHICDEA_AOPFGHFNDIB_TypeDefinitionIndex = 42635;

class GPPMPHICDEA_AOPFGHFNDIB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* BPJHMOHGJGB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_AOPFGHFNDIB__CTOR_OFFSET))(this);
	}

	::System::Int32 AAHELCGAMLL(::System::String* EJCBEJMGFAJ, ::System::String* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_AOPFGHFNDIB_AAHELCGAMLL_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
