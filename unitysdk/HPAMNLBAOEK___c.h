#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOJKLCGGPAK;
namespace System { template <typename T> class Comparison_1; }

#define HPAMNLBAOEK___C_LACLHOAMBAK_OFFSET UNITYSDK_OFFSET(0x19E393E0)
#define HPAMNLBAOEK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E39390)
#define HPAMNLBAOEK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19E393D0)

inline static constexpr unsigned int HPAMNLBAOEK___c_TypeDefinitionIndex = 85663;

class HPAMNLBAOEK___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::AOJKLCGGPAK*>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::AOJKLCGGPAK*>**)Il2CppClass::FromTypeDefinitionIndex(HPAMNLBAOEK___c_TypeDefinitionIndex)->GetStaticField(0x4BB00);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HPAMNLBAOEK___c_TypeDefinitionIndex)->GetStaticField(0x4BB08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPAMNLBAOEK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAMNLBAOEK___C__CTOR_OFFSET))(this);
	}

	::System::Int32 LACLHOAMBAK(::AOJKLCGGPAK* EJCBEJMGFAJ, ::AOJKLCGGPAK* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::AOJKLCGGPAK*, ::AOJKLCGGPAK*))((::PBYTE)hIl2Cpp + HPAMNLBAOEK___C_LACLHOAMBAK_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
