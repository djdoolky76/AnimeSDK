#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANHBKMILIDH;
namespace System { class Action; }

#define DGNKDIJPKLP_NBHOAEEFBGE_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1A1E06E0)
#define DGNKDIJPKLP_NBHOAEEFBGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E06D0)

inline static constexpr unsigned int DGNKDIJPKLP_NBHOAEEFBGE_TypeDefinitionIndex = 73393;

class DGNKDIJPKLP_NBHOAEEFBGE : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNKDIJPKLP_NBHOAEEFBGE__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::ANHBKMILIDH* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::ANHBKMILIDH*))((::PBYTE)hIl2Cpp + DGNKDIJPKLP_NBHOAEEFBGE_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
