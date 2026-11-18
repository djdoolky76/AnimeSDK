#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class INNLDBBGMFK;
namespace System { template <typename T> class Comparison_1; }

#define MBDEKPBLOJJ___C_INIJADFIKGE_OFFSET UNITYSDK_OFFSET(0x18E02800)
#define MBDEKPBLOJJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E027B0)
#define MBDEKPBLOJJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18E027F0)

inline static constexpr unsigned int MBDEKPBLOJJ___c_TypeDefinitionIndex = 17470;

class MBDEKPBLOJJ___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::INNLDBBGMFK*>** StaticGet___9__20_0()
	{
		return (::System::Comparison_1<::INNLDBBGMFK*>**)Il2CppClass::FromTypeDefinitionIndex(MBDEKPBLOJJ___c_TypeDefinitionIndex)->GetStaticField(0x79C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MBDEKPBLOJJ___c_TypeDefinitionIndex)->GetStaticField(0x79C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBDEKPBLOJJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDEKPBLOJJ___C__CTOR_OFFSET))(this);
	}

	::System::Int32 INIJADFIKGE(::INNLDBBGMFK* EJCBEJMGFAJ, ::INNLDBBGMFK* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::INNLDBBGMFK*, ::INNLDBBGMFK*))((::PBYTE)hIl2Cpp + MBDEKPBLOJJ___C_INIJADFIKGE_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
