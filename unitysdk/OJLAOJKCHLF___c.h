#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_NGKHGAPPFDA;
class OAEFGCLEHHO;

#define OJLAOJKCHLF___C_GIGNBACLCAP_OFFSET UNITYSDK_OFFSET(0x16C1B510)
#define OJLAOJKCHLF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C1B4C0)
#define OJLAOJKCHLF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1B500)

inline static constexpr unsigned int OJLAOJKCHLF___c_TypeDefinitionIndex = 63864;

class OJLAOJKCHLF___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_NGKHGAPPFDA** StaticGet___9__97_2()
	{
		return (::IANDOOLAALI_NGKHGAPPFDA**)Il2CppClass::FromTypeDefinitionIndex(OJLAOJKCHLF___c_TypeDefinitionIndex)->GetStaticField(0x3CE20);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OJLAOJKCHLF___c_TypeDefinitionIndex)->GetStaticField(0x3CE28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJLAOJKCHLF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLAOJKCHLF___C__CTOR_OFFSET))(this);
	}

	::System::Void GIGNBACLCAP(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OJLAOJKCHLF___C_GIGNBACLCAP_OFFSET))(this, NAPFALLANDL);
	}
};
