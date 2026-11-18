#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KLENKMHFIAO;

#define KLENKMHFIAO___C_JEDANGPFBOA_OFFSET UNITYSDK_OFFSET(0x1FAC1B00)
#define KLENKMHFIAO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAC1AB0)
#define KLENKMHFIAO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAC1AF0)

inline static constexpr unsigned int KLENKMHFIAO___c_TypeDefinitionIndex = 18160;

class KLENKMHFIAO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KLENKMHFIAO___c_TypeDefinitionIndex)->GetStaticField(0x85A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLENKMHFIAO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLENKMHFIAO___C__CTOR_OFFSET))(this);
	}

	::KLENKMHFIAO* JEDANGPFBOA()
	{
		return ((::KLENKMHFIAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLENKMHFIAO___C_JEDANGPFBOA_OFFSET))(this);
	}
};
