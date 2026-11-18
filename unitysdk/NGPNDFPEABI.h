#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHJPJMKIHBG.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NGPNDFPEABI__CCTOR_OFFSET UNITYSDK_OFFSET(0x13147380)
#define NGPNDFPEABI__CTOR_OFFSET UNITYSDK_OFFSET(0x131472F0)

inline static constexpr unsigned int NGPNDFPEABI_TypeDefinitionIndex = 75461;

class NGPNDFPEABI : public ::System::Object
{
public:
	static ::NGPNDFPEABI** StaticGet_FDJHEBHLJLD()
	{
		return (::NGPNDFPEABI**)Il2CppClass::FromTypeDefinitionIndex(NGPNDFPEABI_TypeDefinitionIndex)->GetStaticField(0x32910);
	}
	::System::Collections::Generic::List_1<::FHJPJMKIHBG>* KBKNODCCMJB; // 0x10
	::System::Collections::Generic::List_1<::FHJPJMKIHBG>* HGBADPMBENM; // 0x18
	::System::Int64 DDGAHOOPGOL; // 0x20
	::System::Int64 DNAFAKEFCDK; // 0x28
	::System::Int64 IOAEFDLKPJJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPNDFPEABI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGPNDFPEABI__CCTOR_OFFSET))();
	}
};
