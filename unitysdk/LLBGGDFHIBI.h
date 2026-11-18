#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LLBGGDFHIBI__CTOR_OFFSET UNITYSDK_OFFSET(0x158F49B0)

inline static constexpr unsigned int LLBGGDFHIBI_TypeDefinitionIndex = 56680;

class LLBGGDFHIBI
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* BHHDMEGCKGN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBGGDFHIBI__CTOR_OFFSET))(this);
	}
};
