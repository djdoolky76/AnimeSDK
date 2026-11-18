#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define HPIILKMDMFO___C_DFADLLMPEAO_OFFSET UNITYSDK_OFFSET(0x1819BEC0)
#define HPIILKMDMFO___C_JFFPFMIFENA_OFFSET UNITYSDK_OFFSET(0x1819BEB0)
#define HPIILKMDMFO___C_LCMMMPPCFAP_OFFSET UNITYSDK_OFFSET(0x1819BED0)
#define HPIILKMDMFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1819BE60)
#define HPIILKMDMFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1819BEA0)

inline static constexpr unsigned int HPIILKMDMFO___c_TypeDefinitionIndex = 58770;

class HPIILKMDMFO___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__118_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(HPIILKMDMFO___c_TypeDefinitionIndex)->GetStaticField(0x40CF0);
	}
	static ::System::Action** StaticGet___9__118_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(HPIILKMDMFO___c_TypeDefinitionIndex)->GetStaticField(0x40CF8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HPIILKMDMFO___c_TypeDefinitionIndex)->GetStaticField(0x40D00);
	}
	static ::System::Action** StaticGet___9__118_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(HPIILKMDMFO___c_TypeDefinitionIndex)->GetStaticField(0x40D08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPIILKMDMFO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIILKMDMFO___C__CTOR_OFFSET))(this);
	}

	::System::Void JFFPFMIFENA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIILKMDMFO___C_JFFPFMIFENA_OFFSET))(this);
	}

	::System::Void DFADLLMPEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIILKMDMFO___C_DFADLLMPEAO_OFFSET))(this);
	}

	::System::Void LCMMMPPCFAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIILKMDMFO___C_LCMMMPPCFAP_OFFSET))(this);
	}
};
