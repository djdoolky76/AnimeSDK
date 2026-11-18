#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class JGBMOOJHMBF;
namespace System { template <typename T> class Action_1; }

#define BKBICGALAOG___C_FLCAHJCAOEO_OFFSET UNITYSDK_OFFSET(0xF79DF90)
#define BKBICGALAOG___C_MHCAAHDOGKF_OFFSET UNITYSDK_OFFSET(0xF79E010)
#define BKBICGALAOG___C_OJPLLLDEAGF_OFFSET UNITYSDK_OFFSET(0xF79DFA0)
#define BKBICGALAOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF79DF40)
#define BKBICGALAOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF79DF80)

inline static constexpr unsigned int BKBICGALAOG___c_TypeDefinitionIndex = 78428;

class BKBICGALAOG___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Int32>** StaticGet___9__4_1()
	{
		return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BKBICGALAOG___c_TypeDefinitionIndex)->GetStaticField(0x40190);
	}
	static ::System::Action_1<::JGBMOOJHMBF*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::JGBMOOJHMBF*>**)Il2CppClass::FromTypeDefinitionIndex(BKBICGALAOG___c_TypeDefinitionIndex)->GetStaticField(0x40198);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BKBICGALAOG___c_TypeDefinitionIndex)->GetStaticField(0x401A0);
	}
	static ::System::Action_1<::AOCCBECFDKA*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::AOCCBECFDKA*>**)Il2CppClass::FromTypeDefinitionIndex(BKBICGALAOG___c_TypeDefinitionIndex)->GetStaticField(0x401A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKBICGALAOG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBICGALAOG___C__CTOR_OFFSET))(this);
	}

	::System::Void FLCAHJCAOEO(::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BKBICGALAOG___C_FLCAHJCAOEO_OFFSET))(this, HBJOLKHGGDD);
	}

	::System::Void OJPLLLDEAGF(::AOCCBECFDKA* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::AOCCBECFDKA*))((::PBYTE)hIl2Cpp + BKBICGALAOG___C_OJPLLLDEAGF_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void MHCAAHDOGKF(::JGBMOOJHMBF* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::JGBMOOJHMBF*))((::PBYTE)hIl2Cpp + BKBICGALAOG___C_MHCAAHDOGKF_OFFSET))(this, HMMMOCJAEOA);
	}
};
