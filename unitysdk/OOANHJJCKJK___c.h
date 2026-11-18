#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EHGPCEMPJEO;
namespace System { template <typename T> class Comparison_1; }

#define OOANHJJCKJK___C_LNMDBPPJJPK_OFFSET UNITYSDK_OFFSET(0x1AFC3E70)
#define OOANHJJCKJK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFC3E20)
#define OOANHJJCKJK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC3E60)

inline static constexpr unsigned int OOANHJJCKJK___c_TypeDefinitionIndex = 87849;

class OOANHJJCKJK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OOANHJJCKJK___c_TypeDefinitionIndex)->GetStaticField(0x492D0);
	}
	static ::System::Comparison_1<::EHGPCEMPJEO*>** StaticGet___9__19_0()
	{
		return (::System::Comparison_1<::EHGPCEMPJEO*>**)Il2CppClass::FromTypeDefinitionIndex(OOANHJJCKJK___c_TypeDefinitionIndex)->GetStaticField(0x492D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOANHJJCKJK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOANHJJCKJK___C__CTOR_OFFSET))(this);
	}

	::System::Int32 LNMDBPPJJPK(::EHGPCEMPJEO* EOAPCEFLJBC, ::EHGPCEMPJEO* ILKGLINPINI)
	{
		return ((::System::Int32(*)(::PVOID, ::EHGPCEMPJEO*, ::EHGPCEMPJEO*))((::PBYTE)hIl2Cpp + OOANHJJCKJK___C_LNMDBPPJJPK_OFFSET))(this, EOAPCEFLJBC, ILKGLINPINI);
	}
};
