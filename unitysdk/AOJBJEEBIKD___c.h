#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCFOAKMODLK.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define AOJBJEEBIKD___C_DMONLNPFNKE_OFFSET UNITYSDK_OFFSET(0x14C24640)
#define AOJBJEEBIKD___C_NIEJBCOOAAK_OFFSET UNITYSDK_OFFSET(0x14C24630)
#define AOJBJEEBIKD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C245E0)
#define AOJBJEEBIKD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C24620)

inline static constexpr unsigned int AOJBJEEBIKD___c_TypeDefinitionIndex = 90637;

class AOJBJEEBIKD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AOJBJEEBIKD___c_TypeDefinitionIndex)->GetStaticField(0x3A370);
	}
	static ::System::Func_2<::FCFOAKMODLK, ::System::UInt32>** StaticGet___9__37_0()
	{
		return (::System::Func_2<::FCFOAKMODLK, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AOJBJEEBIKD___c_TypeDefinitionIndex)->GetStaticField(0x3A378);
	}
	static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__37_1()
	{
		return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AOJBJEEBIKD___c_TypeDefinitionIndex)->GetStaticField(0x3A380);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOJBJEEBIKD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJBJEEBIKD___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 NIEJBCOOAAK(::FCFOAKMODLK IPMMCGDMODG)
	{
		return ((::System::UInt32(*)(::PVOID, ::FCFOAKMODLK))((::PBYTE)hIl2Cpp + AOJBJEEBIKD___C_NIEJBCOOAAK_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Boolean DMONLNPFNKE(::System::UInt32 IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AOJBJEEBIKD___C_DMONLNPFNKE_OFFSET))(this, IPMMCGDMODG);
	}
};
