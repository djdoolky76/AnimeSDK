#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJFLOOJJIFO;

#define HONCDKBDCLN___C_EKGAPKNKAEG_OFFSET UNITYSDK_OFFSET(0x1FA4B070)
#define HONCDKBDCLN___C_NLFNODGCDDN_OFFSET UNITYSDK_OFFSET(0x1FA4B090)
#define HONCDKBDCLN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA4B020)
#define HONCDKBDCLN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA4B060)

inline static constexpr unsigned int HONCDKBDCLN___c_TypeDefinitionIndex = 96553;

class HONCDKBDCLN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HONCDKBDCLN___c_TypeDefinitionIndex)->GetStaticField(0x52E70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HONCDKBDCLN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HONCDKBDCLN___C__CTOR_OFFSET))(this);
	}

	::System::Int32 EKGAPKNKAEG(::System::Int32 DPGFPHIMDEL, ::System::Int32 DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HONCDKBDCLN___C_EKGAPKNKAEG_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}

	::System::Int32 NLFNODGCDDN(::DJFLOOJJIFO* DPGFPHIMDEL, ::DJFLOOJJIFO* DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::DJFLOOJJIFO*, ::DJFLOOJJIFO*))((::PBYTE)hIl2Cpp + HONCDKBDCLN___C_NLFNODGCDDN_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
