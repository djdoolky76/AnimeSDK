#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BEFBBPMKPKK;

#define BEFBBPMKPKK___C_EBMADFPIGDF_OFFSET UNITYSDK_OFFSET(0x1FFC5300)
#define BEFBBPMKPKK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFC52B0)
#define BEFBBPMKPKK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFC52F0)

inline static constexpr unsigned int BEFBBPMKPKK___c_TypeDefinitionIndex = 18058;

class BEFBBPMKPKK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BEFBBPMKPKK___c_TypeDefinitionIndex)->GetStaticField(0x8550);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEFBBPMKPKK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFBBPMKPKK___C__CTOR_OFFSET))(this);
	}

	::BEFBBPMKPKK* EBMADFPIGDF()
	{
		return ((::BEFBBPMKPKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFBBPMKPKK___C_EBMADFPIGDF_OFFSET))(this);
	}
};
