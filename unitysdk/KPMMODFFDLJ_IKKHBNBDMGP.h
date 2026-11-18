#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPMMODFFDLJ_IKKHBNBDMGP_OIJHACHBDFK_OFFSET UNITYSDK_OFFSET(0x15177050)
#define KPMMODFFDLJ_IKKHBNBDMGP__CTOR_OFFSET UNITYSDK_OFFSET(0x15177040)

inline static constexpr unsigned int KPMMODFFDLJ_IKKHBNBDMGP_TypeDefinitionIndex = 75597;

class KPMMODFFDLJ_IKKHBNBDMGP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* LEGJIOOLJLL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMMODFFDLJ_IKKHBNBDMGP__CTOR_OFFSET))(this);
	}

	::System::Void OIJHACHBDFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMMODFFDLJ_IKKHBNBDMGP_OIJHACHBDFK_OFFSET))(this);
	}
};
