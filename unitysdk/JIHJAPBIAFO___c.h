#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPEANAAFOLK.h"
#include "unitysdk/System/Object.h"

#define JIHJAPBIAFO___C_ELCDFAJBGLC_OFFSET UNITYSDK_OFFSET(0x1A8D4BA0)
#define JIHJAPBIAFO___C_MCBLMPNBBHO_OFFSET UNITYSDK_OFFSET(0x1A8D4B90)
#define JIHJAPBIAFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8D4B40)
#define JIHJAPBIAFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D4B80)

inline static constexpr unsigned int JIHJAPBIAFO___c_TypeDefinitionIndex = 22357;

class JIHJAPBIAFO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JIHJAPBIAFO___c_TypeDefinitionIndex)->GetStaticField(0xDE60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIHJAPBIAFO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHJAPBIAFO___C__CTOR_OFFSET))(this);
	}

	::System::Int32 MCBLMPNBBHO(::HPEANAAFOLK HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::HPEANAAFOLK))((::PBYTE)hIl2Cpp + JIHJAPBIAFO___C_MCBLMPNBBHO_OFFSET))(this, HAAEBCOBKFF);
	}

	::HPEANAAFOLK ELCDFAJBGLC(::System::Int32 HAAEBCOBKFF)
	{
		return ((::HPEANAAFOLK(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JIHJAPBIAFO___C_ELCDFAJBGLC_OFFSET))(this, HAAEBCOBKFF);
	}
};
