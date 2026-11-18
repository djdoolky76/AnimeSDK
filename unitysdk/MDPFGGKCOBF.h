#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNGNECAGPNE.h"
#include "unitysdk/System/Object.h"

class JDNCNHPNKIK;
namespace MoleMole { class MonoGamepadBaseList; }

#define MDPFGGKCOBF__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1B5A0)

inline static constexpr unsigned int MDPFGGKCOBF_TypeDefinitionIndex = 87779;

class MDPFGGKCOBF : public ::System::Object
{
public:
	::JDNCNHPNKIK* NIMBGKNGLMP; // 0x10
	::MoleMole::MonoGamepadBaseList* HODAIDNDKHD; // 0x18
	::HNGNECAGPNE LHHCBFCOFEI; // 0x20

	::System::Void _ctor(::HNGNECAGPNE LHHCBFCOFEI, ::MoleMole::MonoGamepadBaseList* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::HNGNECAGPNE, ::MoleMole::MonoGamepadBaseList*))((::PBYTE)hIl2Cpp + MDPFGGKCOBF__CTOR_OFFSET))(this, LHHCBFCOFEI, HODAIDNDKHD);
	}
};
