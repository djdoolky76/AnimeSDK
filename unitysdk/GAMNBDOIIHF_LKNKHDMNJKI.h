#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define GAMNBDOIIHF_LKNKHDMNJKI_IBEEFEOOKIO_OFFSET UNITYSDK_OFFSET(0x11D98140)
#define GAMNBDOIIHF_LKNKHDMNJKI__CTOR_OFFSET UNITYSDK_OFFSET(0x11D98130)

inline static constexpr unsigned int GAMNBDOIIHF_LKNKHDMNJKI_TypeDefinitionIndex = 87424;

class GAMNBDOIIHF_LKNKHDMNJKI : public ::System::Object
{
public:
	::System::Action* AONGGJGJNMM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_LKNKHDMNJKI__CTOR_OFFSET))(this);
	}

	::System::Void IBEEFEOOKIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_LKNKHDMNJKI_IBEEFEOOKIO_OFFSET))(this);
	}
};
