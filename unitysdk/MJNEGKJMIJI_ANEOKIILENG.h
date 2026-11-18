#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBKBBKFNAGN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class IJLOBIGIEDO;
namespace System { class String; }

#define MJNEGKJMIJI_ANEOKIILENG_CMKAFGCBFPB_OFFSET UNITYSDK_OFFSET(0x1216B2B0)
#define MJNEGKJMIJI_ANEOKIILENG_OPBDPFNIELD_OFFSET UNITYSDK_OFFSET(0x1216B2E0)
#define MJNEGKJMIJI_ANEOKIILENG__CTOR_OFFSET UNITYSDK_OFFSET(0x1216B2A0)

inline static constexpr unsigned int MJNEGKJMIJI_ANEOKIILENG_TypeDefinitionIndex = 81574;

class MJNEGKJMIJI_ANEOKIILENG : public ::System::Object
{
public:
	::MoleMole::EntityHandle HPADNAEINPK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNEGKJMIJI_ANEOKIILENG__CTOR_OFFSET))(this);
	}

	::System::Void CMKAFGCBFPB(::System::UInt32 KDEHMPGOCEP, ::System::UInt32 HODAIDNDKHD, ::System::String* BHDNBGLCNOM, ::System::Object* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + MJNEGKJMIJI_ANEOKIILENG_CMKAFGCBFPB_OFFSET))(this, KDEHMPGOCEP, HODAIDNDKHD, BHDNBGLCNOM, EGEGIMGMJHN);
	}

	::System::Void OPBDPFNIELD(::LBKBBKFNAGN KDEHMPGOCEP, ::LBKBBKFNAGN PADJNMGMGHO, ::IJLOBIGIEDO* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::PVOID, ::LBKBBKFNAGN, ::LBKBBKFNAGN, ::IJLOBIGIEDO*))((::PBYTE)hIl2Cpp + MJNEGKJMIJI_ANEOKIILENG_OPBDPFNIELD_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO, ECMMKCJLBMD);
	}
};
