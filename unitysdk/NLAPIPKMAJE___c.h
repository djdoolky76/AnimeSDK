#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOJKLCGGPAK;
namespace System { template <typename T1, typename T2> class Func_2; }

#define NLAPIPKMAJE___C_DGDHGIBKJJF_OFFSET UNITYSDK_OFFSET(0x1729A700)
#define NLAPIPKMAJE___C_EPJEFPFNEHO_OFFSET UNITYSDK_OFFSET(0x1729A6E0)
#define NLAPIPKMAJE___C_IFDBLMHGMEK_OFFSET UNITYSDK_OFFSET(0x1729A860)
#define NLAPIPKMAJE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1729A690)
#define NLAPIPKMAJE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1729A6D0)

inline static constexpr unsigned int NLAPIPKMAJE___c_TypeDefinitionIndex = 78759;

class NLAPIPKMAJE___c : public ::System::Object
{
public:
	static ::System::Func_2<::AOJKLCGGPAK*, ::System::Boolean>** StaticGet___9__10_3()
	{
		return (::System::Func_2<::AOJKLCGGPAK*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NLAPIPKMAJE___c_TypeDefinitionIndex)->GetStaticField(0x4C6B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NLAPIPKMAJE___c_TypeDefinitionIndex)->GetStaticField(0x4C6B8);
	}
	static ::System::Func_2<::System::Int64, ::System::Boolean>** StaticGet___9__10_2()
	{
		return (::System::Func_2<::System::Int64, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NLAPIPKMAJE___c_TypeDefinitionIndex)->GetStaticField(0x4C6C0);
	}
	static ::System::Func_2<::AOJKLCGGPAK*, ::System::Int64>** StaticGet___9__10_4()
	{
		return (::System::Func_2<::AOJKLCGGPAK*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(NLAPIPKMAJE___c_TypeDefinitionIndex)->GetStaticField(0x4C6C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLAPIPKMAJE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAPIPKMAJE___C__CTOR_OFFSET))(this);
	}

	::System::Int64 EPJEFPFNEHO(::AOJKLCGGPAK* PLBEAIIJADM)
	{
		return ((::System::Int64(*)(::PVOID, ::AOJKLCGGPAK*))((::PBYTE)hIl2Cpp + NLAPIPKMAJE___C_EPJEFPFNEHO_OFFSET))(this, PLBEAIIJADM);
	}

	::System::Boolean DGDHGIBKJJF(::System::Int64 FBNHJEFGACN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NLAPIPKMAJE___C_DGDHGIBKJJF_OFFSET))(this, FBNHJEFGACN);
	}

	::System::Boolean IFDBLMHGMEK(::AOJKLCGGPAK* PLBEAIIJADM)
	{
		return ((::System::Boolean(*)(::PVOID, ::AOJKLCGGPAK*))((::PBYTE)hIl2Cpp + NLAPIPKMAJE___C_IFDBLMHGMEK_OFFSET))(this, PLBEAIIJADM);
	}
};
