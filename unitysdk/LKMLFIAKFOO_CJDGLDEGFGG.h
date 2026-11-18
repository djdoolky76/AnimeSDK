#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPBHPONJIAA.h"
#include "unitysdk/System/Object.h"

class EDALIFLELHB;
class EHDHMHGIFAK;
class LKMLFIAKFOO;
namespace System { class Action; }

#define LKMLFIAKFOO_CJDGLDEGFGG_DEMBJPFNBAL_OFFSET UNITYSDK_OFFSET(0x13CF90A0)
#define LKMLFIAKFOO_CJDGLDEGFGG__CTOR_OFFSET UNITYSDK_OFFSET(0x13CF9090)

inline static constexpr unsigned int LKMLFIAKFOO_CJDGLDEGFGG_TypeDefinitionIndex = 43607;

class LKMLFIAKFOO_CJDGLDEGFGG : public ::System::Object
{
public:
	::EHDHMHGIFAK* DFMKILICPFB; // 0x10
	::LKMLFIAKFOO* KLHPEBKNIFB; // 0x18
	::System::Action* AGOMKNNKGJF; // 0x20
	::System::Action* BBEIEJKNFCP; // 0x28
	::System::Int32 DKILGKFDKEH; // 0x30
	::System::Int32 NJNOHDNDNAF; // 0x34
	::JPBHPONJIAA GMCLDBHDMJI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_CJDGLDEGFGG__CTOR_OFFSET))(this);
	}

	::System::Void DEMBJPFNBAL(::EDALIFLELHB* DMEJFNOLKIF)
	{
		return ((::System::Void(*)(::PVOID, ::EDALIFLELHB*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_CJDGLDEGFGG_DEMBJPFNBAL_OFFSET))(this, DMEJFNOLKIF);
	}
};
