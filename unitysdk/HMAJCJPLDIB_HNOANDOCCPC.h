#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HMAJCJPLDIB;
namespace System { class Action; }

#define HMAJCJPLDIB_HNOANDOCCPC_AALLBDKDFNN_OFFSET UNITYSDK_OFFSET(0x17B0FF00)
#define HMAJCJPLDIB_HNOANDOCCPC_MIDCPKBONBN_OFFSET UNITYSDK_OFFSET(0x17B0FED0)
#define HMAJCJPLDIB_HNOANDOCCPC__CTOR_OFFSET UNITYSDK_OFFSET(0x17B0FEC0)

inline static constexpr unsigned int HMAJCJPLDIB_HNOANDOCCPC_TypeDefinitionIndex = 59036;

class HMAJCJPLDIB_HNOANDOCCPC : public ::System::Object
{
public:
	::System::Action* MGAKJHJAGJI; // 0x10
	::HMAJCJPLDIB* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAJCJPLDIB_HNOANDOCCPC__CTOR_OFFSET))(this);
	}

	::System::Void MIDCPKBONBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAJCJPLDIB_HNOANDOCCPC_MIDCPKBONBN_OFFSET))(this);
	}

	::System::Void AALLBDKDFNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAJCJPLDIB_HNOANDOCCPC_AALLBDKDFNN_OFFSET))(this);
	}
};
