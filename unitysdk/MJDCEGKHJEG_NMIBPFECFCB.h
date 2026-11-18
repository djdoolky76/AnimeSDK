#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define MJDCEGKHJEG_NMIBPFECFCB_DDCHHLCPFOM_OFFSET UNITYSDK_OFFSET(0x1075C600)
#define MJDCEGKHJEG_NMIBPFECFCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1075C5F0)

inline static constexpr unsigned int MJDCEGKHJEG_NMIBPFECFCB_TypeDefinitionIndex = 56404;

class MJDCEGKHJEG_NMIBPFECFCB : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_NMIBPFECFCB__CTOR_OFFSET))(this);
	}

	::System::Void DDCHHLCPFOM(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_NMIBPFECFCB_DDCHHLCPFOM_OFFSET))(this, PIIPCLCCOIG);
	}
};
