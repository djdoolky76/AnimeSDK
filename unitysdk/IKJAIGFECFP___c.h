#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DOFIMCNIHEH;
namespace System { template <typename T> class Comparison_1; }

#define IKJAIGFECFP___C_FAFDJLDJIMN_OFFSET UNITYSDK_OFFSET(0x1B88DE90)
#define IKJAIGFECFP___C_HJCNPMICFKA_OFFSET UNITYSDK_OFFSET(0x1B88DE50)
#define IKJAIGFECFP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B88DE00)
#define IKJAIGFECFP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88DE40)

inline static constexpr unsigned int IKJAIGFECFP___c_TypeDefinitionIndex = 15946;

class IKJAIGFECFP___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::DOFIMCNIHEH*>** StaticGet___9__21_0()
	{
		return (::System::Comparison_1<::DOFIMCNIHEH*>**)Il2CppClass::FromTypeDefinitionIndex(IKJAIGFECFP___c_TypeDefinitionIndex)->GetStaticField(0x7630);
	}
	static ::System::Comparison_1<::DOFIMCNIHEH*>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::DOFIMCNIHEH*>**)Il2CppClass::FromTypeDefinitionIndex(IKJAIGFECFP___c_TypeDefinitionIndex)->GetStaticField(0x7638);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IKJAIGFECFP___c_TypeDefinitionIndex)->GetStaticField(0x7640);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKJAIGFECFP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJAIGFECFP___C__CTOR_OFFSET))(this);
	}

	::System::Int32 HJCNPMICFKA(::DOFIMCNIHEH* DPGFPHIMDEL, ::DOFIMCNIHEH* DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::DOFIMCNIHEH*, ::DOFIMCNIHEH*))((::PBYTE)hIl2Cpp + IKJAIGFECFP___C_HJCNPMICFKA_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}

	::System::Int32 FAFDJLDJIMN(::DOFIMCNIHEH* DPGFPHIMDEL, ::DOFIMCNIHEH* DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::DOFIMCNIHEH*, ::DOFIMCNIHEH*))((::PBYTE)hIl2Cpp + IKJAIGFECFP___C_FAFDJLDJIMN_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
