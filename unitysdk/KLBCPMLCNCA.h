#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FADPHIBJJBL.h"
#include "unitysdk/System/EventArgs.h"

#define KLBCPMLCNCA__CTOR_OFFSET UNITYSDK_OFFSET(0x129A2910)

inline static constexpr unsigned int KLBCPMLCNCA_TypeDefinitionIndex = 68975;

class KLBCPMLCNCA : public ::System::EventArgs
{
public:
	::FADPHIBJJBL BHMLIFIKCEL; // 0x10
	::System::Int32 IAOHHGHLCMJ; // 0x14
	::System::Int32 NDOMMKEMILF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBCPMLCNCA__CTOR_OFFSET))(this);
	}
};
