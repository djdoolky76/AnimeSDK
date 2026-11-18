#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PCHPABCILNN.h"
#include "unitysdk/EEMLFAEOJLK.h"

class FICPDKBMDCK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHICMDJDPBL_LLIOGJLKLMO_OFFSET UNITYSDK_OFFSET(0x15EBCF70)
#define IHICMDJDPBL__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBD210)

inline static constexpr unsigned int IHICMDJDPBL_TypeDefinitionIndex = 43576;

class IHICMDJDPBL : public ::PCHPABCILNN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHICMDJDPBL__CTOR_OFFSET))(this);
	}

	::System::Void LLIOGJLKLMO(::System::Collections::Generic::List_1<::EEMLFAEOJLK>* HKHFKFGFIJK, ::FICPDKBMDCK* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EEMLFAEOJLK>*, ::FICPDKBMDCK*))((::PBYTE)hIl2Cpp + IHICMDJDPBL_LLIOGJLKLMO_OFFSET))(this, HKHFKFGFIJK, KOIBHLHLMFC);
	}
};
