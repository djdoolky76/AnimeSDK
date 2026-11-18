#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AHEBIHEPEMG;

#define AHEBIHEPEMG___C_MCBLMPNBBHO_OFFSET UNITYSDK_OFFSET(0x1FFC5270)
#define AHEBIHEPEMG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFC5220)
#define AHEBIHEPEMG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFC5260)

inline static constexpr unsigned int AHEBIHEPEMG___c_TypeDefinitionIndex = 18071;

class AHEBIHEPEMG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AHEBIHEPEMG___c_TypeDefinitionIndex)->GetStaticField(0x8500);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHEBIHEPEMG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEBIHEPEMG___C__CTOR_OFFSET))(this);
	}

	::AHEBIHEPEMG* MCBLMPNBBHO()
	{
		return ((::AHEBIHEPEMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEBIHEPEMG___C_MCBLMPNBBHO_OFFSET))(this);
	}
};
