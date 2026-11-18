#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNBADLOICGB;
namespace System { template <typename T> class Comparison_1; }

#define MDBMJHMPCLI___C_CNBMIOKDEKK_OFFSET UNITYSDK_OFFSET(0x151C18B0)
#define MDBMJHMPCLI___C_PMLKNANOIPN_OFFSET UNITYSDK_OFFSET(0x151C17D0)
#define MDBMJHMPCLI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151C1780)
#define MDBMJHMPCLI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151C17C0)

inline static constexpr unsigned int MDBMJHMPCLI___c_TypeDefinitionIndex = 49795;

class MDBMJHMPCLI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MDBMJHMPCLI___c_TypeDefinitionIndex)->GetStaticField(0x48500);
	}
	static ::System::Comparison_1<::KNBADLOICGB*>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::KNBADLOICGB*>**)Il2CppClass::FromTypeDefinitionIndex(MDBMJHMPCLI___c_TypeDefinitionIndex)->GetStaticField(0x48508);
	}
	static ::System::Comparison_1<::KNBADLOICGB*>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::KNBADLOICGB*>**)Il2CppClass::FromTypeDefinitionIndex(MDBMJHMPCLI___c_TypeDefinitionIndex)->GetStaticField(0x48510);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDBMJHMPCLI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBMJHMPCLI___C__CTOR_OFFSET))(this);
	}

	::System::Int32 PMLKNANOIPN(::KNBADLOICGB* DPGFPHIMDEL, ::KNBADLOICGB* DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::KNBADLOICGB*, ::KNBADLOICGB*))((::PBYTE)hIl2Cpp + MDBMJHMPCLI___C_PMLKNANOIPN_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}

	::System::Int32 CNBMIOKDEKK(::KNBADLOICGB* DPGFPHIMDEL, ::KNBADLOICGB* DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::KNBADLOICGB*, ::KNBADLOICGB*))((::PBYTE)hIl2Cpp + MDBMJHMPCLI___C_CNBMIOKDEKK_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
