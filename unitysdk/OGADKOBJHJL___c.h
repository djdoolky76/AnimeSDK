#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define OGADKOBJHJL___C_HNOEGOCDPKI_OFFSET UNITYSDK_OFFSET(0x1292DAC0)
#define OGADKOBJHJL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1292DA70)
#define OGADKOBJHJL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1292DAB0)

inline static constexpr unsigned int OGADKOBJHJL___c_TypeDefinitionIndex = 91631;

class OGADKOBJHJL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OGADKOBJHJL___c_TypeDefinitionIndex)->GetStaticField(0x36060);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OGADKOBJHJL___c_TypeDefinitionIndex)->GetStaticField(0x36068);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGADKOBJHJL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGADKOBJHJL___C__CTOR_OFFSET))(this);
	}

	::System::Int32 HNOEGOCDPKI(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OGADKOBJHJL___C_HNOEGOCDPKI_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
