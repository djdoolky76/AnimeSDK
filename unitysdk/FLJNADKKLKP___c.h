#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define FLJNADKKLKP___C_JCEKOBPOLGL_OFFSET UNITYSDK_OFFSET(0x156C5560)
#define FLJNADKKLKP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156C5510)
#define FLJNADKKLKP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156C5550)

inline static constexpr unsigned int FLJNADKKLKP___c_TypeDefinitionIndex = 52768;

class FLJNADKKLKP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FLJNADKKLKP___c_TypeDefinitionIndex)->GetStaticField(0x43540);
	}
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__1_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(FLJNADKKLKP___c_TypeDefinitionIndex)->GetStaticField(0x43548);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLJNADKKLKP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLJNADKKLKP___C__CTOR_OFFSET))(this);
	}

	::System::Void JCEKOBPOLGL(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FLJNADKKLKP___C_JCEKOBPOLGL_OFFSET))(this, NAPFALLANDL);
	}
};
