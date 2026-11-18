#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KHDIGJGEDFD;

#define KHDIGJGEDFD___C_CKBIGOFAOFP_OFFSET UNITYSDK_OFFSET(0x1FAC1A70)
#define KHDIGJGEDFD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAC1A20)
#define KHDIGJGEDFD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAC1A60)

inline static constexpr unsigned int KHDIGJGEDFD___c_TypeDefinitionIndex = 18181;

class KHDIGJGEDFD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KHDIGJGEDFD___c_TypeDefinitionIndex)->GetStaticField(0x7FB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHDIGJGEDFD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDIGJGEDFD___C__CTOR_OFFSET))(this);
	}

	::KHDIGJGEDFD* CKBIGOFAOFP()
	{
		return ((::KHDIGJGEDFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDIGJGEDFD___C_CKBIGOFAOFP_OFFSET))(this);
	}
};
