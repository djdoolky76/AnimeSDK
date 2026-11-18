#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define FGOEJNLJPPM___C_HHFBAPPHBMP_OFFSET UNITYSDK_OFFSET(0x140F4910)
#define FGOEJNLJPPM___C_IEPBKFJDICK_OFFSET UNITYSDK_OFFSET(0x140F4900)
#define FGOEJNLJPPM___C_LPNOHDBFPFM_OFFSET UNITYSDK_OFFSET(0x140F4920)
#define FGOEJNLJPPM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x140F48B0)
#define FGOEJNLJPPM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x140F48F0)

inline static constexpr unsigned int FGOEJNLJPPM___c_TypeDefinitionIndex = 54596;

class FGOEJNLJPPM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FGOEJNLJPPM___c_TypeDefinitionIndex)->GetStaticField(0x49B20);
	}
	static ::System::Action** StaticGet___9__30_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FGOEJNLJPPM___c_TypeDefinitionIndex)->GetStaticField(0x49B28);
	}
	static ::System::Action** StaticGet___9__30_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FGOEJNLJPPM___c_TypeDefinitionIndex)->GetStaticField(0x49B30);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__32_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FGOEJNLJPPM___c_TypeDefinitionIndex)->GetStaticField(0x49B38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGOEJNLJPPM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOEJNLJPPM___C__CTOR_OFFSET))(this);
	}

	::System::Void IEPBKFJDICK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOEJNLJPPM___C_IEPBKFJDICK_OFFSET))(this);
	}

	::System::Boolean HHFBAPPHBMP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOEJNLJPPM___C_HHFBAPPHBMP_OFFSET))(this);
	}

	::System::Void LPNOHDBFPFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOEJNLJPPM___C_LPNOHDBFPFM_OFFSET))(this);
	}
};
