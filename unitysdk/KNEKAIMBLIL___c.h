#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_NGKHGAPPFDA;
class OAEFGCLEHHO;

#define KNEKAIMBLIL___C_FDBAFKEPFOE_OFFSET UNITYSDK_OFFSET(0x18642A20)
#define KNEKAIMBLIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x186429D0)
#define KNEKAIMBLIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18642A10)

inline static constexpr unsigned int KNEKAIMBLIL___c_TypeDefinitionIndex = 80717;

class KNEKAIMBLIL___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_NGKHGAPPFDA** StaticGet___9__7_2()
	{
		return (::IANDOOLAALI_NGKHGAPPFDA**)Il2CppClass::FromTypeDefinitionIndex(KNEKAIMBLIL___c_TypeDefinitionIndex)->GetStaticField(0x4E6C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KNEKAIMBLIL___c_TypeDefinitionIndex)->GetStaticField(0x4E6C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNEKAIMBLIL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEKAIMBLIL___C__CTOR_OFFSET))(this);
	}

	::System::Void FDBAFKEPFOE(::OAEFGCLEHHO* DAJPJKMHMFN)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNEKAIMBLIL___C_FDBAFKEPFOE_OFFSET))(this, DAJPJKMHMFN);
	}
};
