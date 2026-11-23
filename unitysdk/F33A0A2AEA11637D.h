#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class EF243D7C92EBFB7C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F33A0A2AEA11637D_ED047C269BE67F90_OFFSET UNITYSDK_OFFSET(0x165A480)
#define F33A0A2AEA11637D__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F33A0A2AEA11637D_TypeDefinitionIndex = 7804;

class F33A0A2AEA11637D : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::List_1<::EF243D7C92EBFB7C*>* EF2E7199490A372B; // 0x38

	::System::Void ED047C269BE67F90(::System::Collections::Generic::List_1<::EF243D7C92EBFB7C*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EF243D7C92EBFB7C*>*))((::PBYTE)hIl2Cpp + F33A0A2AEA11637D_ED047C269BE67F90_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F33A0A2AEA11637D__CTOR_OFFSET))(this);
	}
};
