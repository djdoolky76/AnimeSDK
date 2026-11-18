#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HCAJMGAPEAJ;
namespace System { template <typename T> class Comparison_1; }

#define NEAMGDNOKGA___C_KHDPHKAKKPD_OFFSET UNITYSDK_OFFSET(0x18FB1890)
#define NEAMGDNOKGA___C_OAACNOKMHDM_OFFSET UNITYSDK_OFFSET(0x18FB18F0)
#define NEAMGDNOKGA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FB1840)
#define NEAMGDNOKGA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB1880)

inline static constexpr unsigned int NEAMGDNOKGA___c_TypeDefinitionIndex = 57836;

class NEAMGDNOKGA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NEAMGDNOKGA___c_TypeDefinitionIndex)->GetStaticField(0x424B0);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__24_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NEAMGDNOKGA___c_TypeDefinitionIndex)->GetStaticField(0x424B8);
	}
	static ::System::Comparison_1<::HCAJMGAPEAJ*>** StaticGet___9__12_0()
	{
		return (::System::Comparison_1<::HCAJMGAPEAJ*>**)Il2CppClass::FromTypeDefinitionIndex(NEAMGDNOKGA___c_TypeDefinitionIndex)->GetStaticField(0x424C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEAMGDNOKGA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAMGDNOKGA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 KHDPHKAKKPD(::HCAJMGAPEAJ* EJCBEJMGFAJ, ::HCAJMGAPEAJ* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::HCAJMGAPEAJ*, ::HCAJMGAPEAJ*))((::PBYTE)hIl2Cpp + NEAMGDNOKGA___C_KHDPHKAKKPD_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Int32 OAACNOKMHDM(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEAMGDNOKGA___C_OAACNOKMHDM_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
