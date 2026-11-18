#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define FDHCNHKGIJG___C_PFOEEGAPKFF_OFFSET UNITYSDK_OFFSET(0x1428ABE0)
#define FDHCNHKGIJG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1428AB90)
#define FDHCNHKGIJG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1428ABD0)

inline static constexpr unsigned int FDHCNHKGIJG___c_TypeDefinitionIndex = 57231;

class FDHCNHKGIJG___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__4_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(FDHCNHKGIJG___c_TypeDefinitionIndex)->GetStaticField(0x3AC70);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FDHCNHKGIJG___c_TypeDefinitionIndex)->GetStaticField(0x3AC78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDHCNHKGIJG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHCNHKGIJG___C__CTOR_OFFSET))(this);
	}

	::System::Void PFOEEGAPKFF(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FDHCNHKGIJG___C_PFOEEGAPKFF_OFFSET))(this, NAPFALLANDL);
	}
};
