#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGIACIDLMFP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKDBFFKIOFN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11C57570)
#define FKDBFFKIOFN__CTOR_OFFSET UNITYSDK_OFFSET(0x11C574F0)

inline static constexpr unsigned int FKDBFFKIOFN_TypeDefinitionIndex = 67381;

class FKDBFFKIOFN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::HGIACIDLMFP*>* LJBPECKCCEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDBFFKIOFN__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDBFFKIOFN_PHOADBJGFBE_OFFSET))(this);
	}
};
