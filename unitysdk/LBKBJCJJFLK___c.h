#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LBKBJCJJFLK;

#define LBKBJCJJFLK___C_BHBDGFFPOPJ_OFFSET UNITYSDK_OFFSET(0x1FFC6A70)
#define LBKBJCJJFLK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFC6A20)
#define LBKBJCJJFLK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFC6A60)

inline static constexpr unsigned int LBKBJCJJFLK___c_TypeDefinitionIndex = 18240;

class LBKBJCJJFLK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LBKBJCJJFLK___c_TypeDefinitionIndex)->GetStaticField(0x8580);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBKBJCJJFLK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKBJCJJFLK___C__CTOR_OFFSET))(this);
	}

	::LBKBJCJJFLK* BHBDGFFPOPJ()
	{
		return ((::LBKBJCJJFLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKBJCJJFLK___C_BHBDGFFPOPJ_OFFSET))(this);
	}
};
