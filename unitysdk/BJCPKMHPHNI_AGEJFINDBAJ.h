#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJCPKMHPHNI;
namespace System { class Action; }

#define BJCPKMHPHNI_AGEJFINDBAJ_HBKKBBNIEOI_OFFSET UNITYSDK_OFFSET(0xFF7AFE0)
#define BJCPKMHPHNI_AGEJFINDBAJ__CTOR_OFFSET UNITYSDK_OFFSET(0xFF7AFD0)

inline static constexpr unsigned int BJCPKMHPHNI_AGEJFINDBAJ_TypeDefinitionIndex = 44267;

class BJCPKMHPHNI_AGEJFINDBAJ : public ::System::Object
{
public:
	::BJCPKMHPHNI* KLHPEBKNIFB; // 0x10
	::System::Action* FMGGKHLELFK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCPKMHPHNI_AGEJFINDBAJ__CTOR_OFFSET))(this);
	}

	::System::Void HBKKBBNIEOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCPKMHPHNI_AGEJFINDBAJ_HBKKBBNIEOI_OFFSET))(this);
	}
};
