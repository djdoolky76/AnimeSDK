#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KAOAMGFKCFO;

#define BLHGKIBDOGI___C_DICPCCMEPGD_OFFSET UNITYSDK_OFFSET(0x15081610)
#define BLHGKIBDOGI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x150815C0)
#define BLHGKIBDOGI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15081600)

inline static constexpr unsigned int BLHGKIBDOGI___c_TypeDefinitionIndex = 91522;

class BLHGKIBDOGI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BLHGKIBDOGI___c_TypeDefinitionIndex)->GetStaticField(0x3A460);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLHGKIBDOGI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGKIBDOGI___C__CTOR_OFFSET))(this);
	}

	::System::Boolean DICPCCMEPGD(::KAOAMGFKCFO* POJEDACFDOF)
	{
		return ((::System::Boolean(*)(::PVOID, ::KAOAMGFKCFO*))((::PBYTE)hIl2Cpp + BLHGKIBDOGI___C_DICPCCMEPGD_OFFSET))(this, POJEDACFDOF);
	}
};
