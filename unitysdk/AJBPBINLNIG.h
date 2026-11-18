#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AJBPBINLNIG_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x135EB4D0)
#define AJBPBINLNIG__CTOR_OFFSET UNITYSDK_OFFSET(0x135EB4C0)

inline static constexpr unsigned int AJBPBINLNIG_TypeDefinitionIndex = 52445;

class AJBPBINLNIG : public ::System::Object
{
public:
	// static const ::System::Int32 BMDOBJCMFCC = 0x2; // 0x0
	::System::Int32 FAKHCNLCBCE; // 0x10
	::UnityEngine::Vector3 KABNJNFBCFI; // 0x14
	::System::Boolean HHPJDJMCLFL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJBPBINLNIG__CTOR_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP(::System::Int32 IIFMJFJOOCK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJBPBINLNIG_FFCPIEDHBDP_OFFSET))(this, IIFMJFJOOCK);
	}
};
