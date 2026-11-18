#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ONMFMKHDLMO;
namespace System { template <typename T> class Comparison_1; }

#define JCKHHCLBAOA___C_FCDPFIKNOJM_OFFSET UNITYSDK_OFFSET(0x13ABF430)
#define JCKHHCLBAOA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13ABF3E0)
#define JCKHHCLBAOA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13ABF420)

inline static constexpr unsigned int JCKHHCLBAOA___c_TypeDefinitionIndex = 76402;

class JCKHHCLBAOA___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::ONMFMKHDLMO*>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::ONMFMKHDLMO*>**)Il2CppClass::FromTypeDefinitionIndex(JCKHHCLBAOA___c_TypeDefinitionIndex)->GetStaticField(0x51500);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JCKHHCLBAOA___c_TypeDefinitionIndex)->GetStaticField(0x51508);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCKHHCLBAOA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKHHCLBAOA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 FCDPFIKNOJM(::ONMFMKHDLMO* EJCBEJMGFAJ, ::ONMFMKHDLMO* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::ONMFMKHDLMO*, ::ONMFMKHDLMO*))((::PBYTE)hIl2Cpp + JCKHHCLBAOA___C_FCDPFIKNOJM_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
