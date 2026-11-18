#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define KGLBDGFAGAP___C_JLGKANLCJNO_OFFSET UNITYSDK_OFFSET(0x1A2C8830)
#define KGLBDGFAGAP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2C87E0)
#define KGLBDGFAGAP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C8820)

inline static constexpr unsigned int KGLBDGFAGAP___c_TypeDefinitionIndex = 91865;

class KGLBDGFAGAP___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__6_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(KGLBDGFAGAP___c_TypeDefinitionIndex)->GetStaticField(0x4A0B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KGLBDGFAGAP___c_TypeDefinitionIndex)->GetStaticField(0x4A0B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGLBDGFAGAP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLBDGFAGAP___C__CTOR_OFFSET))(this);
	}

	::System::Void JLGKANLCJNO(::OAEFGCLEHHO* JOHLBNDFOHE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KGLBDGFAGAP___C_JLGKANLCJNO_OFFSET))(this, JOHLBNDFOHE);
	}
};
