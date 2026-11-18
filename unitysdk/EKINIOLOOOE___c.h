#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define EKINIOLOOOE___C_BJHGOOODLFB_OFFSET UNITYSDK_OFFSET(0x1426C620)
#define EKINIOLOOOE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1426C5D0)
#define EKINIOLOOOE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1426C610)

inline static constexpr unsigned int EKINIOLOOOE___c_TypeDefinitionIndex = 51594;

class EKINIOLOOOE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EKINIOLOOOE___c_TypeDefinitionIndex)->GetStaticField(0x3ABC0);
	}
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__6_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(EKINIOLOOOE___c_TypeDefinitionIndex)->GetStaticField(0x3ABC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKINIOLOOOE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKINIOLOOOE___C__CTOR_OFFSET))(this);
	}

	::System::Void BJHGOOODLFB(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EKINIOLOOOE___C_BJHGOOODLFB_OFFSET))(this, NAPFALLANDL);
	}
};
