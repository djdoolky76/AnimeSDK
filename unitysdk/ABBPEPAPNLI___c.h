#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define ABBPEPAPNLI___C_HDMDBJMMALL_OFFSET UNITYSDK_OFFSET(0x16FD2850)
#define ABBPEPAPNLI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FD2800)
#define ABBPEPAPNLI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD2840)

inline static constexpr unsigned int ABBPEPAPNLI___c_TypeDefinitionIndex = 81838;

class ABBPEPAPNLI___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__4_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(ABBPEPAPNLI___c_TypeDefinitionIndex)->GetStaticField(0x3D2B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ABBPEPAPNLI___c_TypeDefinitionIndex)->GetStaticField(0x3D2B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABBPEPAPNLI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBPEPAPNLI___C__CTOR_OFFSET))(this);
	}

	::System::Void HDMDBJMMALL(::OAEFGCLEHHO* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + ABBPEPAPNLI___C_HDMDBJMMALL_OFFSET))(this, KGFGOODAFDH);
	}
};
