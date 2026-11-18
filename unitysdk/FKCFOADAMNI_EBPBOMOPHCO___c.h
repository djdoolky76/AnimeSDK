#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BHBOJCCMJBE;
namespace System { template <typename T1, typename T2> class Func_2; }

#define FKCFOADAMNI_EBPBOMOPHCO___C_BJJPBNOKPCD_OFFSET UNITYSDK_OFFSET(0x191F6800)
#define FKCFOADAMNI_EBPBOMOPHCO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x191F67B0)
#define FKCFOADAMNI_EBPBOMOPHCO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x191F67F0)

inline static constexpr unsigned int FKCFOADAMNI_EBPBOMOPHCO___c_TypeDefinitionIndex = 76365;

class FKCFOADAMNI_EBPBOMOPHCO___c : public ::System::Object
{
public:
	static ::System::Func_2<::BHBOJCCMJBE*, ::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::BHBOJCCMJBE*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FKCFOADAMNI_EBPBOMOPHCO___c_TypeDefinitionIndex)->GetStaticField(0x31A20);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FKCFOADAMNI_EBPBOMOPHCO___c_TypeDefinitionIndex)->GetStaticField(0x31A28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKCFOADAMNI_EBPBOMOPHCO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCFOADAMNI_EBPBOMOPHCO___C__CTOR_OFFSET))(this);
	}

	::System::Boolean BJJPBNOKPCD(::BHBOJCCMJBE* AHKCOALLCLK)
	{
		return ((::System::Boolean(*)(::PVOID, ::BHBOJCCMJBE*))((::PBYTE)hIl2Cpp + FKCFOADAMNI_EBPBOMOPHCO___C_BJJPBNOKPCD_OFFSET))(this, AHKCOALLCLK);
	}
};
