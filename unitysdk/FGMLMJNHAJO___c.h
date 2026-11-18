#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGMLMJNHAJO;

#define FGMLMJNHAJO___C_KAMODDMEPFH_OFFSET UNITYSDK_OFFSET(0x1FCDE6E0)
#define FGMLMJNHAJO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCDE690)
#define FGMLMJNHAJO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCDE6D0)

inline static constexpr unsigned int FGMLMJNHAJO___c_TypeDefinitionIndex = 18295;

class FGMLMJNHAJO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FGMLMJNHAJO___c_TypeDefinitionIndex)->GetStaticField(0x83E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGMLMJNHAJO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMLMJNHAJO___C__CTOR_OFFSET))(this);
	}

	::FGMLMJNHAJO* KAMODDMEPFH()
	{
		return ((::FGMLMJNHAJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMLMJNHAJO___C_KAMODDMEPFH_OFFSET))(this);
	}
};
