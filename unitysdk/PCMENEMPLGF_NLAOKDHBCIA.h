#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class FMHDMLBDIJC;
class PCMENEMPLGF_HMFAJOGLCNJ;

#define PCMENEMPLGF_NLAOKDHBCIA_JIFFAOMLLPC_OFFSET UNITYSDK_OFFSET(0x13A88700)
#define PCMENEMPLGF_NLAOKDHBCIA__CTOR_OFFSET UNITYSDK_OFFSET(0x13A886F0)

inline static constexpr unsigned int PCMENEMPLGF_NLAOKDHBCIA_TypeDefinitionIndex = 62882;

class PCMENEMPLGF_NLAOKDHBCIA : public ::System::Object
{
public:
	::FMHDMLBDIJC* LAJMHDJAGKK; // 0x10
	::PCMENEMPLGF_HMFAJOGLCNJ* KGFKHBMEKBL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_NLAOKDHBCIA__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> JIFFAOMLLPC(::System::Object* JNDDJMAHNAI)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCMENEMPLGF_NLAOKDHBCIA_JIFFAOMLLPC_OFFSET))(this, JNDDJMAHNAI);
	}
};
