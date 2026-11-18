#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFKKOGMDDEN;

#define EFKKOGMDDEN___C_PHBPOFCIOMJ_OFFSET UNITYSDK_OFFSET(0x1FCDC810)
#define EFKKOGMDDEN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCDC7C0)
#define EFKKOGMDDEN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCDC800)

inline static constexpr unsigned int EFKKOGMDDEN___c_TypeDefinitionIndex = 18153;

class EFKKOGMDDEN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EFKKOGMDDEN___c_TypeDefinitionIndex)->GetStaticField(0x8640);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFKKOGMDDEN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKKOGMDDEN___C__CTOR_OFFSET))(this);
	}

	::EFKKOGMDDEN* PHBPOFCIOMJ()
	{
		return ((::EFKKOGMDDEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKKOGMDDEN___C_PHBPOFCIOMJ_OFFSET))(this);
	}
};
