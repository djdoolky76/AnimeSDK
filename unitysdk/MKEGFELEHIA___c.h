#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define MKEGFELEHIA___C_PLDINMOGJEG_OFFSET UNITYSDK_OFFSET(0x1749FFD0)
#define MKEGFELEHIA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1749FF80)
#define MKEGFELEHIA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1749FFC0)

inline static constexpr unsigned int MKEGFELEHIA___c_TypeDefinitionIndex = 58087;

class MKEGFELEHIA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MKEGFELEHIA___c_TypeDefinitionIndex)->GetStaticField(0x32CB0);
	}
	static ::System::Object** StaticGet___9__94_0()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MKEGFELEHIA___c_TypeDefinitionIndex)->GetStaticField(0x32CB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKEGFELEHIA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGFELEHIA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 PLDINMOGJEG(::System::ValueTuple_2<::System::Int32, ::System::Int32> HBJOLKHGGDD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MKEGFELEHIA___C_PLDINMOGJEG_OFFSET))(this, HBJOLKHGGDD);
	}
};
