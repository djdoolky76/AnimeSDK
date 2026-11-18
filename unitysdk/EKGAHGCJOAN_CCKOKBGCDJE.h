#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN;
namespace System { class Action; }

#define EKGAHGCJOAN_CCKOKBGCDJE_EKEILGACEPP_OFFSET UNITYSDK_OFFSET(0x10F3C3B0)
#define EKGAHGCJOAN_CCKOKBGCDJE_HHBDDNDEBGG_OFFSET UNITYSDK_OFFSET(0x10F3C330)
#define EKGAHGCJOAN_CCKOKBGCDJE_MIBBBELFGNJ_OFFSET UNITYSDK_OFFSET(0x10F3C370)
#define EKGAHGCJOAN_CCKOKBGCDJE_PENFMBCPIBJ_OFFSET UNITYSDK_OFFSET(0x10F3C2F0)
#define EKGAHGCJOAN_CCKOKBGCDJE__CTOR_OFFSET UNITYSDK_OFFSET(0x10F3C2E0)

inline static constexpr unsigned int EKGAHGCJOAN_CCKOKBGCDJE_TypeDefinitionIndex = 51219;

class EKGAHGCJOAN_CCKOKBGCDJE : public ::System::Object
{
public:
	::System::Action* FLLGJCIOCKI; // 0x10
	::EKGAHGCJOAN* KLHPEBKNIFB; // 0x18
	::System::Action* KBGPPAOMNJB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CCKOKBGCDJE__CTOR_OFFSET))(this);
	}

	::System::Void PENFMBCPIBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CCKOKBGCDJE_PENFMBCPIBJ_OFFSET))(this);
	}

	::System::Void HHBDDNDEBGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CCKOKBGCDJE_HHBDDNDEBGG_OFFSET))(this);
	}

	::System::Void MIBBBELFGNJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CCKOKBGCDJE_MIBBBELFGNJ_OFFSET))(this);
	}

	::System::Void EKEILGACEPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CCKOKBGCDJE_EKEILGACEPP_OFFSET))(this);
	}
};
