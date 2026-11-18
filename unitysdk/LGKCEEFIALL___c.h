#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGALFHMPJLF;
namespace System { template <typename T> class Comparison_1; }

#define LGKCEEFIALL___C_ODAHBNHBJCJ_OFFSET UNITYSDK_OFFSET(0x12560E40)
#define LGKCEEFIALL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12560DF0)
#define LGKCEEFIALL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12560E30)

inline static constexpr unsigned int LGKCEEFIALL___c_TypeDefinitionIndex = 88204;

class LGKCEEFIALL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LGKCEEFIALL___c_TypeDefinitionIndex)->GetStaticField(0x41630);
	}
	static ::System::Comparison_1<::AGALFHMPJLF*>** StaticGet___9__12_0()
	{
		return (::System::Comparison_1<::AGALFHMPJLF*>**)Il2CppClass::FromTypeDefinitionIndex(LGKCEEFIALL___c_TypeDefinitionIndex)->GetStaticField(0x41638);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGKCEEFIALL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKCEEFIALL___C__CTOR_OFFSET))(this);
	}

	::System::Int32 ODAHBNHBJCJ(::AGALFHMPJLF* EJCBEJMGFAJ, ::AGALFHMPJLF* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::AGALFHMPJLF*, ::AGALFHMPJLF*))((::PBYTE)hIl2Cpp + LGKCEEFIALL___C_ODAHBNHBJCJ_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
