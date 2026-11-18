#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNBADLOICGB;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define KDICCLLAODB___C_GGJOMJJPGED_OFFSET UNITYSDK_OFFSET(0x1297D5B0)
#define KDICCLLAODB___C_LIPOGNJGDFH_OFFSET UNITYSDK_OFFSET(0x1297D890)
#define KDICCLLAODB___C_MJNMOGCHONK_OFFSET UNITYSDK_OFFSET(0x1297D790)
#define KDICCLLAODB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1297D560)
#define KDICCLLAODB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1297D5A0)

inline static constexpr unsigned int KDICCLLAODB___c_TypeDefinitionIndex = 63730;

class KDICCLLAODB___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__23_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(KDICCLLAODB___c_TypeDefinitionIndex)->GetStaticField(0x41090);
	}
	static ::System::Action** StaticGet___9__19_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(KDICCLLAODB___c_TypeDefinitionIndex)->GetStaticField(0x41098);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KDICCLLAODB___c_TypeDefinitionIndex)->GetStaticField(0x410A0);
	}
	static ::System::Comparison_1<::KNBADLOICGB*>** StaticGet___9__10_0()
	{
		return (::System::Comparison_1<::KNBADLOICGB*>**)Il2CppClass::FromTypeDefinitionIndex(KDICCLLAODB___c_TypeDefinitionIndex)->GetStaticField(0x410A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDICCLLAODB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDICCLLAODB___C__CTOR_OFFSET))(this);
	}

	::System::Void GGJOMJJPGED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDICCLLAODB___C_GGJOMJJPGED_OFFSET))(this);
	}

	::System::Void MJNMOGCHONK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDICCLLAODB___C_MJNMOGCHONK_OFFSET))(this);
	}

	::System::Int32 LIPOGNJGDFH(::KNBADLOICGB* DPGFPHIMDEL, ::KNBADLOICGB* DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::KNBADLOICGB*, ::KNBADLOICGB*))((::PBYTE)hIl2Cpp + KDICCLLAODB___C_LIPOGNJGDFH_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
