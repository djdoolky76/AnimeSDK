#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define PCIDFFDEGGL___C_AOOBHACJAJL_OFFSET UNITYSDK_OFFSET(0x150B38D0)
#define PCIDFFDEGGL___C_JEJEBFDIEEE_OFFSET UNITYSDK_OFFSET(0x150B3800)
#define PCIDFFDEGGL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x150B37B0)
#define PCIDFFDEGGL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x150B37F0)

inline static constexpr unsigned int PCIDFFDEGGL___c_TypeDefinitionIndex = 65550;

class PCIDFFDEGGL___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PCIDFFDEGGL___c_TypeDefinitionIndex)->GetStaticField(0x47890);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PCIDFFDEGGL___c_TypeDefinitionIndex)->GetStaticField(0x47898);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PCIDFFDEGGL___c_TypeDefinitionIndex)->GetStaticField(0x478A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCIDFFDEGGL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIDFFDEGGL___C__CTOR_OFFSET))(this);
	}

	::System::Boolean JEJEBFDIEEE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIDFFDEGGL___C_JEJEBFDIEEE_OFFSET))(this);
	}

	::System::Boolean AOOBHACJAJL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIDFFDEGGL___C_AOOBHACJAJL_OFFSET))(this);
	}
};
