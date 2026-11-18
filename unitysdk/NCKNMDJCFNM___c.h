#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NCKNMDJCFNM;

#define NCKNMDJCFNM___C_KAMODDMEPFH_OFFSET UNITYSDK_OFFSET(0x1FF6E4C0)
#define NCKNMDJCFNM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF6E470)
#define NCKNMDJCFNM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6E4B0)

inline static constexpr unsigned int NCKNMDJCFNM___c_TypeDefinitionIndex = 18167;

class NCKNMDJCFNM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NCKNMDJCFNM___c_TypeDefinitionIndex)->GetStaticField(0x8490);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCKNMDJCFNM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKNMDJCFNM___C__CTOR_OFFSET))(this);
	}

	::NCKNMDJCFNM* KAMODDMEPFH()
	{
		return ((::NCKNMDJCFNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKNMDJCFNM___C_KAMODDMEPFH_OFFSET))(this);
	}
};
