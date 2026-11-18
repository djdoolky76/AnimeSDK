#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KGHIGBFBOME;

#define KGHIGBFBOME___C_MCBLMPNBBHO_OFFSET UNITYSDK_OFFSET(0x1FB37400)
#define KGHIGBFBOME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB373B0)
#define KGHIGBFBOME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB373F0)

inline static constexpr unsigned int KGHIGBFBOME___c_TypeDefinitionIndex = 18063;

class KGHIGBFBOME___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KGHIGBFBOME___c_TypeDefinitionIndex)->GetStaticField(0x8610);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGHIGBFBOME___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHIGBFBOME___C__CTOR_OFFSET))(this);
	}

	::KGHIGBFBOME* MCBLMPNBBHO()
	{
		return ((::KGHIGBFBOME*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHIGBFBOME___C_MCBLMPNBBHO_OFFSET))(this);
	}
};
