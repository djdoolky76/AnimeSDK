#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define CILGILHPHDK___C_FEIAIBKCOKP_OFFSET UNITYSDK_OFFSET(0x16958F30)
#define CILGILHPHDK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16958EE0)
#define CILGILHPHDK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16958F20)

inline static constexpr unsigned int CILGILHPHDK___c_TypeDefinitionIndex = 42554;

class CILGILHPHDK___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__3_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(CILGILHPHDK___c_TypeDefinitionIndex)->GetStaticField(0x45D80);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CILGILHPHDK___c_TypeDefinitionIndex)->GetStaticField(0x45D88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CILGILHPHDK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILGILHPHDK___C__CTOR_OFFSET))(this);
	}

	::System::Void FEIAIBKCOKP(::OAEFGCLEHHO* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CILGILHPHDK___C_FEIAIBKCOKP_OFFSET))(this, KGFGOODAFDH);
	}
};
