#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define HPFBEABCPEO_LIJDKMPDMJA_OFFSET UNITYSDK_OFFSET(0x7C8C20)
#define HPFBEABCPEO_PKKEMDNIDLK_OFFSET UNITYSDK_OFFSET(0x7C8BC0)
#define HPFBEABCPEO__CTOR_OFFSET UNITYSDK_OFFSET(0x3D9940)

inline static constexpr unsigned int HPFBEABCPEO_TypeDefinitionIndex = 67838;

struct alignas(4) HPFBEABCPEO
{
	::System::Int32 DBGJNFKBEJK; // 0x10
	::System::Int32 HFPCJJLPEBD; // 0x14
	::System::Int32 GHFOHMKBDOE; // 0x18

	::System::Void _ctor(::System::Int32 PKMFBJMJCOO, ::System::Int32 OIKFFGKDHME, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HPFBEABCPEO__CTOR_OFFSET))(this, PKMFBJMJCOO, OIKFFGKDHME, JHFKDGBCOBA);
	}

	::System::Boolean PKKEMDNIDLK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPFBEABCPEO_PKKEMDNIDLK_OFFSET))(this);
	}

	::System::Boolean LIJDKMPDMJA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPFBEABCPEO_LIJDKMPDMJA_OFFSET))(this);
	}
};
